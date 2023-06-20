#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>
#include <criterion/logging.h>
#include <criterion/parameterized.h>
#include <signal.h>
#include "../test_include/test_ForEach.hpp"


void    redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(ForEach, test_foreach)
{
    int tab[] = {11, 3, 89, 42};
    foreach(tab, print<int>, 4);
    std::string tab2[] = {"j'", "aime", "les", "templates", "!"};
    foreach(tab2, print, 5);
}