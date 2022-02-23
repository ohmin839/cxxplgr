#if !defined(CXXPLGR_SECONDARY_GRAMMAR_HPP)
#define CXXPLGR_SECONDARY_GRAMMAR_HPP

#include <string>
#include <vector>

#include <boost/spirit/home/x3.hpp>
#include <boost/spirit/home/x3/support/ast/position_tagged.hpp>
#include <boost/spirit/home/x3/support/utility/error_reporting.hpp>
#include <boost/spirit/home/x3/support/utility/annotate_on_success.hpp>
#include <boost/fusion/include/adapt_struct.hpp>
#include <boost/fusion/include/io.hpp>

#include "cxxplgr/secondary/action.hpp"

namespace cxxplgr { namespace secondary
{
    namespace x3 = boost::spirit::x3;

    x3::rule<class grammar, std::vector<std::string>> grammar = "grammar";
    x3::rule<class word, std::string> word = "word";

    auto const large_alpha
        = x3::string("Α")[action_add_asis_string()]
        | x3::string("ᾼ")[action_add_asis_string()]
        | x3::string("Ά")[action_add_asis_string()]
        | x3::string("Ὰ")[action_add_asis_string()]
        | x3::string("Ἁ")[action_add_asis_string()]
        | x3::string("ᾉ")[action_add_asis_string()]
        | x3::string("Ἅ")[action_add_asis_string()]
        | x3::string("ᾍ")[action_add_asis_string()]
        | x3::string("Ἃ")[action_add_asis_string()]
        | x3::string("ᾋ")[action_add_asis_string()]
        | x3::string("Ἇ")[action_add_asis_string()]
        | x3::string("ᾏ")[action_add_asis_string()]
        | x3::string("Ἀ")[action_add_asis_string()]
        | x3::string("ᾈ")[action_add_asis_string()]
        | x3::string("Ἄ")[action_add_asis_string()]
        | x3::string("ᾌ")[action_add_asis_string()]
        | x3::string("Ἂ")[action_add_asis_string()]
        | x3::string("ᾊ")[action_add_asis_string()]
        | x3::string("Ἆ")[action_add_asis_string()]
        | x3::string("ᾎ")[action_add_asis_string()]
        ;

    auto const large_epsilon
        = x3::string("Ε")[action_add_asis_string()]
        | x3::string("Έ")[action_add_asis_string()]
        | x3::string("Ὲ")[action_add_asis_string()]
        | x3::string("Ἑ")[action_add_asis_string()]
        | x3::string("Ἕ")[action_add_asis_string()]
        | x3::string("Ἓ")[action_add_asis_string()]
        | x3::string("Ἐ")[action_add_asis_string()]
        | x3::string("Ἔ")[action_add_asis_string()]
        | x3::string("Ἒ")[action_add_asis_string()]
        ;

    auto const large_eta
        = x3::string("Η")[action_add_asis_string()]
        | x3::string("ῌ")[action_add_asis_string()]
        | x3::string("Ή")[action_add_asis_string()]
        | x3::string("Ὴ")[action_add_asis_string()]
        | x3::string("Ἡ")[action_add_asis_string()]
        | x3::string("ᾙ")[action_add_asis_string()]
        | x3::string("Ἥ")[action_add_asis_string()]
        | x3::string("ᾝ")[action_add_asis_string()]
        | x3::string("Ἣ")[action_add_asis_string()]
        | x3::string("ᾛ")[action_add_asis_string()]
        | x3::string("Ἧ")[action_add_asis_string()]
        | x3::string("ᾟ")[action_add_asis_string()]
        | x3::string("Ἠ")[action_add_asis_string()]
        | x3::string("ᾘ")[action_add_asis_string()]
        | x3::string("Ἤ")[action_add_asis_string()]
        | x3::string("ᾜ")[action_add_asis_string()]
        | x3::string("Ἢ")[action_add_asis_string()]
        | x3::string("ᾚ")[action_add_asis_string()]
        | x3::string("Ἦ")[action_add_asis_string()]
        | x3::string("ᾞ")[action_add_asis_string()]
        ;

    auto const large_iota
        = x3::string("Ι")[action_add_asis_string()]
        | x3::string("Ί")[action_add_asis_string()]
        | x3::string("Ὶ")[action_add_asis_string()]
        | x3::string("Ἱ")[action_add_asis_string()]
        | x3::string("Ἵ")[action_add_asis_string()]
        | x3::string("Ἳ")[action_add_asis_string()]
        | x3::string("Ἷ")[action_add_asis_string()]
        | x3::string("Ἰ")[action_add_asis_string()]
        | x3::string("Ἴ")[action_add_asis_string()]
        | x3::string("Ἲ")[action_add_asis_string()]
        | x3::string("Ἶ")[action_add_asis_string()]
        | x3::string("Ϊ")[action_add_asis_string()]
        ;

