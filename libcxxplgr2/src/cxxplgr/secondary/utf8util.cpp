#include <algorithm>
#include <string>
#include <list>
#include <numeric>
#include <functional>

#include <boost/regex/pending/unicode_iterator.hpp>

#include "cxxplgr/secondary/utf8util.hpp"

namespace cxxplgr { namespace secondary
{
    std::string to_utf8_char(boost::uint32_t cp)
    {
        if (cp <= 0x7F)
        {
            return std::string({char(cp)});
        }
        else if (cp <= 0x7FF)
        {
            return std::string({
                    (char)((cp >> 6) + 0xC0),
                    (char)((cp & 0x3F) + 0x80)});
        }
        else if (0xE00 <= cp && cp <= 0xFFFF)
        {
            return std::string({
                    (char)((cp >> 12) + 0xE0),
                    (char)(((cp >> 6) & 0x3F) + 0x80),
                    (char)((cp & 0x3F) + 0x80)});
        }
        else if (cp <= 0x10FFFF)
        {
            return std::string({
                    (char)((cp >> 18) + 0xF0),
                    (char)(((cp >> 12) & 0x3F) + 0x80),
                    (char)(((cp >>  6) & 0x3F) + 0x80),
                    (char)((cp & 0x3F) + 0x80)});
        }
        else
        {
            return std::string({(char)0xEF, (char)0xBF, (char)0xBD});
        }
    }

    std::list<std::string> to_utf8_list(std::string s)
    {
        char* cs_begin = (char *)s.c_str();
        char* cs_end   = cs_begin + s.length();

        boost::u8_to_u32_iterator<std::string::const_iterator> begin(s.begin()), end(s.end());

        std::list<std::string> l;
        for (; begin != end; begin++)
        {
            l.push_back(to_utf8_char(*begin));
        }
        return l;
    }

    std::string map_utf8(std::string s, std::function<std::string(std::string)> mapf)
    {
        std::list<std::string> in_list = to_utf8_list(s);
        std::list<std::string> out_list(in_list.size());
        std::transform(
                in_list.begin(), in_list.end(), out_list.begin(),
                mapf);
        return std::accumulate(
                out_list.begin(), out_list.end(),
                std::string(""),
                [](std::string s1, std::string s2)
                {
                    return s1 + s2;
                });
    }
}}
