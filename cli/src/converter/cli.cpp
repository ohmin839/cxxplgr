#include <iostream>
#include <iterator>
#include <string>

#include "cxxplgr/primary.hpp"

int main()
{
    using cxxplgr::primary::to_polytonic;

    std::cin >> std::noskipws;

    std::istream_iterator<char> it(std::cin);
    std::istream_iterator<char> end;

    std::string str(it, end);
    try
    {
        std::string result = to_polytonic(str);
        std::cout << result;
    }
    catch (...)
    {
        return 1;
    }

    return 0;
}