    auto const large_omicron
        = x3::string("Ο")[action_add_asis_string()]
        | x3::string("Ό")[action_add_asis_string()]
        | x3::string("Ὸ")[action_add_asis_string()]
        | x3::string("Ὁ")[action_add_asis_string()]
        | x3::string("Ὅ")[action_add_asis_string()]
        | x3::string("Ὃ")[action_add_asis_string()]
        | x3::string("Ὀ")[action_add_asis_string()]
        | x3::string("Ὄ")[action_add_asis_string()]
        | x3::string("Ὂ")[action_add_asis_string()]
        ;

    auto const large_upsilon
        = x3::string("Υ")[action_add_asis_string()]
        | x3::string("Ύ")[action_add_asis_string()]
        | x3::string("Ὺ")[action_add_asis_string()]
        | x3::string("Ὑ")[action_add_asis_string()]
        | x3::string("Ὕ")[action_add_asis_string()]
        | x3::string("Ὓ")[action_add_asis_string()]
        | x3::string("Ὗ")[action_add_asis_string()]
        | x3::string("Ϋ")[action_add_asis_string()]
        ;

    auto const large_omega
        = x3::string("Ω")[action_add_asis_string()]
        | x3::string("ῼ")[action_add_asis_string()]
        | x3::string("Ώ")[action_add_asis_string()]
        | x3::string("Ὼ")[action_add_asis_string()]
        | x3::string("Ὡ")[action_add_asis_string()]
        | x3::string("ᾩ")[action_add_asis_string()]
        | x3::string("Ὥ")[action_add_asis_string()]
        | x3::string("ᾭ")[action_add_asis_string()]
        | x3::string("Ὣ")[action_add_asis_string()]
        | x3::string("ᾫ")[action_add_asis_string()]
        | x3::string("Ὧ")[action_add_asis_string()]
        | x3::string("ᾯ")[action_add_asis_string()]
        | x3::string("Ὠ")[action_add_asis_string()]
        | x3::string("ᾨ")[action_add_asis_string()]
        | x3::string("Ὤ")[action_add_asis_string()]
        | x3::string("ᾬ")[action_add_asis_string()]
        | x3::string("Ὢ")[action_add_asis_string()]
        | x3::string("ᾪ")[action_add_asis_string()]
        | x3::string("Ὦ")[action_add_asis_string()]
        | x3::string("ᾮ")[action_add_asis_string()]
        ;

    auto const large_rho
        = x3::string("Ρ")[action_add_asis_string()]
        | x3::string("Ῥ")[action_add_asis_string()]
        ;

    auto const small_alpha
        = x3::string("α")[action_add_asis_string()]
        | x3::string("ᾳ")[action_add_asis_string()]
        | x3::string("ά")[action_add_asis_string()]
        | x3::string("ᾴ")[action_add_asis_string()]
        | x3::string("ὰ")[action_add_asis_string()]
        | x3::string("ᾲ")[action_add_asis_string()]
        | x3::string("ᾶ")[action_add_asis_string()]
        | x3::string("ᾷ")[action_add_asis_string()]
        | x3::string("ἁ")[action_add_asis_string()]
        | x3::string("ᾁ")[action_add_asis_string()]
        | x3::string("ἅ")[action_add_asis_string()]
        | x3::string("ᾅ")[action_add_asis_string()]
        | x3::string("ἃ")[action_add_asis_string()]
        | x3::string("ᾃ")[action_add_asis_string()]
        | x3::string("ἇ")[action_add_asis_string()]
        | x3::string("ᾇ")[action_add_asis_string()]
        | x3::string("ἀ")[action_add_asis_string()]
        | x3::string("ᾀ")[action_add_asis_string()]
        | x3::string("ἄ")[action_add_asis_string()]
        | x3::string("ᾄ")[action_add_asis_string()]
        | x3::string("ἂ")[action_add_asis_string()]
        | x3::string("ᾂ")[action_add_asis_string()]
        | x3::string("ἆ")[action_add_asis_string()]
        | x3::string("ᾆ")[action_add_asis_string()]
        ;

