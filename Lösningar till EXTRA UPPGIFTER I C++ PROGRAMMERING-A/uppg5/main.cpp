/*
G�r ett program som ber�knar v�rde�kning p� valfritt insatt belopp under valfri tid.
Programmet skall fungera s� h�r:
Ange belopp:___100___
Ange R�ntesats:__0.10____
Ange Antal �r:___5____
Efter 5 �r har ditt kapital stigit till 161:-
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	float belopp, rantasats, antalar;
	cout << "Ange belopp ";
	cin >> belopp;
	cout << "Ange r�ntesats ";
	cin >> rantasats;	
	cout << "Ange antal �r ";
	cin >> antalar;
	
	for (int i=0; i<antalar; i++)
	{
		
		belopp = belopp * rantasats; 
		
	}
	
	cout << "Efter " << antalar << " �r har ditt kapital stigit till " << belopp << " kronor" << endl;

	return 0;
}
