#include <iostream>
using namespace std;

double volymCylinder(double radie, double hojd);
	double radie, hojd;
double pi = 3.14;
int main() {
	

	cin >> radie >> hojd;
	cout << volymCylinder(radie, hojd);
	return 0;
	}

double volymCylinder(double radie, double hojd)
{
	double volym = (radie * radie * pi * hojd);
	 return volym;
	} 
