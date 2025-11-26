#include <iostream>
#include<string>

using namespace std;

int len_(string s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    setlocale(LC_ALL, "Rus");
    string str;
    char pr1;
    char pr2;
    int c1; int c2;
    getline(cin, str);
    int len = len_(str);
    if (len > 10000)
    {
        cout << "Длина строки слишком большая\n";
        return 0;
    }
    int* mass = new int[len];
    
    for (int i = 0; i < len; i++)
    {
        switch (str[i])
        {
        case '(':
            mass[i] = 1;
            break;
        case '{':
            mass[i] = 2;
            break;
        case '[':
            mass[i] = 3;
            break;
        case ')':
            mass[i] = -1;
            break;
        case '}':
            mass[i] = -2;
            break;
        case ']':
            mass[i] = -3;
            break;
        default:
            cout << "Недопустимый символ\n";
            return 0;
        }
    }
    int fl = 1;
    int sum;
    while (fl != 0)
    {
        sum = 0;
        for (int i = 0; i < len; i++)
        {
            fl += abs(mass[i]);
            if (mass[i]>0)
            {
                sum = mass[i];
                mass[i] = 0;
            }
            if (mass[i] < 0)
            {
                
                sum += mass[i];
                mass[i] = 0;

                if (sum != 0)
                {
                    cout << "false" << '\n';
                    return 0;
                }
                break;
            }
            
        }
        fl = 0;
    }
    cout << "true" << '\n';
    return 0;
}

