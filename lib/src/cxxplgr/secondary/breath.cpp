#include <string>

#include "cxxplgr/secondary/breath.hpp"

namespace cxxplgr { namespace secondary
{
    std::string without_breath_char(std::string ch)
    {
        // small alpha
        if (std::string("ἁἀ").find(ch) != std::string::npos) return "α";
        if (std::string("ᾁᾀ").find(ch) != std::string::npos) return "ᾳ";
        if (std::string("ἅἄ").find(ch) != std::string::npos) return "ά";
        if (std::string("ᾅᾄ").find(ch) != std::string::npos) return "ᾴ";
        if (std::string("ἃἂ").find(ch) != std::string::npos) return "ὰ";
        if (std::string("ᾃᾂ").find(ch) != std::string::npos) return "ᾲ";
        if (std::string("ἇἆ").find(ch) != std::string::npos) return "ᾶ";
        if (std::string("ᾇᾆ").find(ch) != std::string::npos) return "ᾷ";
        // small epsilon
        if (std::string("ἑἐ").find(ch) != std::string::npos) return "ε";
        if (std::string("ἕἔ").find(ch) != std::string::npos) return "έ";
        if (std::string("ἓἒ").find(ch) != std::string::npos) return "ὲ";
        // small eta
        if (std::string("ἡἠ").find(ch) != std::string::npos) return "η";
        if (std::string("ᾑᾐ").find(ch) != std::string::npos) return "ῃ";
        if (std::string("ἥἤ").find(ch) != std::string::npos) return "ή";
        if (std::string("ᾕᾔ").find(ch) != std::string::npos) return "ῄ";
        if (std::string("ἣἢ").find(ch) != std::string::npos) return "ὴ";
        if (std::string("ᾓᾒ").find(ch) != std::string::npos) return "ῂ";
        if (std::string("ἧἦ").find(ch) != std::string::npos) return "ῆ";
        if (std::string("ᾗᾖ").find(ch) != std::string::npos) return "ῇ";
        // small iota
        if (std::string("ἱἰ").find(ch) != std::string::npos) return "ι";
        if (std::string("ἵἴ").find(ch) != std::string::npos) return "ί";
        if (std::string("ἳἲ").find(ch) != std::string::npos) return "ὶ";
        if (std::string("ἷἶ").find(ch) != std::string::npos) return "ῖ";
        // small omicron
        if (std::string("ὁὀ").find(ch) != std::string::npos) return "ο";
        if (std::string("ὅὄ").find(ch) != std::string::npos) return "ό";
        if (std::string("ὃὂ").find(ch) != std::string::npos) return "ὸ";
        // small rho
        if (std::string("ῥῤ").find(ch) != std::string::npos) return "ρ";
        // small upsilon
        if (std::string("ὑὐ").find(ch) != std::string::npos) return "υ";
        if (std::string("ὕὔ").find(ch) != std::string::npos) return "ύ";
        if (std::string("ὓὒ").find(ch) != std::string::npos) return "ὺ";
        if (std::string("ὗὖ").find(ch) != std::string::npos) return "ῦ";
        // small omega
        if (std::string("ὡὠ").find(ch) != std::string::npos) return "ω";
        if (std::string("ᾡᾠ").find(ch) != std::string::npos) return "ῳ";
        if (std::string("ὥὤ").find(ch) != std::string::npos) return "ώ";
        if (std::string("ᾥᾤ").find(ch) != std::string::npos) return "ῴ";
        if (std::string("ὣὢ").find(ch) != std::string::npos) return "ὼ";
        if (std::string("ᾣᾢ").find(ch) != std::string::npos) return "ῲ";
        if (std::string("ὧὦ").find(ch) != std::string::npos) return "ῶ";
        if (std::string("ᾧᾦ").find(ch) != std::string::npos) return "ῷ";
        // large alpha
        if (std::string("ἉἈ").find(ch) != std::string::npos) return "Α";
        if (std::string("ᾉᾈ").find(ch) != std::string::npos) return "ᾼ";
        if (std::string("ἍἌ").find(ch) != std::string::npos) return "Ά";
        if (std::string("ᾍᾌ").find(ch) != std::string::npos) return "ᾼ";
        if (std::string("ἋἊ").find(ch) != std::string::npos) return "Ὰ";
        if (std::string("ᾋᾊ").find(ch) != std::string::npos) return "ᾼ";
        if (std::string("ἏἎ").find(ch) != std::string::npos) return "Α";
        if (std::string("ᾏᾎ").find(ch) != std::string::npos) return "ᾼ";
        // large epsilon
        if (std::string("ἙἘ").find(ch) != std::string::npos) return "Ε";
        if (std::string("ἝἜ").find(ch) != std::string::npos) return "Έ";
        if (std::string("ἛἚ").find(ch) != std::string::npos) return "Ὲ";
        // large eta
        if (std::string("ἩἨ").find(ch) != std::string::npos) return "Η";
        if (std::string("ᾙᾘ").find(ch) != std::string::npos) return "ῌ";
        if (std::string("ἭἬ").find(ch) != std::string::npos) return "Ή";
        if (std::string("ᾝᾜ").find(ch) != std::string::npos) return "ῌ";
        if (std::string("ἫἪ").find(ch) != std::string::npos) return "Ὴ";
        if (std::string("ᾛᾚ").find(ch) != std::string::npos) return "ῌ";
        if (std::string("ἯἮ").find(ch) != std::string::npos) return "Η";
        if (std::string("ᾟᾞ").find(ch) != std::string::npos) return "ῌ";
        // large iota
        if (std::string("ἹἸ").find(ch) != std::string::npos) return "Ι";
        if (std::string("ἽἼ").find(ch) != std::string::npos) return "Ί";
        if (std::string("ἻἺ").find(ch) != std::string::npos) return "Ὶ";
        if (std::string("ἿἾ").find(ch) != std::string::npos) return "Ι";
        // large omicron
        if (std::string("ὉὈ").find(ch) != std::string::npos) return "Ο";
        if (std::string("ὍὌ").find(ch) != std::string::npos) return "Ό";
        if (std::string("ὋὊ").find(ch) != std::string::npos) return "Ὸ";
        // large rho
        if (std::string("Ῥ").find(ch) != std::string::npos) return "Ρ";
        // large upsilon
        if (std::string("Ὑ").find(ch) != std::string::npos) return "Υ";
        if (std::string("Ὕ").find(ch) != std::string::npos) return "Ύ";
        if (std::string("Ὓ").find(ch) != std::string::npos) return "Ὺ";
        if (std::string("Ὗ").find(ch) != std::string::npos) return "Υ";
        // large omega
        if (std::string("ὩὨ").find(ch) != std::string::npos) return "Ω";
        if (std::string("ᾩᾨ").find(ch) != std::string::npos) return "ῼ";
        if (std::string("ὭὬ").find(ch) != std::string::npos) return "Ώ";
        if (std::string("ᾭᾬ").find(ch) != std::string::npos) return "ῼ";
        if (std::string("ὫὪ").find(ch) != std::string::npos) return "Ὼ";
        if (std::string("ᾫᾪ").find(ch) != std::string::npos) return "ῼ";
        if (std::string("ὯὮ").find(ch) != std::string::npos) return "Ω";
        if (std::string("ᾯᾮ").find(ch) != std::string::npos) return "ῼ";
        return ch;
    }
}}
