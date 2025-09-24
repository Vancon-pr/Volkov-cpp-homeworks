#include <iostream>
#include <string>

int main()
{
    std::string userName;
    std::cout << "Enter yuor name\n"; 
    getline(std::cin, userName);
    std::cout << "Hellow, " << userName << "\n";
    return 0;
}