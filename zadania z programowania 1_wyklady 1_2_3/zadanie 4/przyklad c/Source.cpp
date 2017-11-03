#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << " wprowadz liczbe x oraz liczbe y:  " << endl;
	double x, y;
	cin >> x >> y;

	double f = pow(M_E, (x + y)) + sin((pow(x, 2) + (1 / 4 * y)) / 8);
	cout << "wynik to:  " << f << endl;

	system("pause");
	return 0;
}
