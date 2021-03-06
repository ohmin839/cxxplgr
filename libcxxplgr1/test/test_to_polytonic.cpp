#define BOOST_TEST_MODULE test_to_polytonic

#include <string>
#include <utility>

#include <boost/test/included/unit_test.hpp>
#include <boost/test/data/test_case.hpp>
#include <boost/test/data/monomorphic.hpp>

#include "cxxplgr/primary.hpp"

typedef std::pair<std::string, std::string> fixture_t;
const fixture_t fixtures[] =
{
    {"", ""},
    {"b", "β"},
    {"g", "γ"},
    {"d", "δ"},
    {"z", "ζ"},
    {"th", "θ"},
    {"k", "κ"},
    {"l", "λ"},
    {"m", "μ"},
    {"n", "ν"},
    {"x", "ξ"},
    {"p", "π"},
    {"s", "ς"},
    {"c", "σ"},
    {"t", "τ"},
    {"ph", "φ"},
    {"kh", "χ"},
    {"ps", "ψ"},
    {"B", "Β"},
    {"G", "Γ"},
    {"D", "Δ"},
    {"Z", "Ζ"},
    {"Th", "Θ"},
    {"K", "Κ"},
    {"L", "Λ"},
    {"M", "Μ"},
    {"N", "Ν"},
    {"X", "Ξ"},
    {"P", "Π"},
    {"S", "Σ"},
    {"T", "Τ"},
    {"Ph", "Φ"},
    {"Kh", "Χ"},
    {"Ps", "Ψ"},
    {"a", "α"},
    {"a|", "ᾳ"},
    {"'a", "ά"},
    {"'a|", "ᾴ"},
    {"`a", "ὰ"},
    {"`a|", "ᾲ"},
    {"~a", "ᾶ"},
    {"~a|", "ᾷ"},
    {"<a", "ἁ"},
    {"<a|", "ᾁ"},
    {"<'a", "ἅ"},
    {"<'a|", "ᾅ"},
    {"<`a", "ἃ"},
    {"<`a|", "ᾃ"},
    {"<~a", "ἇ"},
    {"<~a|", "ᾇ"},
    {">a", "ἀ"},
    {">a|", "ᾀ"},
    {">'a", "ἄ"},
    {">'a|", "ᾄ"},
    {">`a", "ἂ"},
    {">`a|", "ᾂ"},
    {">~a", "ἆ"},
    {">~a|", "ᾆ"},
    {"e", "ε"},
    {"'e", "έ"},
    {"`e", "ὲ"},
    {"<e", "ἑ"},
    {"<'e", "ἕ"},
    {"<`e", "ἓ"},
    {">e", "ἐ"},
    {">'e", "ἔ"},
    {">`e", "ἒ"},
    {"^e", "η"},
    {"^e|", "ῃ"},
    {"'^e", "ή"},
    {"'^e|", "ῄ"},
    {"`^e", "ὴ"},
    {"`^e|", "ῂ"},
    {"~^e", "ῆ"},
    {"~^e|", "ῇ"},
    {"<^e", "ἡ"},
    {"<^e|", "ᾑ"},
    {"<'^e", "ἥ"},
    {"<'^e|", "ᾕ"},
    {"<`^e", "ἣ"},
    {"<`^e|", "ᾓ"},
    {"<~^e", "ἧ"},
    {"<~^e|", "ᾗ"},
    {">^e", "ἠ"},
    {">^e|", "ᾐ"},
    {">'^e", "ἤ"},
    {">'^e|", "ᾔ"},
    {">`^e", "ἢ"},
    {">`^e|", "ᾒ"},
    {">~^e", "ἦ"},
    {">~^e|", "ᾖ"},
    {"i", "ι"},
    {"'i", "ί"},
    {"`i", "ὶ"},
    {"~i", "ῖ"},
    {"<i", "ἱ"},
    {"<'i", "ἵ"},
    {"<`i", "ἳ"},
    {"<~i", "ἷ"},
    {">i", "ἰ"},
    {">'i", "ἴ"},
    {">`i", "ἲ"},
    {">~i", "ἶ"},
    {"\"i", "ϊ"},
    {"\"'i", "ΐ"},
    {"\"`i", "ῒ"},
    {"\"~i", "ῗ"},
    {"o", "ο"},
    {"'o", "ό"},
    {"`o", "ὸ"},
    {"<o", "ὁ"},
    {"<'o", "ὅ"},
    {"<`o", "ὃ"},
    {">o", "ὀ"},
    {">'o", "ὄ"},
    {">`o", "ὂ"},
    {"r", "ρ"},
    {"<r", "ῥ"},
    {">r", "ῤ"},
    {"u", "υ"},
    {"'u", "ύ"},
    {"`u", "ὺ"},
    {"~u", "ῦ"},
    {"<u", "ὑ"},
    {"<'u", "ὕ"},
    {"<`u", "ὓ"},
    {"<~u", "ὗ"},
    {">u", "ὐ"},
    {">'u", "ὔ"},
    {">`u", "ὒ"},
    {">~u", "ὖ"},
    {"\"u", "ϋ"},
    {"\"'u", "ΰ"},
    {"\"`u", "ῢ"},
    {"\"~u", "ῧ"},
    {"y", "υ"},
    {"'y", "ύ"},
    {"`y", "ὺ"},
    {"~y", "ῦ"},
    {"<y", "ὑ"},
    {"<'y", "ὕ"},
    {"<`y", "ὓ"},
    {"<~y", "ὗ"},
    {">y", "ὐ"},
    {">'y", "ὔ"},
    {">`y", "ὒ"},
    {">~y", "ὖ"},
    {"\"y", "ϋ"},
    {"\"'y", "ΰ"},
    {"\"`y", "ῢ"},
    {"\"~y", "ῧ"},
    {"^o", "ω"},
    {"^o|", "ῳ"},
    {"'^o", "ώ"},
    {"'^o|", "ῴ"},
    {"`^o", "ὼ"},
    {"`^o|", "ῲ"},
    {"~^o", "ῶ"},
    {"~^o|", "ῷ"},
    {"<^o", "ὡ"},
    {"<^o|", "ᾡ"},
    {"<'^o", "ὥ"},
    {"<'^o|", "ᾥ"},
    {"<`^o", "ὣ"},
    {"<`^o|", "ᾣ"},
    {"<~^o", "ὧ"},
    {"<~^o|", "ᾧ"},
    {">^o", "ὠ"},
    {">^o|", "ᾠ"},
    {">'^o", "ὤ"},
    {">'^o|", "ᾤ"},
    {">`^o", "ὢ"},
    {">`^o|", "ᾢ"},
    {">~^o", "ὦ"},
    {">~^o|", "ᾦ"},
    {"A", "Α"},
    {"A|", "ᾼ"},
    {"'A", "Ά"},
    {"`A", "Ὰ"},
    {"<A", "Ἁ"},
    {"<A|", "ᾉ"},
    {"<'A", "Ἅ"},
    {"<'A|", "ᾍ"},
    {"<`A", "Ἃ"},
    {"<`A|", "ᾋ"},
    {"<~A", "Ἇ"},
    {"<~A|", "ᾏ"},
    {">A", "Ἀ"},
    {">A|", "ᾈ"},
    {">'A", "Ἄ"},
    {">'A|", "ᾌ"},
    {">`A", "Ἂ"},
    {">`A|", "ᾊ"},
    {">~A", "Ἆ"},
    {">~A|", "ᾎ"},
    {"E", "Ε"},
    {"'E", "Έ"},
    {"`E", "Ὲ"},
    {"<E", "Ἑ"},
    {"<'E", "Ἕ"},
    {"<`E", "Ἓ"},
    {">E", "Ἐ"},
    {">'E", "Ἔ"},
    {">`E", "Ἒ"},
    {"^E", "Η"},
    {"^E|", "ῌ"},
    {"'^E", "Ή"},
    {"`^E", "Ὴ"},
    {"<^E", "Ἡ"},
    {"<^E|", "ᾙ"},
    {"<'^E", "Ἥ"},
    {"<'^E|", "ᾝ"},
    {"<`^E", "Ἣ"},
    {"<`^E|", "ᾛ"},
    {"<~^E", "Ἧ"},
    {"<~^E|", "ᾟ"},
    {">^E", "Ἠ"},
    {">^E|", "ᾘ"},
    {">'^E", "Ἤ"},
    {">'^E|", "ᾜ"},
    {">`^E", "Ἢ"},
    {">`^E|", "ᾚ"},
    {">~^E", "Ἦ"},
    {">~^E|", "ᾞ"},
    {"I", "Ι"},
    {"'I", "Ί"},
    {"`I", "Ὶ"},
    {"<I", "Ἱ"},
    {"<'I", "Ἵ"},
    {"<`I", "Ἳ"},
    {"<~I", "Ἷ"},
    {">I", "Ἰ"},
    {">'I", "Ἴ"},
    {">`I", "Ἲ"},
    {">~I", "Ἶ"},
    {"\"I", "Ϊ"},
    {"O", "Ο"},
    {"'O", "Ό"},
    {"`O", "Ὸ"},
    {"<O", "Ὁ"},
    {"<'O", "Ὅ"},
    {"<`O", "Ὃ"},
    {">O", "Ὀ"},
    {">'O", "Ὄ"},
    {">`O", "Ὂ"},
    {"R", "Ρ"},
    {"<R", "Ῥ"},
    {"U", "Υ"},
    {"'U", "Ύ"},
    {"`U", "Ὺ"},
    {"<U", "Ὑ"},
    {"<'U", "Ὕ"},
    {"<`U", "Ὓ"},
    {"<~U", "Ὗ"},
    {"\"U", "Ϋ"},
    {"Y", "Υ"},
    {"'Y", "Ύ"},
    {"`Y", "Ὺ"},
    {"<Y", "Ὑ"},
    {"<'Y", "Ὕ"},
    {"<`Y", "Ὓ"},
    {"<~Y", "Ὗ"},
    {"\"Y", "Ϋ"},
    {"^O", "Ω"},
    {"^O|", "ῼ"},
    {"'^O", "Ώ"},
    {"`^O", "Ὼ"},
    {"<^O", "Ὡ"},
    {"<^O|", "ᾩ"},
    {"<'^O", "Ὥ"},
    {"<'^O|", "ᾭ"},
    {"<`^O", "Ὣ"},
    {"<`^O|", "ᾫ"},
    {"<~^O", "Ὧ"},
    {"<~^O|", "ᾯ"},
    {">^O", "Ὠ"},
    {">^O|", "ᾨ"},
    {">'^O", "Ὤ"},
    {">'^O|", "ᾬ"},
    {">`^O", "Ὢ"},
    {">`^O|", "ᾪ"},
    {">~^O", "Ὦ"},
    {">~^O|", "ᾮ"},
    {"sa", "σα"},
    {"ssa", "σσα"},
    {"ng", "γγ"},
    {"nk", "γκ"},
    {"nx", "γξ"},
    {"nkh", "γχ"},
    {"NG", "ΓΓ"},
    {"NK", "ΓΚ"},
    {"NX", "ΓΞ"},
    {"NKh", "ΓΧ"},
    {",", ","},
    {";", "·"},
    {".", "."},
    {"?", ";"},
    {"d''", "δ'"},
    {"<<", "«"},
    {">>", "»"},
    {"--", "—"},
    {"(", "("},
    {")", ")"},
    {"[", "["},
    {"]", "]"},
    {"<", "<"},
    {">", ">"},
    {" ", " "},
    {"\t", "\t"},
    {"\n", "\n"},
    {"\r\n", "\r\n"}
};

namespace bdata = boost::unit_test::data;

BOOST_TEST_DONT_PRINT_LOG_VALUE(fixture_t)

BOOST_DATA_TEST_CASE(
    test_to_polytonic,
    bdata::make(fixtures),
    arg)
{
    using iterator_type = std::string::const_iterator;
    using cxxplgr::primary::to_polytonic;

    std::string ascii = arg.first;
    std::string expected = arg.second;

    iterator_type iter = ascii.begin();
    iterator_type const end = ascii.end();

    std::string actual = to_polytonic(ascii);

    BOOST_TEST(actual == expected);
}

