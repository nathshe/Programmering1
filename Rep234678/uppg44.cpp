#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double tal;
	cout << "Mata in ett tusental." << endl;
	cin >> tal;
	tal*= 0.001;
	tal += 0.5;
	tal = (int)tal +0;
	tal *= 1000;
	cout << tal;
	
	
	
	
	return 0;
	}
