#include <iostream>

using namespace std;

float square(float x);

int main()
{
    float x;
    setlocale(LC_ALL, "Rus");
    cout << "Введите число\n";
    cin >> x;
    cout << "Квадрат числа: " << square(x) << '\n';
    return 0;
}

float square(float x)
{
    return x * x;
}