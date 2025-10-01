#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float a;
	
	try
	{
		cout << "Введите  сумму в рублях: ";
		cin >> a;
		if (a)
		{

			cout << "В долларах: " << a/85 << "\n" << "В евро: " << a/100 << "\n";
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
