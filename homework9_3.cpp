#include <iostream>

using namespace std;
int fact(int x);
int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите число \n";
    int x;
    cin >> x;
    if (x < 0)
    {
        cout << "Недопустимое значение \n";
        return 0;
    }
    cout << "x! = " << fact(x) << '\n';
    return 0;
}

int fact(int x)
{
    if (x > 0)
    {
        return x*fact(x - 1);
    }
    else
    {
        return 1;
    }
}