#include <iostream>
using namespace std;

int main()
{
double tank;

cin >> tank;

if (tank > 10)
{
	cout<< "Kör vidare!" << endl;	
}
else {
	double kostnad = tank*9.50; 
	cout << "Du borde tanka snart, att tanka fullt kommer kosta dig " << kostnad << " kr.";
	
	}
return 0;


}
