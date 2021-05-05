#include <iostream>
#include <set>
#include <string>
#include <sqlite3.h>

#include "cxxplgr/secondary.hpp"
#include "cxxplgr/sqlite3.hpp"

namespace cxxplgr { namespace collector
{
    using cxxplgr::secondary::to_sortable;

    void db_exec(const char* file, std::set<std::string> &words)
    {
        int err;
        sqlite3* db = nullptr;
        
        err = db_init(file, &db);
        if (SQLITE_OK != err)
        {
            std::cout << "SQLITE INIT FAILED: " << err << std::endl;
            return;
        }

        err = db_insert(&db, words);
        if (SQLITE_OK != err)
        {
            std::cout << "SQLITE INSERT FAILED: " << err << std::endl;
            return;
        }

        err = db_close(&db);
        if (SQLITE_OK != err)
        {
            std::cout << "SQLITE CLOSE FAILED: " << err << std::endl;
        }
    }

    int db_init(const char* file, sqlite3** db)
    {
        int err;

        err = sqlite3_open_v2(
                file, db,
                SQLITE_OPEN_READWRITE | SQLITE_OPEN_CREATE, NULL); 
        if (SQLITE_OK != err)
        {
            return err;
        }

        return SQLITE_OK;
    }

    int db_insert(sqlite3** db, std::set<std::string> &words)
    {
        int err;

        err = sqlite3_exec(*db, "BEGIN TRANSACTION", nullptr, nullptr, nullptr);
        if (SQLITE_OK != err)
        {
            return err;
        }

        const char* sql_create =
            "CREATE TABLE IF NOT EXISTS word_sample("
            "id INTEGER PRIMARY KEY,"
            "original_text TEXT NOT NULL UNIQUE,"
            "sortable_text TEXT NOT NULL)";
        err = sqlite3_exec(*db, sql_create, nullptr, nullptr, nullptr);
        if (SQLITE_OK != err)
        {
            return err;
        }

        const char* sql_insert =
            "INSERT OR REPLACE INTO word_sample("
            "original_text, sortable_text) VALUES(?1, ?2)";
        sqlite3_stmt* stmt = nullptr;

        err = sqlite3_prepare_v2(
                *db, sql_insert, -1,
                &stmt, nullptr);
        if (SQLITE_OK != err)
        {
            return err;
        }

        for(std::string word : words)
        {
            std::string sortable = to_sortable(word);
            err = sqlite3_bind_text(stmt, 1,
                    word.c_str(), -1, SQLITE_STATIC); 
            if (SQLITE_OK != err)
            {
                return err;
            }
            err = sqlite3_bind_text(stmt, 2,
                    sortable.c_str(), -1, SQLITE_STATIC); 
            if (SQLITE_OK != err)
            {
                return err;
            }
            err = sqlite3_step(stmt);
            if (SQLITE_DONE != err)
            {
                return err;
            }
            err = sqlite3_reset(stmt);
            if (SQLITE_OK != err)
            {
                return err;
            }
        }

        err = sqlite3_finalize(stmt);
        if (SQLITE_OK != err)
        {
            return err;
        }

        err = sqlite3_exec(*db, "COMMIT", nullptr, nullptr, nullptr);
        if (SQLITE_OK != err)
        {
            return err;
        }

        return SQLITE_OK;
    }

    int db_close(sqlite3** db)
    {
        int err = sqlite3_close(*db);
        if (SQLITE_OK != err)
        {
            return err;
        }
        return SQLITE_OK;
    }
}}
