#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int count(string a, char b);

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите массив (пример [0,1,2])\n";
    string a;
    getline(cin, a);
    if (a.length() > 10000)
    {
        cout << "Иассив слишком длинный\n";
        return 1;
    }
    string prom = "";
    int t = count(a, ',')+1;
    int* mass = new int[t];
    int k = 0;
    for (int i = 1; i < a.length() - 1; i++)
    {
        if (a[i] != ',')
        {
            prom += a[i];
        }
        else
        {
            mass[k] = stoi(prom);
            if (abs(mass[k]) > pow(10, 9))
            {
                cout << "Элемент массива " << k << " превышает предел\n";
                return 1;
            }
            k++;
            prom = "";
        }
    }
    mass[k] = stoi(prom);
    if (abs(mass[k]) > pow(10, 9))
    {
        cout << "Элемент массива " << k << " превышает предел\n";
        return 1;
    }
    cout << "Введите сумму\n";
    int sum;
    cin >> sum;
    if (abs(sum) > pow(10, 9))
    {
        cout << "Сумма превышает предел\n";
        return 1;
    }
    for (int i = 0; i < t-1; i++)
    {
        for (int j = i + 1; j < t; j++)
        {
            if (mass[i] + mass[j] == sum)
            {
                cout << i << ' ' << j << '\n';
            }
        }
    }
    return 0;
}

int count(string a, char b)
{
    int c = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == b)
        {
            c++;
        }
    }
    return c;
}
