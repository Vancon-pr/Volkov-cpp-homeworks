#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float a;
	cout << "Введите число: ";
	cin >> a;
	cout << "Квадрат: " << pow(a, 2) << "\n" << "Куб: " << pow(a,3) << "\n";
	return 0;
}
