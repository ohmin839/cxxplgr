#include <string>
#include <algorithm>
#include <numeric>
#include <vector>

#include "cxxplgr/secondary/grammar.hpp"
#include "cxxplgr/secondary/utf8util.hpp"
#include "cxxplgr/secondary/accent.hpp"
#include "cxxplgr/secondary/breath.hpp"
#include "cxxplgr/secondary/case.hpp"
#include "cxxplgr/secondary/dialesis.hpp"
#include "cxxplgr/secondary/iota.hpp"

namespace cxxplgr { namespace secondary
{
    std::vector<std::string> split_into_words(std::string text)
    {
        using iterator_type = std::string::const_iterator;
        iterator_type iter = text.begin();
        iterator_type const end = text.end();

        using cxxplgr::secondary::grammar;

        std::vector<std::string> result;
        parse(iter, end, grammar, result);

        return result;
    }

    std::string without_accent(std::string text)
    {
        return map_utf8(text, without_accent_char);
    }

    std::string without_breath(std::string text)
    {
        return map_utf8(text, without_breath_char);
    }

    std::string to_lower(std::string text)
    {
        return map_utf8(text, to_lower_char);
    }

    std::string to_upper(std::string text)
    {
        return map_utf8(text, to_upper_char);
    }

    std::string without_dialesis(std::string text)
    {
        return map_utf8(text, without_dialesis_char);
    }

    std::string without_iota_subscriptum(std::string text)
    {
        return map_utf8(text, without_iota_subscriptum_char);
    }

    std::string to_sortable(std::string text)
    {
        return to_lower(
                without_accent(
                    without_breath(
                        without_dialesis(
                            without_iota_subscriptum(text)))));
    }
}}
