#ifndef         __TUPLES__
    #define     __TUPLES__

#include <iostream>
#include <string>
#include <exception>
#include <sstream>



template <typename A, typename B = A>
struct  Tuple
{
    A       a;
    B       b;
    std::string    toString(void)
    {
        return "[TUPLE " + display(a) + " " + display(b) + "]";//[string:\"" + std::to_string(b) + "\"]]";<<
    }

    template <typename T>
    std::string         display(T a)
    {
        if (a)
            return "[???]";
        return "[???]";
    }

    std::string         display(int a)
    {
        return "[int:" + std::to_string(a) + "]";
    }

    std::string         display(float a)
    {
	    std::stringstream stream;
	    stream << a;
        return "[float:" + stream.str() + "f]";
    }

    std::string         display(std::string a)
    {
        return "[string:\"" + a + "\"]";
    }


};

///////////////	DEFINITIONS




///////////////	!DEFINITIONS		
#endif //       __TUPLES__