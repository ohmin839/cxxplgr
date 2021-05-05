#define BOOST_TEST_MODULE test_without_iota_subscriptum

#include <string>

#include <boost/test/included/unit_test.hpp>
#include <boost/test/data/test_case.hpp>
#include <boost/test/data/monomorphic.hpp>

#include "cxxplgr/secondary.hpp"

typedef std::pair<std::string, std::string> fixture_t;
const fixture_t fixtures[] =
{
    {"ᾳ", "α"},
    {"ᾴ", "ά"},
    {"ᾲ", "ὰ"},
    {"ᾷ", "ᾶ"},
    {"ᾁ", "ἁ"},
    {"ᾅ", "ἅ"},
    {"ᾃ", "ἃ"},
    {"ᾇ", "ἇ"},
    {"ᾀ", "ἀ"},
    {"ᾄ", "ἄ"},
    {"ᾂ", "ἂ"},
    {"ᾆ", "ἆ"},
    {"ῃ", "η"},
    {"ῄ", "ή"},
    {"ῂ", "ὴ"},
    {"ῇ", "ῆ"},
    {"ᾑ", "ἡ"},
    {"ᾕ", "ἥ"},
    {"ᾓ", "ἣ"},
    {"ᾗ", "ἧ"},
    {"ᾐ", "ἠ"},
    {"ᾔ", "ἤ"},
    {"ᾒ", "ἢ"},
    {"ᾖ", "ἦ"},
    {"ῳ", "ω"},
    {"ῴ", "ώ"},
    {"ῲ", "ὼ"},
    {"ῷ", "ῶ"},
    {"ᾡ", "ὡ"},
    {"ᾥ", "ὥ"},
    {"ᾣ", "ὣ"},
    {"ᾧ", "ὧ"},
    {"ᾠ", "ὠ"},
    {"ᾤ", "ὤ"},
    {"ᾢ", "ὢ"},
    {"ᾦ", "ὦ"},
    {"ᾼ", "Α"},
    {"Ὰ", "Ά"},
    {"ᾉ", "Ἁ"},
    {"ᾍ", "Ἅ"},
    {"ᾋ", "Ἃ"},
    {"ᾏ", "Ἇ"},
    {"ᾈ", "Ἀ"},
    {"ᾌ", "Ἄ"},
    {"ᾊ", "Ἂ"},
    {"ᾎ", "Ἆ"},
    {"ῌ", "Η"},
    {"Ὴ", "Ή"},
    {"ᾙ", "Ἡ"},
    {"ᾝ", "Ἥ"},
    {"ᾛ", "Ἣ"},
    {"ᾟ", "Ἧ"},
    {"ᾘ", "Ἠ"},
    {"ᾜ", "Ἤ"},
    {"ᾚ", "Ἢ"},
    {"ᾞ", "Ἦ"},
    {"ῼ", "Ω"},
    {"Ὼ", "Ώ"},
    {"ᾩ", "Ὡ"},
    {"ᾭ", "Ὥ"},
    {"ᾫ", "Ὣ"},
    {"ᾯ", "Ὧ"},
    {"ᾨ", "Ὠ"},
    {"ᾬ", "Ὤ"},
    {"ᾪ", "Ὢ"},
    {"ᾮ", "Ὦ"},
    {"0", "0"}
};

namespace bdata = boost::unit_test::data;

BOOST_TEST_DONT_PRINT_LOG_VALUE(fixture_t)

BOOST_DATA_TEST_CASE(
    test_without_iota_subscriptum,
    bdata::make(fixtures),
    arg)
{
    using cxxplgr::secondary::without_iota_subscriptum;

    std::string input = arg.first;
    std::string expected = arg.second;
    std::string actual = without_iota_subscriptum(input);

    BOOST_TEST(actual == expected);
}

