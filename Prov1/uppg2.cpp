#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double tal1, tal2, tal3;
	cout << "Mata in tre flyttal:" << endl;
	cin >> tal1 >> tal2 >> tal3;
	cout << "Tal 1:  " << tal1 << "Tal 2:  " << tal2 << "Tal 3: " << tal3 << endl;
	double medelV = (tal1 + tal2 + tal3)/3;
	cout << "Medelvärdet av talen är:" << endl << fixed << setprecision(1) << medelV;
	
	
	return 0;
	}

