#ifndef         __MIN__
    #define     __MIN__
#include <iostream>
#include <string>

class 			Min
{
	public:
        template <typename T>
        T       min(T a, T b);

        int     min(int a, int b);

        template <typename T>
        T       templateMin(T *a, T b);

        int     nonTemplateMin(int *a, int b);
};

template <typename T>
T               min(T a, T b)
{
    std::cout << "template min" << std::endl;
    return (a <= b) ? a : b;
}

int             min(int a, int b)
{
    std::cout << "non-template min" << std::endl;
    return (a <= b) ? a : b;
}

template <typename T>
T               templateMin(T *a, T b)
{
    T result = a[0];
    for (int i = 1; i < b; i++)
        result = min(a[i], b);
    return result;
}

int             nonTemplateMin(int *a, int b)
{
    int result = 0;
    for (int i = 1; i < b; i++)
        result = min(a[i], b);
    return result;
}

#endif //       __MIN__