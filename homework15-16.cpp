#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    float x, y;
    cout << "Введите координаты точки\n";
    cin >> x >> y;
    float fl = (x - 2) * (x - 2) + (y + 1) * (y + 1);
    if (fl > 25)
    {
        cout << "Точка снаружи окружности\n";
    }
    else
    {
        if (fl == 25)
        {
            cout << "Точка на границе окружности\n";
        }
        else
        {
            cout << "Точка внутри окружности\n";
        }
    }
    return 0;
}