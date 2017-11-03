#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h.>
#include <cmath>

using namespace std;

int main()
{
	cout << "wpisz zmienne x oraz y typu rzeczywistego" << endl;
	double x, y;
	cin >> x >> y;

	double f = 1 / 8 * sqrt(x + 2 * y) - pow(M_E, 3) + M_PI;

	cout << "wynik obliczenia to:  " << f << endl;

	system("pause");
	return 0;
}