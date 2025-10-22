#include <iostream>
#include<string>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string str;
    cout << "Введите строку\n";
    getline(cin, str);
    cout << "Первая буква: " << str[0] << '\n';
    return 0;
}
