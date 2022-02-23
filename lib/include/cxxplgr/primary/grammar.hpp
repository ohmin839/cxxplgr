#if !defined(CXXPLGR_PRIMARY_GRAMMAR_HPP)
#define CXXPLGR_PRIMARY_GRAMMAR_HPP

#include <string>

#include <boost/spirit/home/x3.hpp>
#include <boost/spirit/home/x3/support/ast/position_tagged.hpp>
#include <boost/spirit/home/x3/support/utility/error_reporting.hpp>
#include <boost/spirit/home/x3/support/utility/annotate_on_success.hpp>
#include <boost/fusion/include/adapt_struct.hpp>
#include <boost/fusion/include/io.hpp>

#include "cxxplgr/primary/action.hpp"

namespace cxxplgr { namespace primary
{
    namespace x3 = boost::spirit::x3;

    struct error_handler
    {
        template <typename Iterator, typename Exception, typename Context>
        x3::error_handler_result on_error(
            Iterator& first, Iterator const& last,
            Exception const& x, Context const& context)
        {
            auto& error_handler = x3::get<x3::error_handler_tag>(context).get();
            std::string message = "Error! Expecting: " + x.which() + " here:";
            error_handler(x.where(), message);
            return x3::error_handler_result::rethrow;
        }
    };

    struct grammar_class : error_handler, x3::annotate_on_success {};
    x3::rule<grammar_class, std::string> grammar = "grammar";

    x3::rule<class alphabet, std::string> alphabet = "alphabet";

    x3::rule<class single_small_alpha, int> single_small_alpha = "single_small_alpha";
    x3::rule<class single_small_epsilon, int> single_small_epsilon = "single_small_epsilon";
    x3::rule<class single_small_eta, int> single_small_eta = "single_small_eta";
    x3::rule<class single_small_iota, int> single_small_iota = "single_small_iota";
    x3::rule<class single_small_omicron, int> single_small_omicron= "single_small_omicron";
    x3::rule<class single_small_rho, int> single_small_rho= "single_small_rho";
    x3::rule<class single_small_upsilon, int> single_small_upsilon= "single_small_upsilon";
    x3::rule<class single_small_omega, int> single_small_omega= "single_small_omega";

    x3::rule<class single_large_alpha, int> single_large_alpha = "single_large_alpha";
    x3::rule<class single_large_epsilon, int> single_large_epsilon = "single_large_epsilon";
    x3::rule<class single_large_eta, int> single_large_eta = "single_large_eta";
    x3::rule<class single_large_iota, int> single_large_iota = "single_large_iota";
    x3::rule<class single_large_omicron, int> single_large_omicron= "single_large_omicron";
    x3::rule<class single_large_rho, int> single_large_rho= "single_large_rho";
    x3::rule<class single_large_upsilon, int> single_large_upsilon= "single_large_upsilon";
    x3::rule<class single_large_omega, int> single_large_omega= "single_large_omega";


    // lower case vowels

