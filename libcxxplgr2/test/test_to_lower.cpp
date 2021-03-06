#define BOOST_TEST_MODULE test_to_lower

#include <string>

#include <boost/test/included/unit_test.hpp>
#include <boost/test/data/test_case.hpp>
#include <boost/test/data/monomorphic.hpp>

#include "cxxplgr/secondary.hpp"

typedef std::pair<std::string, std::string> fixture_t;
const fixture_t fixtures[] =
{
    {"Β", "β"},
    {"Γ", "γ"},
    {"Δ", "δ"},
    {"Ζ", "ζ"},
    {"Θ", "θ"},
    {"Κ", "κ"},
    {"Λ", "λ"},
    {"Μ", "μ"},
    {"Ν", "ν"},
    {"Ξ", "ξ"},
    {"Π", "π"},
    {"Σ", "σ"},
    {"Τ", "τ"},
    {"Φ", "φ"},
    {"Χ", "χ"},
    {"Ψ", "ψ"},
    {"Α", "α"},
    {"ᾼ", "ᾳ"},
    {"Ά", "ά"},
    {"Ὰ", "ὰ"},
    {"Ἁ", "ἁ"},
    {"ᾉ", "ᾁ"},
    {"Ἅ", "ἅ"},
    {"ᾍ", "ᾅ"},
    {"Ἃ", "ἃ"},
    {"ᾋ", "ᾃ"},
    {"Ἇ", "ἇ"},
    {"ᾏ", "ᾇ"},
    {"Ἀ", "ἀ"},
    {"ᾈ", "ᾀ"},
    {"Ἄ", "ἄ"},
    {"ᾌ", "ᾄ"},
    {"Ἂ", "ἂ"},
    {"ᾊ", "ᾂ"},
    {"Ἆ", "ἆ"},
    {"ᾎ", "ᾆ"},
    {"Ε", "ε"},
    {"Έ", "έ"},
    {"Ὲ", "ὲ"},
    {"Ἑ", "ἑ"},
    {"Ἕ", "ἕ"},
    {"Ἓ", "ἓ"},
    {"Ἐ", "ἐ"},
    {"Ἔ", "ἔ"},
    {"Ἒ", "ἒ"},
    {"Η", "η"},
    {"ῌ", "ῃ"},
    {"Ή", "ή"},
    {"Ὴ", "ῄ"},
    {"Ἡ", "ὴ"},
    {"ᾙ", "ῂ"},
    {"Ἥ", "ἥ"},
    {"ᾝ", "ᾕ"},
    {"Ἣ", "ἣ"},
    {"ᾛ", "ᾓ"},
    {"Ἧ", "ἧ"},
    {"ᾟ", "ᾗ"},
    {"Ἠ", "ἠ"},
    {"ᾘ", "ᾐ"},
    {"Ἤ", "ἤ"},
    {"ᾜ", "ᾔ"},
    {"Ἢ", "ἢ"},
    {"ᾚ", "ᾒ"},
    {"Ἦ", "ἦ"},
    {"ᾞ", "ᾖ"},
    {"Ι", "ι"},
    {"Ί", "ί"},
    {"Ὶ", "ὶ"},
    {"Ἱ", "ἱ"},
    {"Ἵ", "ἵ"},
    {"Ἳ", "ἳ"},
    {"Ἷ", "ἷ"},
    {"Ἰ", "ἰ"},
    {"Ἴ", "ἴ"},
    {"Ἲ", "ἲ"},
    {"Ἶ", "ἶ"},
    {"Ο", "ο"},
    {"Ό", "ό"},
    {"Ὸ", "ὸ"},
    {"Ὁ", "ὁ"},
    {"Ὅ", "ὅ"},
    {"Ὃ", "ὃ"},
    {"Ὀ", "ὀ"},
    {"Ὄ", "ὄ"},
    {"Ὂ", "ὂ"},
    {"Ρ", "ρ"},
    {"Ῥ", "ῥ"},
    {"Υ", "υ"},
    {"Ύ", "ύ"},
    {"Ὺ", "ὺ"},
    {"Ὑ", "ὑ"},
    {"Ὕ", "ὕ"},
    {"Ὓ", "ὓ"},
    {"Ὗ", "ὗ"},
    {"Ω", "ω"},
    {"ῼ", "ῳ"},
    {"Ώ", "ώ"},
    {"Ὼ", "ὼ"},
    {"Ὡ", "ὡ"},
    {"ᾩ", "ᾡ"},
    {"Ὥ", "ὥ"},
    {"ᾭ", "ᾥ"},
    {"Ὣ", "ὣ"},
    {"ᾫ", "ᾣ"},
    {"Ὧ", "ὧ"},
    {"ᾯ", "ᾧ"},
    {"Ὠ", "ὠ"},
    {"ᾨ", "ᾠ"},
    {"Ὤ", "ὤ"},
    {"ᾬ", "ᾤ"},
    {"Ὢ", "ὢ"},
    {"ᾪ", "ᾢ"},
    {"Ὦ", "ὦ"},
    {"ᾮ", "ᾦ"},
    {"0", "0"}
};

namespace bdata = boost::unit_test::data;

BOOST_TEST_DONT_PRINT_LOG_VALUE(fixture_t)

BOOST_DATA_TEST_CASE(
    test_to_lower,
    bdata::make(fixtures),
    arg)
{
    using cxxplgr::secondary::to_lower;

    std::string input = arg.first;
    std::string expected = arg.second;
    std::string actual = to_lower(input);

    BOOST_TEST(actual == expected);
}

