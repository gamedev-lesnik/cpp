#include <iostream>
#include <string>
#include <set>


int main()
{
    int Offset = 10;
    auto addOffset =[Offset](int value)->int
    {
        return Offset + value;
    };
    std::cout << addOffset(20) << std::endl;

    std::string text = "Hello World";
    auto addText = [text](std::string value)-> std::string
    {
        return text + value;
    };
    std::cout << addText(" in my World ") << std::endl;
    
    auto no_value = []()
    {
        std::cout << "lambda no value " << std::endl;
    };
    no_value();

    auto True_or_False = [](int number) -> bool
    {
        return number % 2 == 0;
    };
    std::cout << True_or_False(3);

}