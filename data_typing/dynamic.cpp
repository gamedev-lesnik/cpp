#include <iostream>

int main()
{
    int *pInt = new int;
    *pInt = 10;
    std::cout << *pInt << std::endl;
    delete pInt;

    int size;
    std::cout << "press number: " << std::endl;
    std::cin >> size;
    int *arr = new int[size];
    for (int i = 1; i <= size; i++)
    {
        arr[i] = i * i;
        std::cout << "i[" << i << "] = " << arr[i] << std::endl;
    }
    delete[] arr;
    return 0;
}