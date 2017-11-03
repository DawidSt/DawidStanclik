#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "wprowadz liczbe z zakresu 10 do 40" << endl;
	int liczba;
	cin >> liczba;

	if ((liczba >= 10) && (liczba < 20))
		cout << "liczba miesci sie w podanym przedziale";

	else
		cout << "liczba nie miesci sie w podanym przedziale";

	system("pause");
	return 0;
}