    auto const single_small_alpha_def
        =
            -(
                  x3::string("<")[action_add_point_breathful()]
                | x3::string(">")[action_add_point_breathless()]
            )
            >> -(
                  x3::string("'")[action_add_point_acute()]
                | x3::string("`")[action_add_point_grave()]
                | x3::string("~")[action_add_point_circumflex()]
            )
            >> x3::string("a")
            >> -(x3::string("|")[action_add_point_iota_subscriptum()]);
    auto const single_small_epsilon_def
        =
            -(
                  x3::string("<")[action_add_point_breathful()]
                | x3::string(">")[action_add_point_breathless()]
            )
            >> -(
                  x3::string("'")[action_add_point_acute()]
                | x3::string("`")[action_add_point_grave()]
            )
            >> x3::string("e");
    auto const single_small_eta_def
        =
            -(
                  x3::string("<")[action_add_point_breathful()]
                | x3::string(">")[action_add_point_breathless()]
            )
            >> -(
                  x3::string("'")[action_add_point_acute()]
                | x3::string("`")[action_add_point_grave()]
                | x3::string("~")[action_add_point_circumflex()]
            )
            >> x3::string("^e")
            >> -(x3::string("|")[action_add_point_iota_subscriptum()]);
    auto const single_small_iota_def
        =
            -(
                  x3::string("<")[action_add_point_breathful()]
                | x3::string(">")[action_add_point_breathless()]
                | x3::string("\"")[action_add_point_dialesis()]
            )
            >> -(
                  x3::string("'")[action_add_point_acute()]
                | x3::string("`")[action_add_point_grave()]
                | x3::string("~")[action_add_point_circumflex()]
            )
            >> x3::string("i");
    auto const single_small_omicron_def
        =
            -(
                  x3::string("<")[action_add_point_breathful()]
                | x3::string(">")[action_add_point_breathless()]
            )
            >> -(
                  x3::string("'")[action_add_point_acute()]
                | x3::string("`")[action_add_point_grave()]
            )
            >> x3::string("o");
    auto const single_small_upsilon_def
        =
            -(
                  x3::string("<")[action_add_point_breathful()]
                | x3::string(">")[action_add_point_breathless()]
                | x3::string("\"")[action_add_point_dialesis()]
            )
            >> -(
                  x3::string("'")[action_add_point_acute()]
                | x3::string("`")[action_add_point_grave()]
                | x3::string("~")[action_add_point_circumflex()]
            )
            >> (x3::string("u") | x3::string("y"));
    auto const single_small_omega_def
        =
            -(
                  x3::string("<")[action_add_point_breathful()]
                | x3::string(">")[action_add_point_breathless()]
            )
            >> -(
                  x3::string("'")[action_add_point_acute()]
                | x3::string("`")[action_add_point_grave()]
                | x3::string("~")[action_add_point_circumflex()]
            )
            >> x3::string("^o")
            >> -(x3::string("|")[action_add_point_iota_subscriptum()]);


    // upper case vowels

    auto const single_large_alpha_def
        =
            -(
                  x3::string("<")[action_add_point_breathful()]
                | x3::string(">")[action_add_point_breathless()]
            )
            >> -(
                  x3::string("'")[action_add_point_acute()]
                | x3::string("`")[action_add_point_grave()]
                | x3::string("~")[action_add_point_circumflex()]
            )
            >> x3::string("A")
            >> -(x3::string("|")[action_add_point_iota_subscriptum()]) ;
    auto const single_large_epsilon_def
        =
            -(
                  x3::string("<")[action_add_point_breathful()]
                | x3::string(">")[action_add_point_breathless()]
            )
            >> -(
                  x3::string("'")[action_add_point_acute()]
                | x3::string("`")[action_add_point_grave()]
            )
            >> x3::string("E");
    auto const single_large_eta_def
        =
            -(
                  x3::string("<")[action_add_point_breathful()]
                | x3::string(">")[action_add_point_breathless()]
            )
            >> -(
                  x3::string("'")[action_add_point_acute()]
                | x3::string("`")[action_add_point_grave()]
                | x3::string("~")[action_add_point_circumflex()]
            )
            >> x3::string("^E")
            >> -(x3::string("|")[action_add_point_iota_subscriptum()]);
    auto const single_large_iota_def
        =
            -(
                  x3::string("<")[action_add_point_breathful()]
                | x3::string(">")[action_add_point_breathless()]
                | x3::string("\"")[action_add_point_dialesis()]
            )
            >> -(
                  x3::string("'")[action_add_point_acute()]
                | x3::string("`")[action_add_point_grave()]
                | x3::string("~")[action_add_point_circumflex()]
            )
            >> x3::string("I");
    auto const single_large_omicron_def
        =
            -(
                  x3::string("<")[action_add_point_breathful()]
                | x3::string(">")[action_add_point_breathless()]
            )
            >> -(
                  x3::string("'")[action_add_point_acute()]
                | x3::string("`")[action_add_point_grave()]
            )
            >> x3::string("O");
    auto const single_large_upsilon_def
        =
            -(
                  x3::string("<")[action_add_point_breathful()]
                | x3::string(">")[action_add_point_breathless()]
                | x3::string("\"")[action_add_point_dialesis()]
            )
            >> -(
                  x3::string("'")[action_add_point_acute()]
                | x3::string("`")[action_add_point_grave()]
                | x3::string("~")[action_add_point_circumflex()]
            )
            >> (x3::string("U") | x3::string("Y"));
    auto const single_large_omega_def
        =
            -(
                  x3::string("<")[action_add_point_breathful()]
                | x3::string(">")[action_add_point_breathless()]
            )
            >> -(
                  x3::string("'")[action_add_point_acute()]
                | x3::string("`")[action_add_point_grave()]
                | x3::string("~")[action_add_point_circumflex()]
            )
            >> x3::string("^O")
            >> -(x3::string("|")[action_add_point_iota_subscriptum()]);


