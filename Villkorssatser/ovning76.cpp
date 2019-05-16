#include <iostream>
using namespace std;

int main() {
	
	int cdr;
	double kostnad;
	cin >> cdr;
	
	if (cdr >= 10 && cdr <50) {
		kostnad = cdr * 9.9 * 0.05;
		cout << "Ditt köp kostar " << kostnad << " kr.";
		} else if (cdr >= 50 && cdr < 100){
			kostnad = cdr * 9.9 * 0.1;
		cout << "Ditt köp kostar " << kostnad << " kr.";
			} else if (cdr >= 100){
				kostnad = cdr * 9.9 * 0.15;
		cout << "Ditt köp kostar " << kostnad << " kr.";
				}  else {
					kostnad = cdr * 9.9;
		cout << "Ditt köp kostar " << kostnad << " kr.";
	}
	
	return 0;
	}
