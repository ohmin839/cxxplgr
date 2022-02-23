#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#define BOOST_TEST_MAIN
#include <boost/test/included/unit_test.hpp>

#include "cxxplgr/secondary.hpp"

BOOST_AUTO_TEST_CASE(test1)
{
    using cxxplgr::secondary::split_into_words;

    std::string text = "Πάντες ἄνθρωποι τοῦ εἰδέναι ὀρέγονται φύσει σημεῖον δ'";
    std::vector<std::string> result = split_into_words(text);

    BOOST_CHECK(result[0] == "Πάντες");
    BOOST_CHECK(result[1] == "ἄνθρωποι");
    BOOST_CHECK(result[2] == "τοῦ");
    BOOST_CHECK(result[3] == "εἰδέναι");
    BOOST_CHECK(result[4] == "ὀρέγονται");
    BOOST_CHECK(result[5] == "φύσει");
    BOOST_CHECK(result[6] == "σημεῖον");
    BOOST_CHECK(result[7] == "δ'");
}

BOOST_AUTO_TEST_CASE(test2)
{
    using cxxplgr::secondary::split_into_words;

    std::string text = "συνήνεγκεν, [οἷον τοῖς φλεγματώδεσιν ἢ χολώδεσι [ἢ] πυρέττουσι καύσῳ], τέχνης. —πρὸς μὲν οὖν τὸ πράττειν ἐμπειρία τέχνης οὐδὲς δοκεῖ διαφέρειν";
    std::vector<std::string> result = split_into_words(text);

    BOOST_CHECK(result[ 0] == "συνήνεγκεν");
    BOOST_CHECK(result[ 1] == "οἷον");
    BOOST_CHECK(result[ 2] == "τοῖς");
    BOOST_CHECK(result[ 3] == "φλεγματώδεσιν");
    BOOST_CHECK(result[ 4] == "ἢ");
    BOOST_CHECK(result[ 5] == "χολώδεσι");
    BOOST_CHECK(result[ 6] == "ἢ");
    BOOST_CHECK(result[ 7] == "πυρέττουσι");
    BOOST_CHECK(result[ 8] == "καύσῳ");
    BOOST_CHECK(result[ 9] == "τέχνης");
    BOOST_CHECK(result[10] == "πρὸς");
    BOOST_CHECK(result[11] == "μὲν");
    BOOST_CHECK(result[12] == "οὖν");
    BOOST_CHECK(result[13] == "τὸ");
    BOOST_CHECK(result[14] == "πράττειν");
    BOOST_CHECK(result[15] == "ἐμπειρία");
    BOOST_CHECK(result[16] == "τέχνης");
    BOOST_CHECK(result[17] == "οὐδὲς");
    BOOST_CHECK(result[18] == "δοκεῖ");
    BOOST_CHECK(result[19] == "διαφέρειν");
}
