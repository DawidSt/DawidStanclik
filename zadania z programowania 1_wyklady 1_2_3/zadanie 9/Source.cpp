#include<iostream>
int liczba_a, liczba_b;
using namespace std;

int main()
{
	
	

		for (;;)
		{
			cout << endl << "  podaj liczbe a  " << endl;
			cin >> liczba_a;
			if (liczba_a != -111)
			{
				cout << endl << "  podaj liczbe b  " << endl;
				cin >> liczba_b;
				if (liczba_b != -111)
				{

					int roznica = liczba_a - liczba_b;

					cout << "  roznica liczb a oraz b jest rowna:  " << endl << roznica;
					
				}
				else exit(0);
			}
			else exit(0);
		}
	

	
	
	system("pause");

	return 0;
}