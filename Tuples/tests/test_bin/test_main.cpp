#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>
#include <criterion/logging.h>
#include <criterion/parameterized.h>
#include <signal.h>
#include "../test_include/test_Tuples.hpp"


void    redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}


Test(Tuples, test_Tuples)
{
    Tuple <int, std::string> t;
    t.a = 42;
    t.b = std::string("Boeuf aux oignons");
    std::cout << "t.a = " << t.a << ", t.b = " << t.b << std::endl;
}


Test(Tuples, test_Tuples_default_value)
{
    Tuple <int> t;
    t.a = 42;
    t.b = 21;
    std::cout << "t.a = " << t.a << ", t.b = " << t.b << std::endl;
}

Test(Tuples, test_Tuples_toString)
{
    Tuple<int, std::string> t;
    t.a = 42;
    t.b = std::string("Karadoc toasted sandwich");
    std::cout << t.toString() << std::endl;
}

Test(Tuples, test_Tuples_toString2)
{
    Tuple<float, char> t;
    t.a = 1.1f;
    t.b = 'x';
    std::cout << t.toString() << std::endl;
    Tuple<int, std::string> t2;
    t2.a = 10;
    t2.b = 'x';
    std::cout << t2.toString() << std::endl;
}