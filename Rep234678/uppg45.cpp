#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int taljare;
	int namnare;
	
	cout << "Mata in ett bråktal med mellanslag mellan täljare och nämnare." << endl;
	cin >> taljare >> namnare;
	
	int heltal = taljare / namnare;
	int rest = taljare % namnare;
	
	
	cout << "Talet " << taljare << "/" << namnare << " blir " << heltal << ' ' << rest << "/" << namnare << '.';
	return 0;
	}
