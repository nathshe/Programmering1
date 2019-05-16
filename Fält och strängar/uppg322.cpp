#include <iostream>
using namespace std;
int main() 
{
	
	int falt[4];
	cin >> falt[0] >> falt[1] >> falt[2] >> falt[3];
	int tal0 = falt[0];
	int tal1 = falt[1];
	int tal2 = falt[2];
	int tal3 = falt[3];
	falt[0] = tal3;
	falt[1] = tal2;
	falt[2] = tal1;
	falt[3] = tal0;
	cout << falt[0] << falt[1] << falt[2] << falt[3];
	}
