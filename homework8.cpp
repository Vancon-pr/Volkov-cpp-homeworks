#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    std::cout << "Введте строку\n";
    string a;
    getline(cin, a);
    int k = 0;
    while (a[k] != '\0')
    {
        k++;
    }
    char *prom= new char[k];
    prom[0] = a[0];
    int i = 1;
    while(a[i]!='\0')
    {
        for (int j = 0; j < i; j++)
        {
            if (prom[j] == a[i] and prom[j] != ' ')
            {
                std::cout << "false\n";
                return 1;
            }

        }
        
        prom[i] = a[i];
        i += 1;
    }
    std::cout << "true";
    return 0;
}