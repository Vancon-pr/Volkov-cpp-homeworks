#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");
    std::string userName;
    std::cout << "Введите свое имя\n"; 
    getline(std::cin, userName);    // получаем от пользователя строку с именем
    std::cout << "Hellow, " << userName << "\n";
    return 0;
}