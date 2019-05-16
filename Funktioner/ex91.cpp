// Att skriva och anropa en funktion
#include <iostream>
using namespace std;

double tempOmvandling(double fahrenheit); // deklaration

int main() 
{
	double fahr;
	cout << "Mata in temperaturen i Fahrenheit: " << endl;
	cin >> fahr;
	double cel = tempOmvandling(fahr); // anrop
	cout << fahr << " grader Fahrenheit är " << cel << " grader celsius." << endl;
	return 0;
	}

double tempOmvandling(double fahrenheit) //definition
{
	double celsius = (fahrenheit - 32)/1.8;
	return celsius;
	}


