/*
Gör ett program som beräknar värdeökning på valfritt insatt belopp under valfri tid.
Programmet skall fungera så här:
Ange belopp:___100___
Ange Räntesats:__0.10____
Ange Antal år:___5____
Efter 5 år har ditt kapital stigit till 161:-
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	float belopp, rantasats, antalar;
	cout << "Ange belopp ";
	cin >> belopp;
	cout << "Ange räntesats ";
	cin >> rantasats;	
	cout << "Ange antal år ";
	cin >> antalar;
	
	for (int i=0; i<antalar; i++)
	{
		
		belopp = belopp * rantasats; 
		
	}
	
	cout << "Efter " << antalar << " år har ditt kapital stigit till " << belopp << " kronor" << endl;

	return 0;
}
