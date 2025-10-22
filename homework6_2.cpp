#include <iostream>
#include<random>

using namespace std;
int main()
{

	setlocale(LC_ALL, "Rus");
	int num[3][3];
	int sum = 0;
	cout << "Элементы массива : \n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			num[i][j] = rand() % (9);
			sum += num[i][j];
			cout << num[i][j] << ' ';
		}
		cout << '\n';
	}
	cout << "Сумма элементов: " << sum << '\n';
	return 0;
}
