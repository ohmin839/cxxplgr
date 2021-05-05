#include <string>

#include "cxxplgr/secondary/iota.hpp"

namespace cxxplgr { namespace secondary
{
    std::string without_iota_subscriptum_char(std::string ch)
    {
        if (ch == "ᾳ") return "α";
        if (ch == "ᾴ") return "ά";
        if (ch == "ᾲ") return "ὰ";
        if (ch == "ᾷ") return "ᾶ";
        if (ch == "ᾁ") return "ἁ";
        if (ch == "ᾅ") return "ἅ";
        if (ch == "ᾃ") return "ἃ";
        if (ch == "ᾇ") return "ἇ";
        if (ch == "ᾀ") return "ἀ";
        if (ch == "ᾄ") return "ἄ";
        if (ch == "ᾂ") return "ἂ";
        if (ch == "ᾆ") return "ἆ";
        if (ch == "ῃ") return "η";
        if (ch == "ῄ") return "ή";
        if (ch == "ῂ") return "ὴ";
        if (ch == "ῇ") return "ῆ";
        if (ch == "ᾑ") return "ἡ";
        if (ch == "ᾕ") return "ἥ";
        if (ch == "ᾓ") return "ἣ";
        if (ch == "ᾗ") return "ἧ";
        if (ch == "ᾐ") return "ἠ";
        if (ch == "ᾔ") return "ἤ";
        if (ch == "ᾒ") return "ἢ";
        if (ch == "ᾖ") return "ἦ";
        if (ch == "ῳ") return "ω";
        if (ch == "ῴ") return "ώ";
        if (ch == "ῲ") return "ὼ";
        if (ch == "ῷ") return "ῶ";
        if (ch == "ᾡ") return "ὡ";
        if (ch == "ᾥ") return "ὥ";
        if (ch == "ᾣ") return "ὣ";
        if (ch == "ᾧ") return "ὧ";
        if (ch == "ᾠ") return "ὠ";
        if (ch == "ᾤ") return "ὤ";
        if (ch == "ᾢ") return "ὢ";
        if (ch == "ᾦ") return "ὦ";
        if (ch == "ᾼ") return "Α";
        if (ch == "Ὰ") return "Ά";
        if (ch == "ᾉ") return "Ἁ";
        if (ch == "ᾍ") return "Ἅ";
        if (ch == "ᾋ") return "Ἃ";
        if (ch == "ᾏ") return "Ἇ";
        if (ch == "ᾈ") return "Ἀ";
        if (ch == "ᾌ") return "Ἄ";
        if (ch == "ᾊ") return "Ἂ";
        if (ch == "ᾎ") return "Ἆ";
        if (ch == "ῌ") return "Η";
        if (ch == "Ὴ") return "Ή";
        if (ch == "ᾙ") return "Ἡ";
        if (ch == "ᾝ") return "Ἥ";
        if (ch == "ᾛ") return "Ἣ";
        if (ch == "ᾟ") return "Ἧ";
        if (ch == "ᾘ") return "Ἠ";
        if (ch == "ᾜ") return "Ἤ";
        if (ch == "ᾚ") return "Ἢ";
        if (ch == "ᾞ") return "Ἦ";
        if (ch == "ῼ") return "Ω";
        if (ch == "Ὼ") return "Ώ";
        if (ch == "ᾩ") return "Ὡ";
        if (ch == "ᾭ") return "Ὥ";
        if (ch == "ᾫ") return "Ὣ";
        if (ch == "ᾯ") return "Ὧ";
        if (ch == "ᾨ") return "Ὠ";
        if (ch == "ᾬ") return "Ὤ";
        if (ch == "ᾪ") return "Ὢ";
        if (ch == "ᾮ") return "Ὦ";
        return ch;
    }
}}
