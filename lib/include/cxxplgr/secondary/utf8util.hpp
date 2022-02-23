#if !defined(CXXPLGR_SECONDARY_UTF8UTIL_HPP)
#define CXXPLGR_SECONDARY_UTF8UTIL_HPP

#include <string>
#include <list>
#include <functional>

namespace cxxplgr { namespace secondary
{
    std::string to_utf8_char(uint32_t cp);
    std::list<std::string> to_utf8_list(std::string s);
    std::string map_utf8(std::string s, std::function<std::string(std::string)> mapf);
}}

#endif
