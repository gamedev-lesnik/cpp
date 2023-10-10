#include <iostream>
#include <cstring>

struct Person
{
    int age;
    wchar_t name[50];
};
void showPerson(const Person &arg)
{
    std::wcout << L"Imie: " << arg.name << L"\nWiek: " << arg.age << std::endl;
}

int main()
{
    int number = 2;
    float pi = 3.14f;
    double number_2 = 3.22252;
    bool atribute = true;
    char x = 'x';

    class Car
    {
    public:
        int speed;
        void drive()
        {
            // drive code
        }
    };

    Person michal;
    michal.age = 15;
    wcscpy(michal.name, L"Michał Leśniewski'\0'");

    // Wywołaj funkcję
    showPerson(michal);

    return 0;
}