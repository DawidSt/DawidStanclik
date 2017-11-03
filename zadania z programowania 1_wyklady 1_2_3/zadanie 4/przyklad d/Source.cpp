#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << " wprowadz liczbe x oraz liczbe y:  " << endl;
	double x, y;
	cin >> x >> y;

	double f = (pow (x, 4) + 1/tan (log (abs (x +y))) / (abs(2*(pow(x, 3))) * (pow (y, 4))) - 1/8 * x * pow(y, pow (M_E, x))) /
		(pow(x + y + pow(M_E,(pow(M_E, 2))), 1 / 3));

	cout << "wynik to:  " << f << endl;

	system("pause");
	return 0;
}
