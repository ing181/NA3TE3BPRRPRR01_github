#include <iostream>
using namespace std;
// Deklareras innan main
// kan då användas i main
struct Dog {
	string namn;
	int alder;
	string ras;
};
int main() {
	Dog vovve;

	vovve.namn="Fido";
	vovve.alder=4;
	vovve.ras="Tax";
	
	cout << vovve.namn << endl;
	cout << vovve.alder << endl;
	cout << vovve.ras << endl;
	
	Dog v[3];
	
	for (int i=0; i<3; i++)
	{
		cout << "Vad heter hunden? ";
		cin >> v[i].namn;
		cout << "Hur gammal är hunden? ";
		cin >> v[i].alder;		
		cout << "Vilken ras? ";
		cin >> v[i].ras;		
	}
	
	for (int i=0; i<3; i++)
		cout << v[i].namn << ' ' << v[i].alder << ' ' << v[i].ras << endl;
		
	
	
	 
	return 0;
}
