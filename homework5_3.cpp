#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите число N: ";
    int N;
    cin >> N;
    cout << "Числа от 1 до " << N << "\n";
    for (int i = 1; i < N + 1; i++)
    {
        cout << i << " ";
    }
    cout << '\n';
    return 0;
}
