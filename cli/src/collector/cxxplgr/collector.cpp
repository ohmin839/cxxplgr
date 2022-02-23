#include <set>
#include <string>
#include <vector>

#include "cxxplgr/collector.hpp"
#include "cxxplgr/secondary.hpp"

namespace cxxplgr { namespace collector
{
    using cxxplgr::secondary::split_into_words;

    void collect(std::set<std::string> &words, std::string line)
    {
        std::vector<std::string> split = split_into_words(line);
        for(std::string word : split)
        {
            words.insert(word);
        }
    }
}}
