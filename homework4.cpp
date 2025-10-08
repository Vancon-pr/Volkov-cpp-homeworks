#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Введите символ: ";
	char a;
	cin >> a;
	cout <<"Код символа: " << (int)a << '\n' << "Следующий символ: "<<(char)((int)a+1) << '\n' << "Код следующего символа: " << (int)a + 1 << '\n';
}
