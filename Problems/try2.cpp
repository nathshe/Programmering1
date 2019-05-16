#include <iostream>
#include <string>
using namespace std;

int main() {


	int year;
	cout << "Enter year" << endl;
    cin >> year;
    int yearDif = year - 1900;
    int primYearDays = yearDif * 365;
    int extraDays = int(yearDif / 4);
    int yearDays = primYearDays + extraDays;
	
	string months[] = {"januari", "februari", "mars", "april", "maj", "juni", "juli", "augusti", "september", "oktober", "november", "december"};
	string m; 
	cout << "Enter month:" << endl;
	cin >> m;
	
	int e;
	int monthDays = 0;
	int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	int size = *(&months + 1) - months;
	for (int i=0; i < size; i++) 
	{
		if (m == months[i]) 
		{
			e = i;
			}
	}
	
	for (int i = 0; i < e; i++) 
	{
		monthDays += days[i];
		}
	


	
	int date;
	cout << "Enter date" << endl;
	cin >> date;
	
	int totalDays = yearDays + monthDays + date;
	
	
	int dayNumber = totalDays%7;
	
	string dayNames[] = {"söndag", "måndag", "tisdag", "onsdag", "torsdag", "fredag", "lördag"};
	
	cout << dayNames[dayNumber];
	
	return 0;
	}


