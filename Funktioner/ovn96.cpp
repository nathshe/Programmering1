#include <iostream>
using namespace std;

	  #include <iostream>
using namespace std;

double pi = 3.14;

/*double basArea(double radie);
double pi = 3.14;
 
 double volymCylinder(double radie, double hojd);
*/

double retrn(double& radie, double& height);

int main() 
{
	cout << "Skriv in cylinderns radie.";
	double rad, hojd;
	cin >> rad >> hojd;
	cout << retrn(rad, hojd);
	
	return 0;
	}
	
double retrn(double& radie, double& height) {
	
	double areaCylinder = (pi * radie * radie);
	
	double volym = (areaCylinder * hojd);
	
	return areaCylinder, volym;
	}
	
	
	
