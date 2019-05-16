#include <iostream>
using namespace std;


	void ritaTriangel(int hojd, char tecken);
	
	int main() {
		
	ritaTriangel(20
	, 35);
	return 0;
	
	}

void ritaTriangel(int hojd, char tecken)
{
	
	for (int i = 1; i <= hojd; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << tecken;
			}
			cout << endl;
		}
	
	}
