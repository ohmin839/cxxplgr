#define BOOST_TEST_MODULE test_without_accent

#include <string>

#include <boost/test/included/unit_test.hpp>
#include <boost/test/data/test_case.hpp>
#include <boost/test/data/monomorphic.hpp>

#include "cxxplgr/secondary.hpp"

typedef std::pair<std::string, std::string> fixture_t;
const fixture_t fixtures[] =
{
    {"ά", "α"},
    {"ὰ", "α"},
    {"ᾶ", "α"},
    {"ᾴ", "ᾳ"},
    {"ᾲ", "ᾳ"},
    {"ᾷ", "ᾳ"},
    {"ἅ", "ἁ"},
    {"ἃ", "ἁ"},
    {"ἇ", "ἁ"},
    {"ᾅ", "ᾁ"},
    {"ᾃ", "ᾁ"},
    {"ᾇ", "ᾁ"},
    {"ἄ", "ἀ"},
    {"ἂ", "ἀ"},
    {"ἆ", "ἀ"},
    {"ᾄ", "ᾀ"},
    {"ᾂ", "ᾀ"},
    {"ᾆ", "ᾀ"},
    {"έ", "ε"},
    {"ὲ", "ε"},
    {"ἕ", "ἑ"},
    {"ἓ", "ἑ"},
    {"ἔ", "ἐ"},
    {"ἒ", "ἐ"},
    {"ή", "η"},
    {"ὴ", "η"},
    {"ῆ", "η"},
    {"ῄ", "ῃ"},
    {"ῂ", "ῃ"},
    {"ῇ", "ῃ"},
    {"ἥ", "ἡ"},
    {"ἣ", "ἡ"},
    {"ἧ", "ἡ"},
    {"ᾕ", "ᾑ"},
    {"ᾓ", "ᾑ"},
    {"ᾗ", "ᾑ"},
    {"ἤ", "ἠ"},
    {"ἢ", "ἠ"},
    {"ἦ", "ἠ"},
    {"ᾔ", "ᾐ"},
    {"ᾒ", "ᾐ"},
    {"ᾖ", "ᾐ"},
    {"ί", "ι"},
    {"ὶ", "ι"},
    {"ῖ", "ι"},
    {"ἵ", "ἱ"},
    {"ἳ", "ἱ"},
    {"ἷ", "ἱ"},
    {"ἴ", "ἰ"},
    {"ἲ", "ἰ"},
    {"ἶ", "ἰ"},
    {"ΐ", "ϊ"},
    {"ῒ", "ϊ"},
    {"ῗ", "ϊ"},
    {"ό", "ο"},
    {"ὸ", "ο"},
    {"ὅ", "ὁ"},
    {"ὃ", "ὁ"},
    {"ὄ", "ὀ"},
    {"ὂ", "ὀ"},
    {"ύ", "υ"},
    {"ὺ", "υ"},
    {"ῦ", "υ"},
    {"ὕ", "ὑ"},
    {"ὓ", "ὑ"},
    {"ὗ", "ὑ"},
    {"ὔ", "ὐ"},
    {"ὒ", "ὐ"},
    {"ὖ", "ὐ"},
    {"ΰ", "ϋ"},
    {"ῢ", "ϋ"},
    {"ῧ", "ϋ"},
    {"ώ", "ω"},
    {"ὼ", "ω"},
    {"ῶ", "ω"},
    {"ῴ", "ῳ"},
    {"ῲ", "ῳ"},
    {"ῷ", "ῳ"},
    {"ὥ", "ὡ"},
    {"ὣ", "ὡ"},
    {"ὧ", "ὡ"},
    {"ᾥ", "ᾡ"},
    {"ᾣ", "ᾡ"},
    {"ᾧ", "ᾡ"},
    {"ὤ", "ὠ"},
    {"ὢ", "ὠ"},
    {"ὦ", "ὠ"},
    {"ᾤ", "ᾠ"},
    {"ᾢ", "ᾠ"},
    {"ᾦ", "ᾠ"},
    {"Ά", "Α"},
    {"Ὰ", "Α"},
    {"Ἅ", "Ἁ"},
    {"Ἃ", "Ἁ"},
    {"Ἇ", "Ἁ"},
    {"ᾍ", "ᾉ"},
    {"ᾋ", "ᾉ"},
    {"ᾏ", "ᾉ"},
    {"Ἄ", "Ἀ"},
    {"Ἂ", "Ἀ"},
    {"Ἆ", "Ἀ"},
    {"ᾌ", "ᾈ"},
    {"ᾊ", "ᾈ"},
    {"ᾎ", "ᾈ"},
    {"Έ", "Ε"},
    {"Ὲ", "Ε"},
    {"Ἕ", "Ἑ"},
    {"Ἓ", "Ἑ"},
    {"Ἔ", "Ἐ"},
    {"Ἒ", "Ἐ"},
    {"Ή", "Η"},
    {"Ὴ", "Η"},
    {"Ἥ", "Ἡ"},
    {"Ἣ", "Ἡ"},
    {"Ἧ", "Ἡ"},
    {"ᾝ", "ᾙ"},
    {"ᾛ", "ᾙ"},
    {"ᾟ", "ᾙ"},
    {"Ἤ", "Ἠ"},
    {"Ἢ", "Ἠ"},
    {"Ἦ", "Ἠ"},
    {"ᾜ", "ᾘ"},
    {"ᾚ", "ᾘ"},
    {"ᾞ", "ᾘ"},
    {"Ί", "Ι"},
    {"Ὶ", "Ι"},
    {"Ἵ", "Ἱ"},
    {"Ἳ", "Ἱ"},
    {"Ἷ", "Ἱ"},
    {"Ἴ", "Ἰ"},
    {"Ἲ", "Ἰ"},
    {"Ἶ", "Ἰ"},
    {"Ό", "Ο"},
    {"Ὸ", "Ο"},
    {"Ὅ", "Ὁ"},
    {"Ὃ", "Ὁ"},
    {"Ὄ", "Ὀ"},
    {"Ὂ", "Ὀ"},
    {"Ύ", "Υ"},
    {"Ὺ", "Υ"},
    {"Ὕ", "Ὑ"},
    {"Ὓ", "Ὑ"},
    {"Ὗ", "Ὑ"},
    {"Ώ", "Ω"},
    {"Ὼ", "Ω"},
    {"Ὥ", "Ὡ"},
    {"Ὣ", "Ὡ"},
    {"Ὧ", "Ὡ"},
    {"ᾭ", "ᾩ"},
    {"ᾫ", "ᾩ"},
    {"ᾯ", "ᾩ"},
    {"Ὤ", "Ὠ"},
    {"Ὢ", "Ὠ"},
    {"Ὦ", "Ὠ"},
    {"ᾬ", "ᾨ"},
    {"ᾪ", "ᾨ"},
    {"ᾮ", "ᾨ"},
    {"0", "0"}
};

namespace bdata = boost::unit_test::data;

BOOST_TEST_DONT_PRINT_LOG_VALUE(fixture_t)

BOOST_DATA_TEST_CASE(
    test_without_accent,
    bdata::make(fixtures),
    arg)
{
    using cxxplgr::secondary::without_accent;

    std::string input = arg.first;
    std::string expected = arg.second;
    std::string actual = without_accent(input);

    BOOST_TEST(actual == expected);
}

