#define _USE_MATH_DEFINES
#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	const double d2r = M_PI / 180;
	const double g = 9.81;

	double stopnie;

	cout << "podaj kat rzutu" << endl;
	cin >> stopnie;

	double v0 = 25;
	double alpha = stopnie * d2r;

	
	
	double z = v0 * v0 * sin(2 * alpha) / g; // obliczanie zasiegu lotu
	cout << z << endl;

	cout << "zasieg lotu wynosi  "<< z << endl;

	double tc = 2 * v0 * sin(alpha) / g; // obliczanie czasu lotu

	cout << "czas lotu wynosi  " << tc << endl;

	double hm = pow(v0 * sin(alpha), 2) / 2 * g; // obliczanie wysokosci maksymalnej lotu

	cout << "wysokosc maksymalna lotu wynosi  " << hm << endl;
	

	system("pause");
return (0);
}