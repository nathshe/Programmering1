#include <iostream>
using namespace std;
int main() {
	int timmar, minuter, sekunder, tid;
	cout << "Mata in timmar, minuter och sekunder. Använd heltal." << endl;
	cin >> timmar >> minuter >> sekunder;
	tid = timmar*3600 + minuter*60 + sekunder;
	timmar = tid/3600;
	minuter = (tid-(timmar*3600))/60;
	sekunder = tid%60;
	
	
	cout << "Den inmatade tiden motsvaras av " << timmar << " timmar, " << minuter << " minuter, " << sekunder << " sekunder.";
	return 0;
	}
