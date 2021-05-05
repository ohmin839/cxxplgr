#include <string>

#include "cxxplgr/secondary/case.hpp"

namespace cxxplgr { namespace secondary
{
    std::string to_lower_char(std::string ch)
    {
        //large consonant
        if (ch == "Β") return "β";
        if (ch == "Γ") return "γ";
        if (ch == "Δ") return "δ";
        if (ch == "Ζ") return "ζ";
        if (ch == "Θ") return "θ";
        if (ch == "Κ") return "κ";
        if (ch == "Λ") return "λ";
        if (ch == "Μ") return "μ";
        if (ch == "Ν") return "ν";
        if (ch == "Ξ") return "ξ";
        if (ch == "Π") return "π";
        if (ch == "Σ") return "σ";
        if (ch == "Τ") return "τ";
        if (ch == "Φ") return "φ";
        if (ch == "Χ") return "χ";
        if (ch == "Ψ") return "ψ";
        // large alpha
        if (ch == "Α") return "α";
        if (ch == "ᾼ") return "ᾳ";
        if (ch == "Ά") return "ά";
        if (ch == "Ὰ") return "ὰ";
        if (ch == "Ἁ") return "ἁ";
        if (ch == "ᾉ") return "ᾁ";
        if (ch == "Ἅ") return "ἅ";
        if (ch == "ᾍ") return "ᾅ";
        if (ch == "Ἃ") return "ἃ";
        if (ch == "ᾋ") return "ᾃ";
        if (ch == "Ἇ") return "ἇ";
        if (ch == "ᾏ") return "ᾇ";
        if (ch == "Ἀ") return "ἀ";
        if (ch == "ᾈ") return "ᾀ";
        if (ch == "Ἄ") return "ἄ";
        if (ch == "ᾌ") return "ᾄ";
        if (ch == "Ἂ") return "ἂ";
        if (ch == "ᾊ") return "ᾂ";
        if (ch == "Ἆ") return "ἆ";
        if (ch == "ᾎ") return "ᾆ";
        // large epsilon
        if (ch == "Ε") return "ε";
        if (ch == "Έ") return "έ";
        if (ch == "Ὲ") return "ὲ";
        if (ch == "Ἑ") return "ἑ";
        if (ch == "Ἕ") return "ἕ";
        if (ch == "Ἓ") return "ἓ";
        if (ch == "Ἐ") return "ἐ";
        if (ch == "Ἔ") return "ἔ";
        if (ch == "Ἒ") return "ἒ";
        // large eta
        if (ch == "Η") return "η";
        if (ch == "ῌ") return "ῃ";
        if (ch == "Ή") return "ή";
        if (ch == "Ὴ") return "ῄ";
        if (ch == "Ἡ") return "ὴ";
        if (ch == "ᾙ") return "ῂ";
        if (ch == "Ἥ") return "ἥ";
        if (ch == "ᾝ") return "ᾕ";
        if (ch == "Ἣ") return "ἣ";
        if (ch == "ᾛ") return "ᾓ";
        if (ch == "Ἧ") return "ἧ";
        if (ch == "ᾟ") return "ᾗ";
        if (ch == "Ἠ") return "ἠ";
        if (ch == "ᾘ") return "ᾐ";
        if (ch == "Ἤ") return "ἤ";
        if (ch == "ᾜ") return "ᾔ";
        if (ch == "Ἢ") return "ἢ";
        if (ch == "ᾚ") return "ᾒ";
        if (ch == "Ἦ") return "ἦ";
        if (ch == "ᾞ") return "ᾖ";
        // large iota
        if (ch == "Ι") return "ι";
        if (ch == "Ί") return "ί";
        if (ch == "Ὶ") return "ὶ";
        if (ch == "Ἱ") return "ἱ";
        if (ch == "Ἵ") return "ἵ";
        if (ch == "Ἳ") return "ἳ";
        if (ch == "Ἷ") return "ἷ";
        if (ch == "Ἰ") return "ἰ";
        if (ch == "Ἴ") return "ἴ";
        if (ch == "Ἲ") return "ἲ";
        if (ch == "Ἶ") return "ἶ";
        // large omicron
        if (ch == "Ο") return "ο";
        if (ch == "Ό") return "ό";
        if (ch == "Ὸ") return "ὸ";
        if (ch == "Ὁ") return "ὁ";
        if (ch == "Ὅ") return "ὅ";
        if (ch == "Ὃ") return "ὃ";
        if (ch == "Ὀ") return "ὀ";
        if (ch == "Ὄ") return "ὄ";
        if (ch == "Ὂ") return "ὂ";
        // large rho
        if (ch == "Ρ") return "ρ";
        if (ch == "Ῥ") return "ῥ";
        // large upsilon
        if (ch == "Υ") return "υ";
        if (ch == "Ύ") return "ύ";
        if (ch == "Ὺ") return "ὺ";
        if (ch == "Ὑ") return "ὑ";
        if (ch == "Ὕ") return "ὕ";
        if (ch == "Ὓ") return "ὓ";
        if (ch == "Ὗ") return "ὗ";
        // large omega
        if (ch == "Ω") return "ω";
        if (ch == "ῼ") return "ῳ";
        if (ch == "Ώ") return "ώ";
        if (ch == "Ὼ") return "ὼ";
        if (ch == "Ὡ") return "ὡ";
        if (ch == "ᾩ") return "ᾡ";
        if (ch == "Ὥ") return "ὥ";
        if (ch == "ᾭ") return "ᾥ";
        if (ch == "Ὣ") return "ὣ";
        if (ch == "ᾫ") return "ᾣ";
        if (ch == "Ὧ") return "ὧ";
        if (ch == "ᾯ") return "ᾧ";
        if (ch == "Ὠ") return "ὠ";
        if (ch == "ᾨ") return "ᾠ";
        if (ch == "Ὤ") return "ὤ";
        if (ch == "ᾬ") return "ᾤ";
        if (ch == "Ὢ") return "ὢ";
        if (ch == "ᾪ") return "ᾢ";
        if (ch == "Ὦ") return "ὦ";
        if (ch == "ᾮ") return "ᾦ";
        return ch;
    }

