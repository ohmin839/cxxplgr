#include <iostream>
#include <set>
#include <string>

#include "cxxplgr/collector.hpp"
#include "cxxplgr/sqlite3.hpp"

int main(int argc, char** argv)
{
    std::set<std::string> words;
    std::string str;
    while (getline(std::cin, str))
    {
        cxxplgr::collector::collect(words, str);
    }
    if (argc <= 1)
    {
        for (std::string word : words)
        {
            std::cout << word << std::endl;
        }
    }
    else
    {
        const char* file = argv[1];
        try
        {
            cxxplgr::collector::db_exec(file, words);
        }
        catch (int err)
        {
            std::cerr << "Error throwed from SQLite: " << err << std::endl;
        }
    }
    return 0;
}
