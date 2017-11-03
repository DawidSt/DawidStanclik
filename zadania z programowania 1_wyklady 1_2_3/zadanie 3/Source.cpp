#include <iostream>

using namespace std;

int main()
{
	cout << "podaj liczbe x oraz liczbe y zawieraj¹c¹ sie od 20 do 40" << endl;
	int x, y;
	cin >> x >> y;

	if (((x > 20) && (x < 40)) || ((y >= 23) && (y < 27)))

		cout << "liczba x lub y lub obie te liczby zawieraja sie w podanym zakresie" << endl;

	else

		cout << "liczba x oraz y nie zawieraja sie w podanym zakresie" << endl;

	system("pause");
	return 0;
}