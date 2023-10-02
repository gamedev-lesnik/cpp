#include <iostream>

int main()
{
    bool a = true;
    bool b = false;

    std::cout << " a && b = " << (a && b) << std::endl; // false
    std::cout << " a || b = " << (a || b) << std::endl; // true
    std::cout << " !a = " << !a << std::endl; // false
    std::cout << " !b = " << !b << std::endl; // true
    return 0;
}