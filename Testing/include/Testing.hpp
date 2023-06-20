#ifndef         __TESTING__
    #define     __TESTING__

#include <iostream>

template <typename T>
bool            equal(const T& a, const T& b);

template <typename T>
class 			Tester
{
	public:
        bool    equal(const T& a, const T& b);
};

#endif //       __TESTING__