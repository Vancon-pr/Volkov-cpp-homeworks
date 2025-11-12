#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введте число\n";
    string num;
    getline(cin, num);
    num += ' ';
    char n;
    char a;
    int t = 0;
    int i = 0;
    while(i<num.length()-1)
    {
        n = num[i];
        a = num[i + 1];
        switch (n)
        {
        case 'I': 
            switch (a)
            {
            case 'V': t += 4;
                i += 2;
                break;
            case 'X': t += 9;
                i += 2;
                break;
            default:
                t += 1;
                i++;
                break;
            }
            break;
        case 'V': t += 5;
            i++;
            break;
        case 'X': 
            switch (a)
            {
            case 'L': t += 40;
                i += 2;
                break;
            case 'C': t += 90;
                i += 2;
                break;
            default:t += 10;
                i++;
                break;
            }
            break;
        case 'L': t += 50;
            i++;
            break;
        case 'C':
            switch (a)
            {
            case 'D': t += 400;
                i += 2;
                break;
            case 'M': t += 900;
                i += 2;
                break;
            default: t += 100;
                i++;
                break;
            }
            break;
        case 'D': t += 500;
            i++;
            break;
        case 'M': t += 1000;
            i++;
            break;
        default:
            cout << "Недопустимое значение\n";
            return 1;
        }
    }
    cout << t << '\n';
    return 0;
}

