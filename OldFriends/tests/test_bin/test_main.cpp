#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <criterion/redirect.h>
#include <criterion/logging.h>
#include <criterion/parameterized.h>
#include <signal.h>
#include "../test_include/test_OldFriends.hpp"


void    redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(OldFriends, test_OldFriend_swap)
{
  int a = 2;
  int b = 3;

  ::swap(a, b);
  cr_assert(a == 3);
  cr_assert(b == 2);
  std::cout << "a = " << a << ", b = " << b << std::endl;

  std::string c = "chaine1";
  std::string d = "chaine2";

  ::swap(c, d);
  cr_assert(c == "chaine2");
  cr_assert(d == "chaine1");
  std::cout << "c = " << c << ", d = " << d << std::endl;
}


Test(OldFriends, test_OldFriend_min)
{
    int a = 2;
    int b = 3;

    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    cr_assert(a < b);

    a = 3;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    cr_assert(a == b);

    std::string c = "chaine1";
    std::string d = "chaine2";

    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    cr_assert(c < d);

    c = "chaine2";
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    cr_assert(a == b);
}


Test(OldFriends, test_OldFriend_max)
{
    int a = 2;
    int b = 3;

    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
    cr_assert(b > a);

    a = 3;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
    cr_assert(a == b);

    std::string c = "chaine1";
    std::string d = "chaine2";

    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
    cr_assert(d > c);

    c = "chaine2";
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
    cr_assert(a == b);
}


Test(OldFriends, test_OldFriend_add)
{
    int a = 2;
    int b = 3;

    std::cout << "add(a, b) = " << ::add(a, b) << std::endl;
    cr_assert(a + b == 5);

    std::string c = "chaine1";
    std::string d = "chaine2";

    std::cout << "add(c, d) = " << ::add(c, d) << std::endl;
    cr_assert(c + d == "chaine1chaine2");
}