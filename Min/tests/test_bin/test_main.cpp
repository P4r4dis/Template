#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>
#include <criterion/logging.h>
#include <criterion/parameterized.h>
#include <signal.h>
#include "../test_include/test_Min.hpp"


void    redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(toto, test_Min)
{
    int     tab[2] = {3 , 0};
    int     minimum = templateMin(tab, 2);

    std::cout << "templateMin(tab, 2) = " << minimum << std::endl;
}



Test(toto, test_nonTemplateMin)
{
    int     tab[2] = {3 , 0};
    int     minimum = nonTemplateMin(tab, 2);

    std::cout << "nonTemplateMin(tab, 2) = " << minimum << std::endl; 
}

Test(toto, test_main)
{
    int     tab[2] = {3 , 0};
    int     minimum = templateMin(tab, 2);

    std::cout << "templateMin(tab, 2) = " << minimum << std::endl;
    
    minimum = nonTemplateMin(tab, 2);
    std::cout << "nonTemplateMin(tab, 2) = " << minimum << std::endl; 
}