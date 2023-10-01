#include <iostream>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

int main()
{

    int a = 4, b = 2;
    std::cout << "number a = 4, number b = 2" << std::endl;
    std::cout << "adding numbers a + b = " << add(a, b) << std::endl;
    std::cout << "subtracting numbers b from a = " << subtract(a, b) << std::endl;
    std::cout << "multiply numbers a * b = " << multiply(a, b) << std::endl;
    return 0;
}
// Addition (+): Adds two numbers.
int add(int a, int b)
{
    return a + b;
}
// Subtraction (-): Subtracts one number from another.
int subtract(int a, int b)
{
    return a - b;
}
// Multiply (*); Multiply two numbers.
int multiply(int a, int b)
{
    return a * b;
}
