#include <iostream>
#include<string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    string str;
    int x;
    cout << "Введите массив\n";
    getline(cin, str);
    cout << "Введите элемент для поиска\n";
    cin >> x;
    int i = 0;
    int l = 1;
    while (str[i] != '\0')
    {
        
        if (str[i] == ',')
        {
            l++;
        }
        if (str[i] == '{' or str[i] == '}')
        {
            str[i] = ' ';
        }
        i++;
    }
    int* mass = new int[l];
    string prom = "";
    i = 0;
    l = 0;
    bool fl = true;
    while (str[i] != '\0')
    {
        if (str[i] != ',')
        {
            prom += str[i];
            i++;
        }
        else
        {
            mass[l] = stoi(prom);
            prom = "";
            l++;
            i++;
        }
    }
    int f = -1;
    for (int i = 0; i < l; i++)
    {
        if (mass[i] == x)
        {
            f = i;
            break;
        }
    }
    cout << "Индекс искомого элемента " << f << '\n';
    return 0;
}
