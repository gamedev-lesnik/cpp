#include <iostream>

int add(int a, int b);
void show();
int main()
{
    show();
    add(2, 3);
}

int add(int a, int b)
{
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    return 0;
}
void show()
{
    std::cout << "prezentacja funkcji: ";
}