    auto const small_epsilon
        = x3::string("ε")[action_add_asis_string()]
        | x3::string("έ")[action_add_asis_string()]
        | x3::string("ὲ")[action_add_asis_string()]
        | x3::string("ἑ")[action_add_asis_string()]
        | x3::string("ἕ")[action_add_asis_string()]
        | x3::string("ἓ")[action_add_asis_string()]
        | x3::string("ἐ")[action_add_asis_string()]
        | x3::string("ἔ")[action_add_asis_string()]
        | x3::string("ἒ")[action_add_asis_string()]
        ;

    auto const small_eta
        = x3::string("η")[action_add_asis_string()]
        | x3::string("ῃ")[action_add_asis_string()]
        | x3::string("ή")[action_add_asis_string()]
        | x3::string("ῄ")[action_add_asis_string()]
        | x3::string("ὴ")[action_add_asis_string()]
        | x3::string("ῂ")[action_add_asis_string()]
        | x3::string("ῆ")[action_add_asis_string()]
        | x3::string("ῇ")[action_add_asis_string()]
        | x3::string("ἡ")[action_add_asis_string()]
        | x3::string("ᾑ")[action_add_asis_string()]
        | x3::string("ἥ")[action_add_asis_string()]
        | x3::string("ᾕ")[action_add_asis_string()]
        | x3::string("ἣ")[action_add_asis_string()]
        | x3::string("ᾓ")[action_add_asis_string()]
        | x3::string("ἧ")[action_add_asis_string()]
        | x3::string("ᾗ")[action_add_asis_string()]
        | x3::string("ἠ")[action_add_asis_string()]
        | x3::string("ᾐ")[action_add_asis_string()]
        | x3::string("ἤ")[action_add_asis_string()]
        | x3::string("ᾔ")[action_add_asis_string()]
        | x3::string("ἢ")[action_add_asis_string()]
        | x3::string("ᾒ")[action_add_asis_string()]
        | x3::string("ἦ")[action_add_asis_string()]
        | x3::string("ᾖ")[action_add_asis_string()]
        ;

    auto const small_iota
        = x3::string("ι")[action_add_asis_string()]
        | x3::string("ί")[action_add_asis_string()]
        | x3::string("ὶ")[action_add_asis_string()]
        | x3::string("ῖ")[action_add_asis_string()]
        | x3::string("ἱ")[action_add_asis_string()]
        | x3::string("ἵ")[action_add_asis_string()]
        | x3::string("ἳ")[action_add_asis_string()]
        | x3::string("ἷ")[action_add_asis_string()]
        | x3::string("ἰ")[action_add_asis_string()]
        | x3::string("ἴ")[action_add_asis_string()]
        | x3::string("ἲ")[action_add_asis_string()]
        | x3::string("ἶ")[action_add_asis_string()]
        | x3::string("ϊ")[action_add_asis_string()]
        | x3::string("ΐ")[action_add_asis_string()]
        | x3::string("ῒ")[action_add_asis_string()]
        | x3::string("ῗ")[action_add_asis_string()]
        ;

    auto const small_omicron
        = x3::string("ο")[action_add_asis_string()]
        | x3::string("ό")[action_add_asis_string()]
        | x3::string("ὸ")[action_add_asis_string()]
        | x3::string("ὁ")[action_add_asis_string()]
        | x3::string("ὅ")[action_add_asis_string()]
        | x3::string("ὃ")[action_add_asis_string()]
        | x3::string("ὀ")[action_add_asis_string()]
        | x3::string("ὄ")[action_add_asis_string()]
        | x3::string("ὂ")[action_add_asis_string()]
        ;

    auto const small_upsilon
        = x3::string("υ")[action_add_asis_string()]
        | x3::string("ύ")[action_add_asis_string()]
        | x3::string("ὺ")[action_add_asis_string()]
        | x3::string("ῦ")[action_add_asis_string()]
        | x3::string("ὑ")[action_add_asis_string()]
        | x3::string("ὕ")[action_add_asis_string()]
        | x3::string("ὓ")[action_add_asis_string()]
        | x3::string("ὗ")[action_add_asis_string()]
        | x3::string("ὐ")[action_add_asis_string()]
        | x3::string("ὔ")[action_add_asis_string()]
        | x3::string("ὒ")[action_add_asis_string()]
        | x3::string("ὖ")[action_add_asis_string()]
        | x3::string("ϋ")[action_add_asis_string()]
        | x3::string("ΰ")[action_add_asis_string()]
        | x3::string("ῢ")[action_add_asis_string()]
        | x3::string("ῧ")[action_add_asis_string()]
        ;

