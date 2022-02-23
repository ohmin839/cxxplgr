#include <string>

#include "cxxplgr/secondary/accent.hpp"

namespace cxxplgr { namespace secondary
{
    std::string without_accent_char(std::string ch)
    {
        // small alpha
        if (std::string("άὰᾶ").find(ch) != std::string::npos) return "α";
        if (std::string("ᾴᾲᾷ").find(ch) != std::string::npos) return "ᾳ";
        if (std::string("ἅἃἇ").find(ch) != std::string::npos) return "ἁ";
        if (std::string("ᾅᾃᾇ").find(ch) != std::string::npos) return "ᾁ";
        if (std::string("ἄἂἆ").find(ch) != std::string::npos) return "ἀ";
        if (std::string("ᾄᾂᾆ").find(ch) != std::string::npos) return "ᾀ";
        // small epsilon
        if (std::string("έὲ").find(ch) != std::string::npos) return "ε";
        if (std::string("ἕἓ").find(ch) != std::string::npos) return "ἑ";
        if (std::string("ἔἒ").find(ch) != std::string::npos) return "ἐ";
        // small eta
        if (std::string("ήὴῆ").find(ch) != std::string::npos) return "η";
        if (std::string("ῄῂῇ").find(ch) != std::string::npos) return "ῃ";
        if (std::string("ἥἣἧ").find(ch) != std::string::npos) return "ἡ";
        if (std::string("ᾕᾓᾗ").find(ch) != std::string::npos) return "ᾑ";
        if (std::string("ἤἢἦ").find(ch) != std::string::npos) return "ἠ";
        if (std::string("ᾔᾒᾖ").find(ch) != std::string::npos) return "ᾐ";
        // small iota
        if (std::string("ίὶῖ").find(ch) != std::string::npos) return "ι";
        if (std::string("ἵἳἷ").find(ch) != std::string::npos) return "ἱ";
        if (std::string("ἴἲἶ").find(ch) != std::string::npos) return "ἰ";
        if (std::string("ΐῒῗ").find(ch) != std::string::npos) return "ϊ";
        // small omicron
        if (std::string("όὸ").find(ch) != std::string::npos) return "ο";
        if (std::string("ὅὃ").find(ch) != std::string::npos) return "ὁ";
        if (std::string("ὄὂ").find(ch) != std::string::npos) return "ὀ";
        // small upsilon
        if (std::string("ύὺῦ").find(ch) != std::string::npos) return "υ";
        if (std::string("ὕὓὗ").find(ch) != std::string::npos) return "ὑ";
        if (std::string("ὔὒὖ").find(ch) != std::string::npos) return "ὐ";
        if (std::string("ΰῢῧ").find(ch) != std::string::npos) return "ϋ";
        // small omega
        if (std::string("ώὼῶ").find(ch) != std::string::npos) return "ω";
        if (std::string("ῴῲῷ").find(ch) != std::string::npos) return "ῳ";
        if (std::string("ὥὣὧ").find(ch) != std::string::npos) return "ὡ";
        if (std::string("ᾥᾣᾧ").find(ch) != std::string::npos) return "ᾡ";
        if (std::string("ὤὢὦ").find(ch) != std::string::npos) return "ὠ";
        if (std::string("ᾤᾢᾦ").find(ch) != std::string::npos) return "ᾠ";
        // large alpha
        if (std::string("ΆᾺ").find(ch) != std::string::npos) return "Α";
        if (std::string("ἍἋἏ").find(ch) != std::string::npos) return "Ἁ";
        if (std::string("ᾍᾋᾏ").find(ch) != std::string::npos) return "ᾉ";
        if (std::string("ἌἊἎ").find(ch) != std::string::npos) return "Ἀ";
        if (std::string("ᾌᾊᾎ").find(ch) != std::string::npos) return "ᾈ";
        // large epsilon
        if (std::string("ΈῈ").find(ch) != std::string::npos) return "Ε";
        if (std::string("ἝἛ").find(ch) != std::string::npos) return "Ἑ";
        if (std::string("ἜἚ").find(ch) != std::string::npos) return "Ἐ";
        // large eta
        if (std::string("ΉῊ").find(ch) != std::string::npos) return "Η";
        if (std::string("ἭἫἯ").find(ch) != std::string::npos) return "Ἡ";
        if (std::string("ᾝᾛᾟ").find(ch) != std::string::npos) return "ᾙ";
        if (std::string("ἬἪἮ").find(ch) != std::string::npos) return "Ἠ";
        if (std::string("ᾜᾚᾞ").find(ch) != std::string::npos) return "ᾘ";
        // large iota
        if (std::string("ΊῚ").find(ch) != std::string::npos) return "Ι";
        if (std::string("ἽἻἿ").find(ch) != std::string::npos) return "Ἱ";
        if (std::string("ἼἺἾ").find(ch) != std::string::npos) return "Ἰ";
        // large omicron
        if (std::string("ΌῸ").find(ch) != std::string::npos) return "Ο";
        if (std::string("ὍὋ").find(ch) != std::string::npos) return "Ὁ";
        if (std::string("ὌὊ").find(ch) != std::string::npos) return "Ὀ";
        // large upsilon
        if (std::string("ΎῪ").find(ch) != std::string::npos) return "Υ";
        if (std::string("ὝὛὟ").find(ch) != std::string::npos) return "Ὑ";
        // large omega
        if (std::string("ΏῺ").find(ch) != std::string::npos) return "Ω";
        if (std::string("ὭὫὯ").find(ch) != std::string::npos) return "Ὡ";
        if (std::string("ᾭᾫᾯ").find(ch) != std::string::npos) return "ᾩ";
        if (std::string("ὬὪὮ").find(ch) != std::string::npos) return "Ὠ";
        if (std::string("ᾬᾪᾮ").find(ch) != std::string::npos) return "ᾨ";
        return ch;
    }
}}
