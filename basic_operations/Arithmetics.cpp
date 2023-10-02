#include <iostream>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float division(float a, float b);
int main()
{

    int a = 4, b = 2;
    float a1 = 6, b1 = 2;
    std::cout << "number a = 4, number b = 2" << std::endl;
    std::cout << "number a1 = 6, number b1 = 2" << std::endl;
    std::cout << "adding numbers a + b = " << add(a, b) << std::endl;
    std::cout << "subtracting number b from a = " << subtract(a, b) << std::endl;
    std::cout << "multiply numbers a * b = " << multiply(a, b) << std::endl;
    std::cout << "dividing number a1 by b1 = " << division(a1, b1) << std::endl;
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
// Division (/); Divides one number from another.
float division(float a, float b)
{
    if (b == 0)
    {
        std::cout << "Error: Divison by zero" << std::endl;
        return 0;
    }

    else
    {
        return a / b;
    }
}