    auto const small_omega
        = x3::string("ω")[action_add_asis_string()]
        | x3::string("ῳ")[action_add_asis_string()]
        | x3::string("ώ")[action_add_asis_string()]
        | x3::string("ῴ")[action_add_asis_string()]
        | x3::string("ὼ")[action_add_asis_string()]
        | x3::string("ῲ")[action_add_asis_string()]
        | x3::string("ῶ")[action_add_asis_string()]
        | x3::string("ῷ")[action_add_asis_string()]
        | x3::string("ὡ")[action_add_asis_string()]
        | x3::string("ᾡ")[action_add_asis_string()]
        | x3::string("ὥ")[action_add_asis_string()]
        | x3::string("ᾥ")[action_add_asis_string()]
        | x3::string("ὣ")[action_add_asis_string()]
        | x3::string("ᾣ")[action_add_asis_string()]
        | x3::string("ὧ")[action_add_asis_string()]
        | x3::string("ᾧ")[action_add_asis_string()]
        | x3::string("ὠ")[action_add_asis_string()]
        | x3::string("ᾠ")[action_add_asis_string()]
        | x3::string("ὤ")[action_add_asis_string()]
        | x3::string("ᾤ")[action_add_asis_string()]
        | x3::string("ὢ")[action_add_asis_string()]
        | x3::string("ᾢ")[action_add_asis_string()]
        | x3::string("ὦ")[action_add_asis_string()]
        | x3::string("ᾦ")[action_add_asis_string()]
        ;

    auto const small_rho
        = x3::string("ρ")[action_add_asis_string()]
        | x3::string("ῥ")[action_add_asis_string()]
        | x3::string("ῤ")[action_add_asis_string()]
        ;

    auto const large_consonant
        = x3::string("Β")[action_add_asis_string()]
        | x3::string("Γ")[action_add_asis_string()]
        | x3::string("Δ")[action_add_asis_string()]
        | x3::string("Ζ")[action_add_asis_string()]
        | x3::string("Θ")[action_add_asis_string()]
        | x3::string("Κ")[action_add_asis_string()]
        | x3::string("Λ")[action_add_asis_string()]
        | x3::string("Μ")[action_add_asis_string()]
        | x3::string("Ν")[action_add_asis_string()]
        | x3::string("Ξ")[action_add_asis_string()]
        | x3::string("Π")[action_add_asis_string()]
        | x3::string("Σ")[action_add_asis_string()]
        | x3::string("Τ")[action_add_asis_string()]
        | x3::string("Φ")[action_add_asis_string()]
        | x3::string("Χ")[action_add_asis_string()]
        | x3::string("Ψ")[action_add_asis_string()]
        ;

    auto const small_consonant
        = x3::string("β")[action_add_asis_string()]
        | x3::string("γ")[action_add_asis_string()]
        | x3::string("δ")[action_add_asis_string()]
        | x3::string("ζ")[action_add_asis_string()]
        | x3::string("θ")[action_add_asis_string()]
        | x3::string("κ")[action_add_asis_string()]
        | x3::string("λ")[action_add_asis_string()]
        | x3::string("μ")[action_add_asis_string()]
        | x3::string("ν")[action_add_asis_string()]
        | x3::string("ξ")[action_add_asis_string()]
        | x3::string("π")[action_add_asis_string()]
        | x3::string("σ")[action_add_asis_string()]
        | x3::string("ς")[action_add_asis_string()]
        | x3::string("τ")[action_add_asis_string()]
        | x3::string("φ")[action_add_asis_string()]
        | x3::string("χ")[action_add_asis_string()]
        | x3::string("ψ")[action_add_asis_string()]
        ;

    auto const alphabet
        = large_alpha
        | large_epsilon
        | large_eta
        | large_iota
        | large_omicron
        | large_upsilon
        | large_omega
        | large_rho
        | small_alpha
        | small_epsilon
        | small_eta
        | small_iota
        | small_omicron
        | small_upsilon
        | small_omega
        | small_rho
        | large_consonant
        | small_consonant
        ;

    auto const apostroph
        = x3::string("'")[action_add_asis_string()]
        ;

    auto const word_def
        = x3::eps[action_assign_string()]
        >> +(alphabet)
        >> -(apostroph >> *(alphabet))
        ;

    auto const grammar_def
        = x3::eps[action_assign_list()]
        >> *(
                word[action_add_element()]
                | x3::char_[action_ignore()]
            );

    BOOST_SPIRIT_DEFINE(
            grammar,
            word
            );
}}

#endif
