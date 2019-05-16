#include <iostream>
using namespace std;
int main() {
	
	char bokstav;
	cout << "Mata in en gemen (liten bokstav):" << endl;
	cin >> bokstav;
	char storBokstav = bokstav - 32;
	cout << "Motsvarande VERSAL är:" << storBokstav;
	
	return 0;
	}
