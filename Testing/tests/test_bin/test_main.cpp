#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>
#include <criterion/logging.h>
#include <criterion/parameterized.h>
#include <signal.h>
#include "../test_include/test_Testing.hpp"


void    redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(Testing, test_testing_equal)
{
    cr_assert(equal(2, 5) == false);
    cr_assert(equal(2, 2) == true);

    cr_assert(equal(2.4, 5.4) == false);
    cr_assert(equal(2.0, 2.0) == true);

    std::string a = "H";
    std::string b = "G";
    cr_assert(equal(a, b) == false);
    cr_assert(equal(a, a) == true);

}


Test(Testing, test_tester_equal)
{
    Tester <int> iT;
    cr_assert(iT.equal(2, 5) == false);
    cr_assert(iT.equal(2, 2) == true);
}

Test(Testing, main)
{
    std::cout<< "1 == 0 ? " << equal(1, 0) << std::endl;
    std::cout << "1 == 1 ? " << equal(1, 1) << std::endl;
    Tester <int> iT;

    std::cout << "41 == 42 ? " << iT.equal(41, 42) << std::endl;
    std::cout << "42 == 42 ? " << iT.equal(42, 42) << std::endl;
}