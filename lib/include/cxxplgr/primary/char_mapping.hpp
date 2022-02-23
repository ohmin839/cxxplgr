#if !defined(CXXPLGR_PRIMARY_CHAR_MAPPING_HPP)
#define CXXPLGR_PRIMARY_CHAR_MAPPING_HPP

#include <string>

namespace cxxplgr { namespace primary
{
    std::string convert_single_small_alpha(int point);
    std::string convert_single_small_epsilon(int point);
    std::string convert_single_small_eta(int point);
    std::string convert_single_small_iota(int point);
    std::string convert_single_small_omicron(int point);
    std::string convert_single_small_rho(int point);
    std::string convert_single_small_upsilon(int point);
    std::string convert_single_small_omega(int point);

    std::string convert_single_large_alpha(int point);
    std::string convert_single_large_epsilon(int point);
    std::string convert_single_large_eta(int point);
    std::string convert_single_large_iota(int point);
    std::string convert_single_large_omicron(int point);
    std::string convert_single_large_rho(int point);
    std::string convert_single_large_upsilon(int point);
    std::string convert_single_large_omega(int point);
}}
#endif
