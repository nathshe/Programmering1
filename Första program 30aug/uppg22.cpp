#include <iostream>
using namespace std;
int main()
{
int tal1, tal2, tal3, tal4;
cout << "Mata in tre tal, a, b och c: ";
cin >> tal1 >> tal2 >> tal3;
cout << "Med ekvationen a + b - c får du ett nytt tal. Ditt nya tal är: ";
tal4 = tal1 + tal2 - tal3;
cout << tal4;
 
return 0; 
}
