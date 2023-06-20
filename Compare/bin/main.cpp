#include "../include/Compare.hpp"

int     main(void)
{
    toto a, b;

    std::cout << "toto a, b;" << std::endl;
    std::cout << "compare(a, b) return " << compare(a, b) << std::endl;
    std::cout << "compare(1, 2) return " << compare(1, 2) << std::endl;
    std::cout   << "compare<const char*>(“chaineZ”, “chaineA42”) return " 
                << compare<const char*>("chaineZ", "chaineA42") << std::endl;
    const char *s1 = "42", *s2 = "45";
    std::cout << "compare(s1, s2) return " << compare(s1, s2) << std::endl;
}