    // lower case consonants

    auto const single_small_beta
        = x3::string("b");
    auto const single_small_gamma
        = x3::string("g");
    auto const single_small_delta
        = x3::string("d");
    auto const single_small_zeta
        = x3::string("z");
    auto const single_small_theta
        = x3::string("th");
    auto const single_small_kappa
        = x3::string("k");
    auto const single_small_lambda
        = x3::string("l");
    auto const single_small_mu
        = x3::string("m");
    auto const single_small_nu
        = x3::string("n");
    auto const single_small_xi
        = x3::string("x");
    auto const single_small_pi
        = x3::string("p");
    auto const single_small_rho_def
        =
            -(
                      x3::string("<")[action_add_point_breathful()]
                    | x3::string(">")[action_add_point_breathless()]
            )
            >> x3::string("r");
    auto const single_small_sigma
        =
              x3::string("c")[action_convert_to_single_small_non_final_sigma()]
            | x3::string("s")[action_convert_to_single_small_final_sigma()];
    auto const single_small_tau
        = x3::string("t");
    auto const single_small_phi
        = x3::string("ph");
    auto const single_small_khi
        = x3::string("kh");
    auto const single_small_psi
        = x3::string("ps");


    // lower case consonants

    auto const single_large_beta
        = x3::string("B");
    auto const single_large_gamma
        = x3::string("G");
    auto const single_large_delta
        = x3::string("D");
    auto const single_large_zeta
        = x3::string("Z");
    auto const single_large_theta
        = x3::string("Th");
    auto const single_large_kappa
        = x3::string("K");
    auto const single_large_lambda
        = x3::string("L");
    auto const single_large_mu
        = x3::string("M");
    auto const single_large_nu
        = x3::string("N");
    auto const single_large_xi
        = x3::string("X");
    auto const single_large_pi
        = x3::string("P");
    auto const single_large_rho_def
        =
            -(x3::string("<")[action_add_point_breathful()])
            >> x3::string("R");
    auto const single_large_sigma
        = x3::string("S");
    auto const single_large_tau
        = x3::string("T");
    auto const single_large_phi
        = x3::string("Ph");
    auto const single_large_khi
        = x3::string("Kh");
    auto const single_large_psi
        = x3::string("Ps");


    // punctuations

    auto const comma
        = x3::string(",");
    auto const semicron
        = x3::string(";");
    auto const period
        = x3::string(".");
    auto const question
        = x3::string("?");
    auto const apostroph
        = x3::string("''");
    auto const lguillemet
        = x3::string("<<");
    auto const rguillemet
        = x3::string(">>");
    auto const emdash
        = x3::string("--");


    auto const others
        = x3::char_[action_add_asis()];


    // compound alphabets

    auto const leading_small_sigma
        =
            x3::string("s")
            >> alphabet[action_convert_to_leading_small_sigma()];
    auto const small_nasable_gamma
        =
            x3::string("n")
            >> (
                  x3::string("g")[action_convert_to_small_nasable_gamma_gamma()]
                | x3::string("kh")[action_convert_to_small_nasable_gamma_khi()]
                | x3::string("k")[action_convert_to_small_nasable_gamma_kappa()]
                | x3::string("x")[action_convert_to_small_nasable_gamma_xi()]
            );
    auto const large_nasable_gamma
        =
            x3::string("N")
            >> (
                x3::string("G")[action_convert_to_large_nasable_gamma_gamma()]
                | x3::string("Kh")[action_convert_to_large_nasable_gamma_khi()]
                | x3::string("K")[action_convert_to_large_nasable_gamma_kappa()]
                | x3::string("X")[action_convert_to_large_nasable_gamma_xi()]
            );
    auto const nasable_gamma
        = small_nasable_gamma
        | large_nasable_gamma
        ;


    // parser combinations

