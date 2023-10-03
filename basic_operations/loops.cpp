#include <iostream>
#include <set>
#include <vector>

int main()
{
    int a = 0;
    int b = 0;
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << "." << std::endl;
    }

    while (true)
    {
        if (a == 10)
        {
            break;
        }
        std::cout << a << "." << std::endl;
        a++;
    }

    do
    {
        std::cout << b << "." << std::endl;
        b++;
    } while (b <= 2);

    // range-based for
    int array[] = {1, 2, 3, 4, 5};
    for (int num : array)
    {
        std::cout << num << " ";
    }

    std::set<std::string> array_char = {"one", "two", "three"};
    for (const std::string &string_ : array_char)
    {
        std::cout << string_ << " ";
    }

    std::vector<std::string> array_char_ = {"one", "two", "three"};
    for (const std::string &string_ : array_char_)
    {
        std::cout << string_ << " ";
    }
    return 0;

}
