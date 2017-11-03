#include<iostream>

using namespace std;

int main()
{
	cout << "dla ilu argumentow ciagu, chcialbys policzyc ciag fibbonacciego " << endl;
	int fib[1000];
	int ilosc_licz;
	cin >> ilosc_licz;

	fib[0] = 1;
	fib[1] = 1;
	for (int i = 2; i < ilosc_licz; i++)
	    {
		fib[i] = fib[i - 1] + fib[i - 2];
		}
		for (int i = 0; i < ilosc_licz; i++)
		{
		cout << "to " << i + 1 << "liczba F  " << fib[i] << endl;
		}
	system("pause");

	return 0;
}