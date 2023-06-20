#ifndef         __OLDFRIENDS__
    #define     __OLDFRIENDS__

#include <iostream>
#include <string>

template <typename T>
class OldFriends
{
	public:
    	void 	swap(T a, T b);
		T		min(T a, T b);
		T		max(T a, T b);
		T		add(T a, T b);
};

template<typename T>
void	swap(T& a, T& b) {
	T c = a;
	a = b;
	b = c;
}

template <typename T>
T		min(T a, T b)
{
	return (a < b) ? a : b;
}

template <typename T>
T		max(T a, T b)
{
	return (a > b) ? a : b;
}

template <typename T>
T		add(T a, T b)
{
	return a + b;
}
#endif //       __OLDFRIENDS__