#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	
	double a = 2, b = 2, c = -12;
	double delta = pow(b, 2) - 4 * (a * c);

	double x1 = ((-1*b) - sqrt(delta)) / 2 * a;
	double x2 = ((-1*b) + sqrt(delta)) / 2 * a;


	cout << "delta jest rowna:  " << delta << "  wynik to x1:  " << x1 << "  oraz x2:  " << x2 << endl;

	system("pause");
	return 0;
}
