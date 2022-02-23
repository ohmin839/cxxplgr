#if !defined(CXXPLGR_COLLECTOR_HPP)
#define CXXPLGR_COLLECTOR_HPP

#include <set>
#include <string>

namespace cxxplgr { namespace collector
{
    void collect(std::set<std::string> &words, std::string line);
}}

#endif
