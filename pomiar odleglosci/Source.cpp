#define  _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main()

{
	double bielskoLat = 49.822280;
	double bielskoLon = 19.058619;

	double czechowiceLat = 49.901693;
	double czechowiceLon = 18.991822;

	double oswiecimLat = 50.034952;
	double oswiecimLon = 19.210415;

	double ketyLat = 49.880680;
	double ketyLon = 19.222878;


	double distancebielczechosw_lat = bielskoLat - czechowiceLat - oswiecimLat;
	double distancebielczechosw_lon = bielskoLon - czechowiceLon - oswiecimLon;

	double distancebielketyosw_lat = bielskoLat - ketyLat - oswiecimLat;
	double distancebielketyosw_lon = bielskoLon - ketyLon - oswiecimLon;


	double distance_a = sqrt(pow(distancebielczechosw_lat, 2) + pow(distancebielczechosw_lon, 2));
	double distance_b = sqrt(pow(distancebielketyosw_lat, 2) + pow(distancebielketyosw_lon, 2));


	cout << "dystans Bielsko-Czecowice-Oswiecim jest rowny " << distance_a << endl;
	cout << "dystans Bielsko-Kety-Oswiecim jest rowny " << distance_b << endl;
	system("pause");

	return(0);

}
