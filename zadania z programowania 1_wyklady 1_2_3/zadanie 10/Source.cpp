#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

double oblicz(double x)
{
	return  1 / 4 * (sqrt(x + 2)) - pow(M_E, 3 * x + M_PI / 2);

}
int main()
{	
	
	for (int i = 1; i <= 10; i++)

		cout << "dla wartosci x =  " << i << "  funkcja jest rowna" << oblicz(i) << endl;
		
	

	
		system("pause");

	return 0;
}