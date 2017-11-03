#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	double a = 1, b = 4, c = 4;
	double delta = pow(b, 2) - 4 * (a * c);

	double x = (- b)  / 2 * a;
	


	cout << "delta jest rowna  :  " << delta << "  wynik to x:  " << x <<  endl;

	system("pause");
	return 0;
}