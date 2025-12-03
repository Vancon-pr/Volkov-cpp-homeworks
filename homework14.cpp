#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Ввведите слова\n";
    string str;
    int i = 0;
    int l = 0;
    getline(cin, str);
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            l++;
        }
        i++;
    }
    string* mass = new string[l + 1];
    bool* m = new bool[l + 1];
    i = 0; int j = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            mass[j] += str[i];
        }
        else
        {
            j++;
        }
        i++;
    }
    bool flag = true;
    for (int i = 0; i < l + 1; i++)
    {
        if(mass[i] == "flick")
        {
            flag = false;
        }
        m[i] = flag;
        cout << flag << ' ';
    }
    cout << '\n';
    return 0;
}
