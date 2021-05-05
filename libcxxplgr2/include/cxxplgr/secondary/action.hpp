#if !defined(CXXPLGR_SECONDARY_ACTION_HPP)
#define CXXPLGR_SECONDARY_ACTION_HPP

#include <boost/spirit/home/x3.hpp>

namespace cxxplgr { namespace secondary
{
    namespace x3 = boost::spirit::x3;
    using x3::_val;
    using x3::_attr;

    struct action_assign_string
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) = "";
        }
    };

    struct action_add_asis_string
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) += _attr(ctx);
        }
    };

    struct action_assign_list
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx) = {};
        }
    };

    struct action_add_element
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            _val(ctx).push_back(_attr(ctx));
        }
    };

    struct action_ignore
    {
        template <typename Context>
        void operator()(Context const& ctx) const
        {
            // DO Nothing
        }
    };
}}

#endif
