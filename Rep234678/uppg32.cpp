#include <iostream>
using namespace std;

int main() {
	int falt[] = {1,2,3,4};
	int temp;
	temp = falt[3];
	falt[3] = falt[0];
	falt[0] = temp;
	temp = falt[1];
	falt [1] = falt[2];
	falt[2] = temp;
	cout << falt[0] << falt[1] << falt[2] << falt[3];
	return 0;
	
	
	}
