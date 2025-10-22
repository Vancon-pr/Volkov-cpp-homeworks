#include <iostream>
#include<random>

using namespace std;

int main()
{
    int numbers[5];
    for (int i = 0; i < 5; i++)
    {
        numbers[i] = rand();
        cout << numbers[i] << ' ';
    }
    cout << '\n';
    return 0;
}