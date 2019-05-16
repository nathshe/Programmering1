#include <iostream>
using namespace std;
int main()
{
	int resultat[32];
	resultat[7] = 23;
	
	double tid[6] = {10.12, 9.88, 9.92, 10.02, 9.99, 9.97};
	cout << tid[2];
	
	double time[] = {9.98, 10.15, 10.04};
	cout << "Fältet innehåller följande tider: " << endl;
	cout << time[0] << "\t" << time[1] << "\t" << time[2] << endl;
	
	int hf[4];
	
	cout << "Mata in fyra heltal";
	cin >> hf[0];
	cin >> hf[1];
	cin >> hf[2];
	cin >> hf[3];
	cout << hf[0] << "  "<< hf[1] << "  " << hf[2] << "  " << hf[3];
	// Byta ut ett valfritt värde
	int val;
	cout << "Byt värde 1, 2, 3 eller 4 "; 
	cin >> val;
	cout <<	"Det nya värdet:";
	cin >> hf[val-1]; //Heltalet, indexvärdet
	cout << hf[0] << ' ' << hf[1] << ' ' << hf[2] << ' ' << hf[3];
	return 0;
	}
