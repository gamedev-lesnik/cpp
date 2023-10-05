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
    
}