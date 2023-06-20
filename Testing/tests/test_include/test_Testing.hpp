#ifndef         __TEST_TESTING__
    #define     __TEST_TESTING__

#include <iostream>
#include <string>

template <typename T>
bool            equal(const T& a, const T& b);

template <typename T>
class 			Tester
{
	public:
        bool    equal(const T& a, const T& b);
};

#endif //       __TEST_TESTING__