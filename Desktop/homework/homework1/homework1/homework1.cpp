#include <iostream>
#include <string>
int main()
{
    setlocale(LC_ALL, "Rus");
    std::string userName;
    getline(std::cin, userName);
    std::cout << "Привет, " << userName << "\n";
    return 0;
}