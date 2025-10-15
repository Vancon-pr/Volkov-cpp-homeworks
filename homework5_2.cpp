#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите число ";
    int a;
    cin >> a;
    switch (a)
    {
        case 0:
            cout << "Число равно 0\n";
            break;
        default:
            if (a > 0)
            {
                cout << "Число положительно";
            }
            else
            {
                cout << "Число отрицательно\n";
            }
            break;
    }
    return 0;
}
