#include "../include/Min.hpp"

int     main(void)
{
    int     tab[2] = {3 , 0};
    int     minimum = templateMin(tab, 2);

    std::cout << "templateMin(tab, 2) = " << minimum << std::endl;
    
    minimum = nonTemplateMin(tab, 2);
    std::cout << "nonTemplateMin(tab, 2) = " << minimum << std::endl; 
}