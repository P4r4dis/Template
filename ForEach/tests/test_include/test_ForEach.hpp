#ifndef         __TEST_FOREACH__
    #define     __TEST_FOREACH__

#include <iostream>
#include <string>

class 			ForEach
{
	public:
        template <typename T>
        void       foreach(T *tab, void func(const T & elem), int size);
        
        template <typename T>
        void    print(const T& elem);
};

template <typename T>
void               foreach(T *tab, void func(const T & elem), int size)
{
    for( int i = 0; i < size; i++)
        func(tab[i]);
}

template <typename T>
void            print(const T& elem)
{
    std::cout << elem << std::endl;
}

#endif //       __TEST_FOREACH__