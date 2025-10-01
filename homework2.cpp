#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float a;
	cout << "Введите число: ";
			cin >> a;
	try
	{
		if (a) 
		{
			
			cout << "Квадрат: " << pow(a, 2) << "\n" << "Куб: " << pow(a, 3) << "\n";
		}
		else
		{
			throw "Необхлдимо ввести число\n";
		}
	}
	catch (const char* error_messange)
	{
		cout << error_messange;
	}
	return 0;
}
