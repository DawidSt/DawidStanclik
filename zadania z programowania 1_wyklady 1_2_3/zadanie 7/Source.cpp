#include<iostream>

using namespace std;

int main()
{
	cout << "dla ilu argumentow ciagu, chcialbys policzyc sume: " << endl;
	int a=1;
	int suma=1;
	int ilosc_n;
	cin >> ilosc_n;

	
	
	while (a <= ilosc_n)
	{
		a += 2;
		suma += a;


	}
	
		cout << " suma ciagu  " << suma <<   endl;
	
	system("pause");

	return 0;
}