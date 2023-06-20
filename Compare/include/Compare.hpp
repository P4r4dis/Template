#ifndef         __COMPARE__
    #define     __COMPARE__
#include <iostream>
#include <string>

class 			toto
{
	public:
        toto() = default;
        toto(const toto&) = delete;

        toto    &operator=(const toto&) = delete;
        bool    operator==(const toto&) const { return true; }
        bool    operator>(const toto&) const { return false; }
        bool    operator<(const toto&) const { return false; }
        
        template <typename T>
        int     compare(const T &a, const T &b);
};

template <typename T>
int             compare(const T &a, const T &b)
{
    if (a == b)
        return 0;
    else if (a < b)
        return -1;
    else
        return 1;
}
#endif //       __COMPARE__