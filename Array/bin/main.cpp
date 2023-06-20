#include "../include/Tuples.hpp"

int main() {
    Tuple <int> t;
    t.a = 42;
    t.b = 21;
    std::cout << "t.a = " << t.a << ", t.b = " << t.b << std::endl;

    Tuple<int, std::string> t2;
    t2.a = 42;
    t2.b = std::string("Karadoc toasted sandwich");
    std::cout << t2.toString() << std::endl;

    Tuple<float, char> t3;
    t3.a = 1.1f;
    t3.b = 'x';
    std::cout << t3.toString() << std::endl;
    Tuple<int, std::string> t4;
    t4.a = 10;
    t4.b = 'x';
    std::cout << t4.toString() << std::endl;
    return 0;
}
