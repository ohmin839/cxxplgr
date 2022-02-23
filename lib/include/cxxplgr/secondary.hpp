#if !defined(CXXPLGR_SECONDARY_HPP)
#define CXXPLGR_SECONDARY_HPP

#include <string>
#include <vector>

namespace cxxplgr { namespace secondary
{
    std::vector<std::string> split_into_words(std::string text);
    std::string without_accent(std::string text);
    std::string without_breath(std::string text);
    std::string to_lower(std::string text);
    std::string to_upper(std::string text);
    std::string without_dialesis(std::string text);
    std::string without_iota_subscriptum(std::string text);
    std::string replace_punctuation(std::string text, std::string rch);
    std::string to_sortable(std::string text);
}}
#endif
