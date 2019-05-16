#include <iostream>
#include <string>
using namespace std;
int main() {
	
	string text; 
	cout << "Mata in din  text:" << endl;
	getline(cin, text);
	string tecken;
	cin >> tecken;
	int pos = text.find(tecken,0);
	int start = pos+2;
	int end = start+3;
	string bokstaver = text.substr(start, end);
	cout << "\"" << tecken << bokstaver << "\"" << "plockas ut!";
	return 0;
	}
