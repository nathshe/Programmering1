#include <iostream>
using namespace std;

int main() {
	
	int antal = 0;
	int antal2 = 0;
	int max2;
	int max;
	cin >> max >> max2;
	
do  {
		
	do {
	cout << '*';
	antal++;
}

while (antal < max );
antal = 0;
cout << endl;
antal2++;
	
} while (antal2 < max2);


	return 0;
	}
