#include <iostream>
#include <cstring> // Dla funkcji strcpy

struct Person
{
    int age;
    char name[50];
};
void showPerson(const Person &arg)
{
    std::cout << "Imie: " << arg.name << "\nWiek: " << arg.age << std::endl;
}
int main()
{
    Person michal;
    michal.age = 15;
    strcpy(michal.name, "Michał Leśniewski");

    // Wywołaj funkcję
    showPerson(michal);

    return 0;
}