    auto const single_alphabet
        = single_small_alpha[action_convert_to_single_small_alpha()]
        | single_small_beta[action_convert_to_single_small_beta()]
        | single_small_gamma[action_convert_to_single_small_gamma()]
        | single_small_delta[action_convert_to_single_small_delta()]
        | single_small_epsilon[action_convert_to_single_small_epsilon()]
        | single_small_zeta[action_convert_to_single_small_zeta()]
        | single_small_eta[action_convert_to_single_small_eta()]
        | single_small_theta[action_convert_to_single_small_theta()]
        | single_small_iota[action_convert_to_single_small_iota()]
        | single_small_khi[action_convert_to_single_small_khi()]
        | single_small_kappa[action_convert_to_single_small_kappa()]
        | single_small_lambda[action_convert_to_single_small_lambda()]
        | single_small_mu[action_convert_to_single_small_mu()]
        | single_small_nu[action_convert_to_single_small_nu()]
        | single_small_xi[action_convert_to_single_small_xi()]
        | single_small_omicron[action_convert_to_single_small_omicron()]
        | single_small_phi[action_convert_to_single_small_phi()]
        | single_small_psi[action_convert_to_single_small_psi()]
        | single_small_pi[action_convert_to_single_small_pi()]
        | single_small_rho[action_convert_to_single_small_rho()]
        | single_small_sigma
        | single_small_tau[action_convert_to_single_small_tau()]
        | single_small_upsilon[action_convert_to_single_small_upsilon()]
        | single_small_omega[action_convert_to_single_small_omega()]
        | single_large_alpha[action_convert_to_single_large_alpha()]
        | single_large_beta[action_convert_to_single_large_beta()]
        | single_large_gamma[action_convert_to_single_large_gamma()]
        | single_large_delta[action_convert_to_single_large_delta()]
        | single_large_epsilon[action_convert_to_single_large_epsilon()]
        | single_large_zeta[action_convert_to_single_large_zeta()]
        | single_large_eta[action_convert_to_single_large_eta()]
        | single_large_theta[action_convert_to_single_large_theta()]
        | single_large_iota[action_convert_to_single_large_iota()]
        | single_large_khi[action_convert_to_single_large_khi()]
        | single_large_kappa[action_convert_to_single_large_kappa()]
        | single_large_lambda[action_convert_to_single_large_lambda()]
        | single_large_mu[action_convert_to_single_large_mu()]
        | single_large_nu[action_convert_to_single_large_nu()]
        | single_large_xi[action_convert_to_single_large_xi()]
        | single_large_omicron[action_convert_to_single_large_omicron()]
        | single_large_phi[action_convert_to_single_large_phi()]
        | single_large_psi[action_convert_to_single_large_psi()]
        | single_large_pi[action_convert_to_single_large_pi()]
        | single_large_rho[action_convert_to_single_large_rho()]
        | single_large_sigma[action_convert_to_single_large_sigma()]
        | single_large_tau[action_convert_to_single_large_tau()]
        | single_large_upsilon[action_convert_to_single_large_upsilon()]
        | single_large_omega[action_convert_to_single_large_omega()]
        ;

    auto alphabet_def
        = leading_small_sigma
        | nasable_gamma
        | single_alphabet
        ;

    auto punctuation
        = comma[action_convert_to_comma()]
        | semicron[action_convert_to_semicoron()]
        | period[action_convert_to_period()]
        | question[action_convert_to_question()]
        | apostroph[action_convert_to_apostroph()]
        | emdash[action_convert_to_emdash()]
        | lguillemet[action_convert_to_lguillemet()]
        | rguillemet[action_convert_to_rguillemet()]
        ;

    auto const letter
        = alphabet[action_add_asis()]
        | punctuation
        | others
        ;

    auto const grammar_def
        = *(letter) > x3::eoi
        ;


    BOOST_SPIRIT_DEFINE(
            grammar,
            alphabet,
            single_small_alpha,
            single_small_epsilon,
            single_small_eta,
            single_small_iota,
            single_small_omicron,
            single_small_rho,
            single_small_upsilon,
            single_small_omega,
            single_large_alpha,
            single_large_epsilon,
            single_large_eta,
            single_large_iota,
            single_large_omicron,
            single_large_rho,
            single_large_upsilon,
            single_large_omega
            );

}}
#endif