    std::string to_upper_char(std::string ch)
    {
        // small consonant
        if (ch == "β") return "Β";
        if (ch == "γ") return "Γ";
        if (ch == "δ") return "Δ";
        if (ch == "ζ") return "Ζ";
        if (ch == "θ") return "Θ";
        if (ch == "κ") return "Κ";
        if (ch == "λ") return "Λ";
        if (ch == "μ") return "Μ";
        if (ch == "ν") return "Ν";
        if (ch == "ξ") return "Ξ";
        if (ch == "π") return "Π";
        if (ch == "ς") return "Σ";
        if (ch == "σ") return "Σ";
        if (ch == "τ") return "Τ";
        if (ch == "φ") return "Φ";
        if (ch == "χ") return "Χ";
        if (ch == "ψ") return "Ψ";
        // small alpha
        if (ch == "α") return "Α";
        if (ch == "ᾳ") return "ᾼ";
        if (ch == "ά") return "Ά";
        // if (ch == "ᾴ") return "ᾴ";
        if (ch == "ὰ") return "Ὰ";
        // if (ch == "ᾲ") return "ᾲ";
        // if (ch == "ᾶ") return "ᾶ";
        // if (ch == "ᾷ") return "ᾷ";
        if (ch == "ἁ") return "Ἁ";
        if (ch == "ᾁ") return "ᾉ";
        if (ch == "ἅ") return "Ἅ";
        if (ch == "ᾅ") return "ᾍ";
        if (ch == "ἃ") return "ᾍ";
        if (ch == "ᾃ") return "ᾍ";
        if (ch == "ἇ") return "Ἇ";
        if (ch == "ᾇ") return "ᾏ";
        if (ch == "ἀ") return "Ἀ";
        if (ch == "ᾀ") return "ᾈ";
        if (ch == "ἄ") return "Ἄ";
        if (ch == "ᾄ") return "ᾌ";
        if (ch == "ἂ") return "Ἂ";
        if (ch == "ᾂ") return "ᾊ";
        if (ch == "ἆ") return "Ἆ";
        if (ch == "ᾆ") return "ᾎ";
        // small epsilon
        if (ch == "ε") return "Ε";
        if (ch == "έ") return "Έ";
        if (ch == "ὲ") return "Ὲ";
        if (ch == "ἑ") return "Ἑ";
        if (ch == "ἕ") return "Ἕ";
        if (ch == "ἓ") return "Ἓ";
        if (ch == "ἐ") return "Ἐ";
        if (ch == "ἔ") return "Ἔ";
        if (ch == "ἒ") return "Ἒ";
        // small eta
        if (ch == "η") return "Η";
        if (ch == "ῃ") return "ῌ";
        if (ch == "ή") return "Ή";
        // if (ch == "ῄ") return "ῄ";
        if (ch == "ὴ") return "Ὴ";
        // if (ch == "ῂ") return "ῂ";
        // if (ch == "ῆ") return "ῆ";
        // if (ch == "ῇ") return "ῇ";
        if (ch == "ἡ") return "Ἡ";
        if (ch == "ᾑ") return "ᾙ";
        if (ch == "ἥ") return "Ἥ";
        if (ch == "ᾕ") return "ᾝ";
        if (ch == "ἣ") return "Ἣ";
        if (ch == "ᾓ") return "ᾛ";
        if (ch == "ἧ") return "Ἧ";
        if (ch == "ᾗ") return "ᾟ";
        if (ch == "ἠ") return "Ἠ";
        if (ch == "ᾐ") return "ᾘ";
        if (ch == "ἤ") return "Ἤ";
        if (ch == "ᾔ") return "ᾜ";
        if (ch == "ἢ") return "Ἢ";
        if (ch == "ᾒ") return "ᾚ";
        if (ch == "ἦ") return "Ἦ";
        if (ch == "ᾖ") return "ᾞ";
        // small iota
        if (ch == "ι") return "Ι";
        if (ch == "ί") return "Ί";
        if (ch == "ὶ") return "Ὶ";
        // if (ch == "ῖ") return "ῖ";
        if (ch == "ἱ") return "Ἱ";
        if (ch == "ἵ") return "Ἵ";
        if (ch == "ἳ") return "Ἳ";
        if (ch == "ἷ") return "Ἷ";
        if (ch == "ἰ") return "Ἰ";
        if (ch == "ἴ") return "Ἴ";
        if (ch == "ἲ") return "Ἲ";
        if (ch == "ἶ") return "Ἶ";
        if (ch == "ϊ") return "Ϊ";
        // if (ch == "ΐ") return "ΐ";
        // if (ch == "ῒ") return "ῒ";
        // if (ch == "ῗ") return "ῗ";
        // small omicron
        if (ch == "ο") return "Ο";
        if (ch == "ό") return "Ό";
        if (ch == "ὸ") return "Ὸ";
        if (ch == "ὁ") return "Ὁ";
        if (ch == "ὅ") return "Ὅ";
        if (ch == "ὃ") return "Ὃ";
        if (ch == "ὀ") return "Ὀ";
        if (ch == "ὄ") return "Ὄ";
        if (ch == "ὂ") return "Ὂ";
        // small rho
        if (ch == "ρ") return "Ρ";
        if (ch == "ῥ") return "Ῥ";
        // if (ch == "ῤ") return "ῤ";
        // small upsilon
        if (ch == "υ") return "Υ";
        if (ch == "ύ") return "Ύ";
        if (ch == "ὺ") return "Ὺ";
        // if (ch == "ῦ") return "ῦ";
        if (ch == "ὑ") return "Ὑ";
        if (ch == "ὕ") return "Ὕ";
        if (ch == "ὓ") return "Ὓ";
        if (ch == "ὗ") return "Ὗ";
        // if (ch == "ὐ") return "ὐ";
        // if (ch == "ὔ") return "ὔ";
        // if (ch == "ὒ") return "ὒ";
        // if (ch == "ὖ") return "ὖ";
        if (ch == "ϋ") return "Ϋ";
        // if (ch == "ΰ") return "ΰ";
        // if (ch == "ῢ") return "ῢ";
        // if (ch == "ῧ") return "ῧ";
        // small omega
        if (ch == "ω") return "Ω";
        if (ch == "ῳ") return "ῼ";
        if (ch == "ώ") return "Ώ";
        // if (ch == "ῴ") return "ῴ";
        if (ch == "ὼ") return "Ὼ";
        // if (ch == "ῲ") return "ῲ";
        // if (ch == "ῶ") return "ῶ";
        // if (ch == "ῷ") return "ῷ";
        if (ch == "ὡ") return "Ὡ";
        if (ch == "ᾡ") return "ᾩ";
        if (ch == "ὥ") return "Ὥ";
        if (ch == "ᾥ") return "ᾭ";
        if (ch == "ὣ") return "Ὣ";
        if (ch == "ᾣ") return "ᾫ";
        if (ch == "ὧ") return "Ὧ";
        if (ch == "ᾧ") return "ᾯ";
        if (ch == "ὠ") return "Ὠ";
        if (ch == "ᾠ") return "ᾨ";
        if (ch == "ὤ") return "Ὤ";
        if (ch == "ᾤ") return "ᾬ";
        if (ch == "ὢ") return "Ὢ";
        if (ch == "ᾢ") return "ᾪ";
        if (ch == "ὦ") return "Ὦ";
        if (ch == "ᾦ") return "ᾮ";
        return ch;
    }
}}
