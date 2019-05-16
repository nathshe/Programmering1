#include <iostream>
using namespace std;

int main() {
	
	int minsta, langsta, steglangd;
	
	cin >> minsta >> langsta >> steglangd;
	
	for ( int n=langsta; n > minsta ; n = n - steglangd) {
		
		cout << n << ' ';
		}
	
	return 0;
	}
