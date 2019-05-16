#include <iostream>
using namespace std;

double basArea(double radie);
double pi = 3.14;
 
 double volymCylinder(double radie, double hojd);
double hojd;

int main() 
{
	cout << "Skriv in cylinderns radie.";
	double rad;
	cin >> rad;
	double area = basArea(rad);
	cout << area << endl;
	cin >> hojd;
	cout << volymCylinder(rad, hojd);
	
	return 0;
	}
	

double basArea(double radie)
{
	double areaCylinder = (pi * radie * radie);
	return areaCylinder;
	}

double volymCylinder(double radie, double hojd)
{
	double volym = (radie * radie * pi * hojd);
	 return volym;
	} 
