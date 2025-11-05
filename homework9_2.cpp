#include <iostream>

using namespace std;

void increase(int* x);

int main()
{
    setlocale(LC_ALL, "Rus");
    int x;
    cout << "Введите число \n";
    cin >> x;
    increase(&x);
    cout << "Новое значение: " << x << '\n';
    return 0;
}

void increase(int *x)
{
    *x += 10;
}