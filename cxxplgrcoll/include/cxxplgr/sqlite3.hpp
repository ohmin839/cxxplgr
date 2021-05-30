#if !defined(CXXPLGR_SQLITE3_HPP)
#define CXXPLGR_SQLITE3_HPP

#include <string>
#include <set>
#include <sqlite3.h>

namespace cxxplgr { namespace collector
{
    void db_exec(const char* filename, std::set<std::string> &words);
    void db_insert(sqlite3** db, std::set<std::string> &words);

    void wrap_sqlite3_open_v2(const char* filename, sqlite3** ppDb, int flags, const char* zVfs);
    void wrap_sqlite3_exec(sqlite3* db, const char* sql, int (*callback)(void*, int, char**, char**), void* args, char** errmsg);
    void wrap_sqlite3_prepare_v2(sqlite3* db, const char* zSql, int nByte, sqlite3_stmt **ppStmt, const char** pzTail);
    void wrap_sqlite3_bind_text(sqlite3_stmt* stmt, int idx, const char* val, int nBytes, void(*callback)(void*));
    void wrap_sqlite3_step(sqlite3_stmt* stmt);
    void wrap_sqlite3_reset(sqlite3_stmt* stmt);
    void wrap_sqlite3_finalize(sqlite3_stmt* stmt);
    void wrap_sqlite3_close(sqlite3* db);
}}

#endif
