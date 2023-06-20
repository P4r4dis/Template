#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>
#include <criterion/logging.h>
#include <criterion/parameterized.h>
#include <signal.h>
#include "../test_include/test_Compare.hpp"


void    redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(toto, test_compare)
{
    toto a, b;

    std::cout << "toto a, b;" << std::endl;
    std::cout << "compare(a, b) return " << compare(a, b) << std::endl;
    cr_assert(compare(a, b) == 0);
    std::cout << "compare(1, 2) return " << compare(1, 2) << std::endl;
    cr_assert(compare(1, 2) == -1);
    std::cout   << "compare<const char*>(“chaineZ”, “chaineA42”) return " 
                << compare<const char*>("chaineZ", "chaineA42") << std::endl;
    cr_assert(compare<const char*>("chaineZ", "chaineA42") == 1);

    const char *s1 = "42", *s2 = "45";
    std::cout << "compare(s1, s2) return " << compare(s1, s2) << std::endl;
    cr_assert(compare(s1, s2) == -1);
}