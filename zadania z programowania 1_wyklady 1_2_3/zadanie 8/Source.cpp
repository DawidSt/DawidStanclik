#include<iostream>

using namespace std;

int main()
{
	cout << "wprowadz 5 liczb parzystych: " << endl;
	int a, b, c, d, e;
	
	
	cin >> a;

	if (a % 2 != 0)
		{
		cout << "  liczba a nie jest parzysta, podaj liczbe parzysta  ";
		cin >> a;
		}
	cin >> b;
	if (b % 2 != 0)
		{
		cout << "  liczba b nie jest parzysta, podaj liczbe parzysta  ";
		cin >> b;
		}
	cin >> c;
	if (c % 2 != 0)
		{
		cout << "  liczba c nie jest parzysta, podaj liczbe parzysta  ";
		cin >> c;
		}
	cin >> d;
	if (d % 2 != 0)
		{
			cout << "  liczba d nie jest parzysta, podaj liczbe parzysta  ";
			cin >> d;
		}
	cin >> e;
	if (e % 2 != 0)
		{
			cout << "  liczba e nie jest parzysta, podaj liczbe parzysta  ";
			cin >> e;
		}
	int suma = a + b + c + d + e;
	

	cout << "suma podanych liczb parzystych jest rowna" << suma << endl;
	system("pause");

	return 0;
}