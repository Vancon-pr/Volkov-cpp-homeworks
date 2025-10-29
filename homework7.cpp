#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a;
    cout << "Введите число: ";
    cin >> a;
    if (!(a < pow(10,6) and a > -pow(10,6)))
    {
        cout << "Число не соответствует требованиям\n";
        return 0;
    }
    int b=0;
    int i = 10;
    int j = 0;
    while (a % i < a)
    {
        j += 1;
        i *= 10;
    }
    int p = a;
    for (int i = 1; i <= j+1; i++)
    {
        //cout << p<<' '<<b << '\n';
        b += p % 10*pow(10,j+1-i);
        p = p / 10;
        
    }
    if (a == b)
    {
        cout << "true\n";
    }
    else
    {
        cout << "false\n";
    }
    return 0;
}