#if !defined(CXXPLGR_SQLITE3_HPP)
#define CXXPLGR_SQLITE3_HPP

#include <string>
#include <set>
#include <sqlite3.h>

namespace cxxplgr { namespace collector
{
    void db_exec(const char* file, std::set<std::string> &words);
    int db_init(const char* file, sqlite3** db);
    int db_insert(sqlite3** db, std::set<std::string> &words);
    int db_close(sqlite3** db);
}}

#endif
