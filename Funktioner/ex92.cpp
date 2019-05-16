#include <iostream>
using namespace std;

double minst(double tal1, double tal2);

int main() 
{
	double tal1, tal2;
	cout << "Ge två tal: ";
	cin >> tal1 >> tal2;
	cout << minst(tal1, tal2) << " är minst" << endl;	
	return 0;
	}

double minst(double tal1, double tal2)
{
	int min = tal1;
	if (tal2 < tal1)
	{
     min = tal2;
 }
 return min;
}
