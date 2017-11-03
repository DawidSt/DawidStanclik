#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	cout << " wprowadz liczbe x oraz liczbe y:  " << endl;
	double x, y;
	cin >> x >> y;

	double f = sin(cos(1 / 3 * x * pow(y, -3))) + log(2 * x) + log(3 * y) +
		pow(x + y * pow(M_E, pow(M_E, (x + 2)) + 10), 1 / 3) + sqrt(pow(x, y) + 1);


	cout << "wynik to:  " << f << endl;

	system("pause");
	return 0;
}
