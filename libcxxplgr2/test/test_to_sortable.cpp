#define BOOST_TEST_MODULE test_to_sortable

#include <string>

#include <boost/test/included/unit_test.hpp>
#include <boost/test/data/test_case.hpp>
#include <boost/test/data/monomorphic.hpp>

#include "cxxplgr/secondary.hpp"

typedef std::pair<std::string, std::string> fixture_t;
const fixture_t fixtures[] =
{
    {"Πάντες", "παντες"},
    {"Σωκράτει", "σωκρατει"},
    {"Ἐπεὶ", "επει"},
    {"Ὅτι", "οτι"},
    {"Πρῶτον", "πρωτον"},
    {"ὑποκειμένῳ", "υποκειμενω"},
};

namespace bdata = boost::unit_test::data;

BOOST_TEST_DONT_PRINT_LOG_VALUE(fixture_t)

BOOST_DATA_TEST_CASE(
    test_to_sortable,
    bdata::make(fixtures),
    arg)
{
    using cxxplgr::secondary::to_sortable;

    std::string input = arg.first;
    std::string expected = arg.second;
    std::string actual = to_sortable(input);

    BOOST_TEST(actual == expected);
}

