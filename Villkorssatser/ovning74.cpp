#include <iostream>
using namespace std;

int main() {
	
	int age;
	cin >> age;
	
	if (age < 15 || age > 65) {
		cout << "Din biljett kostar 5 kr." << endl;
		} else {
			cout << "Din biljett kostar 10 kr.";
			}
	
	
	return 0;
	}
