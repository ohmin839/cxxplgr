#include <iostream>
#include <string>

#include <boost/spirit/home/x3.hpp>
#include <boost/spirit/home/x3/support/utility/error_reporting.hpp>

#include "cxxplgr/primary.hpp"
#include "cxxplgr/primary/grammar.hpp"

namespace cxxplgr { namespace primary
{
    std::string to_polytonic(std::string ascii)
    {
        using iterator_type = std::string::const_iterator;
        iterator_type iter = ascii.begin();
        iterator_type const end = ascii.end();

        using boost::spirit::x3::with;
        using boost::spirit::x3::error_handler_tag;
        using error_handler_type = boost::spirit::x3::error_handler<iterator_type>;

        // error handler
        error_handler_type error_handler(iter, end, std::cerr);

        // parser
        using cxxplgr::primary::grammar;
        auto const parser = 
            with<error_handler_tag>(std::ref(error_handler))
            [
                grammar
            ];

        std::string result;
        parse(iter, end, parser, result);

        return result;
    }
}}
