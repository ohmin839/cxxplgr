#include <iostream>
#include <set>
#include <string>
#include <sqlite3.h>

#include "cxxplgr/secondary.hpp"
#include "cxxplgr/sqlite3.hpp"

namespace cxxplgr { namespace collector
{
    using cxxplgr::secondary::to_sortable;

    void db_exec(const char* filename, std::set<std::string> &words)
    {
        sqlite3* db = nullptr;
        
        wrap_sqlite3_open_v2(
                filename, &db,
                SQLITE_OPEN_READWRITE | SQLITE_OPEN_CREATE, nullptr); 

        db_insert(&db, words);

        wrap_sqlite3_close(db);
    }

    void db_insert(sqlite3** db, std::set<std::string> &words)
    {
        // begin transaction
        wrap_sqlite3_exec(*db, "BEGIN TRANSACTION", nullptr, nullptr, nullptr);

        // create table
        const char* sql_create =
            "CREATE TABLE IF NOT EXISTS word_sample("
            "id INTEGER PRIMARY KEY,"
            "original_text TEXT NOT NULL UNIQUE,"
            "sortable_text TEXT NOT NULL)";
        wrap_sqlite3_exec(*db, sql_create, nullptr, nullptr, nullptr);

        // prepare insert statement
        const char* sql_insert =
            "INSERT OR REPLACE INTO word_sample("
            "original_text, sortable_text) VALUES(?1, ?2)";
        sqlite3_stmt* stmt = nullptr;
        wrap_sqlite3_prepare_v2(*db, sql_insert, -1, &stmt, nullptr);

        // insert each ward
        for(std::string word : words)
        {
            std::string sortable = to_sortable(word);
            wrap_sqlite3_bind_text(stmt, 1, word.c_str(), -1, SQLITE_STATIC); 
            wrap_sqlite3_bind_text(stmt, 2, sortable.c_str(), -1, SQLITE_STATIC); 
            wrap_sqlite3_step(stmt);
            wrap_sqlite3_reset(stmt);
        }
        wrap_sqlite3_finalize(stmt);

        // close transaction
        wrap_sqlite3_exec(*db, "COMMIT", nullptr, nullptr, nullptr);
    }

    void wrap_sqlite3_open_v2(const char* filename, sqlite3** ppDb, int flags, const char* zVfs)
    {
        int err = sqlite3_open_v2(filename, ppDb, flags, zVfs); 
        if (SQLITE_OK != err)
        {
            throw err;
        }
    }

    void wrap_sqlite3_exec(sqlite3* db, const char* sql, int (*callback)(void*, int, char**, char**), void* args, char** errmsg)
    {
        int err = sqlite3_exec(db, sql, callback, args, errmsg);
        if (SQLITE_OK != err)
        {
            throw err;
        }
    }

    void wrap_sqlite3_prepare_v2(sqlite3* db, const char* zSql, int nByte, sqlite3_stmt **ppStmt, const char** pzTail)
    {
        int err = sqlite3_prepare_v2(db, zSql, nByte, ppStmt, pzTail);
        if (SQLITE_OK != err)
        {
            throw err;
        }
    }

    void wrap_sqlite3_bind_text(sqlite3_stmt* stmt, int idx, const char* val, int nBytes, void(*callback)(void*))
    {
        int err = sqlite3_bind_text(stmt, idx, val, nBytes, callback); 
        if (SQLITE_OK != err)
        {
            throw err;
        }
    }

    void wrap_sqlite3_step(sqlite3_stmt* stmt)
    {
        int err = sqlite3_step(stmt);
        if (SQLITE_DONE != err)
        {
            throw err;
        }
 
    }

    void wrap_sqlite3_reset(sqlite3_stmt* stmt)
    {
        int err = sqlite3_reset(stmt);
        if (SQLITE_DONE != err)
        {
            throw err;
        }
    }

    void wrap_sqlite3_finalize(sqlite3_stmt* stmt)
    {
        int err = sqlite3_finalize(stmt);
        if (SQLITE_DONE != err)
        {
            throw err;
        }
    }

    void wrap_sqlite3_close(sqlite3* db)
    {
        int err = sqlite3_close(db);
        if (SQLITE_DONE != err)
        {
            throw err;
        }
    }
}}
