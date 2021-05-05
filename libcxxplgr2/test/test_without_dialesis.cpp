#define BOOST_TEST_MODULE test_without_dialesis

#include <string>

#include <boost/test/included/unit_test.hpp>
#include <boost/test/data/test_case.hpp>
#include <boost/test/data/monomorphic.hpp>

#include "cxxplgr/secondary.hpp"

typedef std::pair<std::string, std::string> fixture_t;
const fixture_t fixtures[] =
{
    {"ϊ", "ι"},
    {"ΐ", "ί"},
    {"ῒ", "ὶ"},
    {"ῗ", "ῖ"},
    {"ϋ", "υ"},
    {"ΰ", "ύ"},
    {"ῢ", "ὺ"},
    {"ῧ", "ῦ"},
    {"0", "0"}
};

namespace bdata = boost::unit_test::data;

BOOST_TEST_DONT_PRINT_LOG_VALUE(fixture_t)

BOOST_DATA_TEST_CASE(
    without_dialesls_test,
    bdata::make(fixtures),
    arg)
{
    using cxxplgr::secondary::without_dialesis;

    std::string input = arg.first;
    std::string expected = arg.second;
    std::string actual = without_dialesis(input);

    BOOST_TEST(actual == expected);
}

