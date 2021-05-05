#if !defined(CXXPLGR_PRIMARY_ACTION_HPP)
#define CXXPLGR_PRIMARY_ACTION_HPP

#include <iostream>
#include <boost/spirit/home/x3.hpp>

#include "cxxplgr/primary/char_mapping.hpp"

namespace cxxplgr { namespace primary
{
    namespace x3 = boost::spirit::x3;
    using x3::_val;
    using x3::_attr;

    struct action_add_point_breathful
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += 16;
        }
    };

    struct action_add_point_breathless
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += 32;
        }
    };

    struct action_add_point_acute
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += 4;
        }
    };

    struct action_add_point_grave
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += 8;
        }
    };

    struct action_add_point_circumflex
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += 12;
        }
    };

    struct action_add_point_iota_subscriptum
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += 1;
        }
    };

    struct action_add_point_dialesis
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += 64;
        }
    };

    struct action_convert_to_single_small_alpha
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += convert_single_small_alpha(_attr(ctx));
        }
    };

    struct action_convert_to_single_small_epsilon
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += convert_single_small_epsilon(_attr(ctx));
        }
    };

    struct action_convert_to_single_small_eta
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += convert_single_small_eta(_attr(ctx));
        }
    };

    struct action_convert_to_single_small_iota
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += convert_single_small_iota(_attr(ctx));
        }
    };

    struct action_convert_to_single_small_omicron
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += convert_single_small_omicron(_attr(ctx));
        }
    };

    struct action_convert_to_single_small_upsilon
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += convert_single_small_upsilon(_attr(ctx));
        }
    };

    struct action_convert_to_single_small_omega
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += convert_single_small_omega(_attr(ctx));
        }
    };

    struct action_convert_to_single_large_alpha
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += convert_single_large_alpha(_attr(ctx));
        }
    };

    struct action_convert_to_single_large_epsilon
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += convert_single_large_epsilon(_attr(ctx));
        }
    };

    struct action_convert_to_single_large_eta
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += convert_single_large_eta(_attr(ctx));
        }
    };

    struct action_convert_to_single_large_iota
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += convert_single_large_iota(_attr(ctx));
        }
    };

    struct action_convert_to_single_large_omicron
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += convert_single_large_omicron(_attr(ctx));
        }
    };

    struct action_convert_to_single_large_upsilon
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += convert_single_large_upsilon(_attr(ctx));
        }
    };

    struct action_convert_to_single_large_omega
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += convert_single_large_omega(_attr(ctx));
        }
    };

    struct action_convert_to_single_small_beta
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03B2";
        }
    };

    struct action_convert_to_single_small_gamma
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03B3";
        }
    };

    struct action_convert_to_single_small_delta
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03B4";
        }
    };

    struct action_convert_to_single_small_zeta
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03B6";
        }
    };

    struct action_convert_to_single_small_theta
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03B8";
        }
    };

    struct action_convert_to_single_small_kappa
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03BA";
        }
    };

    struct action_convert_to_single_small_lambda
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03BB";
        }
    };

    struct action_convert_to_single_small_mu
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03BC";
        }
    };

    struct action_convert_to_single_small_nu
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03BD";
        }
    };

    struct action_convert_to_single_small_xi
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03BE";
        }
    };

    struct action_convert_to_single_small_pi
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03C0";
        }
    };

    struct action_convert_to_single_small_rho
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += convert_single_small_rho(_attr(ctx));
        }
    };

    struct action_convert_to_single_small_final_sigma
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03C2";
        }
    };

    struct action_convert_to_single_small_non_final_sigma
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03C3";
        }
    };

    struct action_convert_to_single_small_tau
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03C4";
        }
    };

    struct action_convert_to_single_small_phi
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03C6";
        }
    };

    struct action_convert_to_single_small_khi
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03C7";
        }
    };

    struct action_convert_to_single_small_psi
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03C8";
        }
    };

    struct action_convert_to_single_large_beta
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u0392";
        }
    };

    struct action_convert_to_single_large_gamma
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u0393";
        }
    };

    struct action_convert_to_single_large_delta
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u0394";
        }
    };

    struct action_convert_to_single_large_zeta
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u0396";
        }
    };

    struct action_convert_to_single_large_theta
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u0398";
        }
    };

    struct action_convert_to_single_large_kappa
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u039A";
        }
    };

    struct action_convert_to_single_large_lambda
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u039B";
        }
    };

    struct action_convert_to_single_large_mu
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u039C";
        }
    };

    struct action_convert_to_single_large_nu
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u039D";
        }
    };

    struct action_convert_to_single_large_xi
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u039E";
        }
    };

    struct action_convert_to_single_large_pi
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03A0";
        }
    };

    struct action_convert_to_single_large_rho
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += convert_single_large_rho(_attr(ctx));
        }
    };

    struct action_convert_to_single_large_sigma
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03A3";
        }
    };

    struct action_convert_to_single_large_tau
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03A4";
        }
    };

    struct action_convert_to_single_large_phi
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03A6";
        }
    };

    struct action_convert_to_single_large_khi
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03A7";
        }
    };

    struct action_convert_to_single_large_psi
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03A8";
        }
    };

    struct action_convert_to_leading_small_sigma
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03C3";
            _val(ctx) += _attr(ctx);
        }
    };

    struct action_convert_to_small_nasable_gamma_gamma
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03B3\u03B3";
        }
    };

    struct action_convert_to_small_nasable_gamma_khi
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03B3\u03C7";
        }
    };

    struct action_convert_to_small_nasable_gamma_kappa
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03B3\u03BA";
        }
    };

    struct action_convert_to_small_nasable_gamma_xi
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u03B3\u03BE";
        }
    };

    struct action_convert_to_large_nasable_gamma_gamma
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u0393\u0393";
        }
    };

    struct action_convert_to_large_nasable_gamma_khi
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u0393\u03A7";
        }
    };

    struct action_convert_to_large_nasable_gamma_kappa
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u0393\u039A";
        }
    };

    struct action_convert_to_large_nasable_gamma_xi
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u0393\u039E";
        }
    };

    struct action_convert_to_comma
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += ",";
        }
    };

    struct action_convert_to_semicoron
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u0387";
        }
    };

    struct action_convert_to_period
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += ".";
        }
    };

    struct action_convert_to_question
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u037E";
        }
    };

    struct action_convert_to_apostroph
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "'";
        }
    };

    struct action_convert_to_emdash
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u2014";
        }
    };

    struct action_convert_to_lguillemet
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u00AB";
        }
    };

    struct action_convert_to_rguillemet
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += "\u00BB";
        }
    };

    struct action_add_asis
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += _attr(ctx);
        }
    };

}}
#endif
