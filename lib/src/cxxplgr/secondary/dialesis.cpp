#include <string>

#include "cxxplgr/secondary/dialesis.hpp"

namespace cxxplgr { namespace secondary
{
    std::string without_dialesis_char(std::string ch)
    {
        if (ch == "ϊ") return "ι";
        if (ch == "ϊ") return "ι";
        if (ch == "ΐ") return "ί";
        if (ch == "ῒ") return "ὶ";
        if (ch == "ῗ") return "ῖ";
        if (ch == "ϋ") return "υ";
        if (ch == "ΰ") return "ύ";
        if (ch == "ῢ") return "ὺ";
        if (ch == "ῧ") return "ῦ";
        return ch;
    }
}}
