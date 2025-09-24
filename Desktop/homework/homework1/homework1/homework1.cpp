#include <iostream>
#include <string>
int main()
{
    std::string userName;
    getline(std::cin, userName);
    std::cout << "Hellow, " << userName << "\n";
    return 0;
}