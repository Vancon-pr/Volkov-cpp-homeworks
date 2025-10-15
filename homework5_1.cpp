#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    setlocale(LC_ALL, "Rus");
    cout << "Введите первое число\n";
    cin >> a;
    cout << "Введите второе число\n";
    cin >> b;
    a = b + a;
    b = a-b;
    a = a - b;
    cout <<"Первое число " << a << '\n';
    cout << "Второе число " << b << '\n';
    return 0;
}
