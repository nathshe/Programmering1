// Referensparametrar
#include <iostream>
using namespace std;

void byt(int& a , int& b);

int main() 
{
	int tal1 = 7;
	
	int tal2 = 9;
	
	cout << "Innan byte: "  << tal1 << " " << tal2 << endl;
	byt(tal1, tal2);
	
	cout << "Efter byte: " << tal1 << " " << tal2 << endl;
	return 0;
}
	
	void byt(int& a , int& b)
	{
		int temp = a;
		
		a = b; 
		
		b = temp;
		
		}


