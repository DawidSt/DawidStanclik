#include <iostream>

using namespace std;

int main()
{
	cout << "podaj liczbe x oraz y z zakresu -20 do 100 "<< endl;
	int x, y;
	cin >> x >> y;

	if (((x > -20) && (x <= 5)) && ((y >= 15) && (y <= 100)))
		cout << "liczba x oraz y miesci sie w podanym zakresie "<< endl;
	else 
		cout << "liczba x lyb y nie miesci sie w podanym zakresie " << endl;

	system("pause");

	return 0;
}