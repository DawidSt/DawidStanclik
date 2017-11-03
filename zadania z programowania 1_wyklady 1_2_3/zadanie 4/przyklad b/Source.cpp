#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << "wprowadz zmienna x oraz zmienna y" << endl;
	double x, y;
	cin >> x >> y;
	
	double f = 1/tan (pow(2, x + 1)) + ((2 * pow(x, y) + M_E - 10) / (log(abs(x + 1)))) - pow ((x*y) / pow(M_PI, 2), 1 / 5);

	cout << "wynik funkcji to:  " << f << endl;

	system("pause");
	return 0;
}