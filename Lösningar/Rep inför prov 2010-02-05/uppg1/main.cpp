/*
L�t anv�ndaren mata in ett namn p� en person som lagras i en
string variabel. 
L�t anv�ndaren mata in en bokstav (1)
L�t anv�ndaren mata in en bokstav (2)

Skapa en funktion med den h�r funktionsdeklarationen
string byt(string in, char old_char, char new_char);

Funktionen ska byta alla f�rekomster av bokstav (1) mot bokstav (2) 
och returnera den 
�ndrade str�ngen.

*/

#include <iostream>
#include <string>
using namespace std;
string byt(string in, char old_char, char new_char);
int main() {
	
	setlocale(LC_ALL,"swedish");
	string namn;
	char gammal, ny;
	cout << "Mata in ett namn ";
	getline(cin,namn);
	cout << "Vilken bokstav vill du byta ut? ";
	cin >> gammal;
	cout << "Vilken bokstav vill du byta till? ";
	cin >> ny;	
	string ny_namn = byt(namn,gammal,ny);
	cout << "Det nya namnet �r " << ny_namn << endl;
    return 0;
}
string byt(string in, char old_char, char new_char)
{
	int langd = in.size(); 
	for (int i=0; i<langd; i++)
	{
		if (in[i] == old_char)
			in[i] = new_char;
	}
	return in;
}
