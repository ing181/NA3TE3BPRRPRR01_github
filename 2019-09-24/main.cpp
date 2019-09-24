#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	
	/*
	Om variabelnamn
	STOR och liten bokstav �r olika tecken
	int tal;
	int Tal;
	�r tv� olika variabler
	
	Variabler f�r inte b�rja med en siffra
	"int 2tal" F�rbjudet och ger ett felmeddelande.
	Variabler f�r inte inneh�lla mellaslag
	"my age" F�rbjudet och ger ett felmeddelande.
	
	Undvik svenska tecken (��� ���) i variabelnamn
	
	Anv�nd beskrivande variabelnamn
	Anv�nd ett konsekvent s�tt att skriva variabelnamn
	EX:
	"my_age" eller "myAge" �r beskrivande
	Om du v�ljer "myAge" s� namnger du med samma princip "maxHeight" och "lastRun"
	Om du v�ljer "my_age" s� namnger du med samma princip "max_height" och "last_run"
	*/
	
	// heltalsvariabler
	// short, int och long
	// Kan endast inneh�lla heltal. 
	int tal = 7.9;  // OBS! Decimalpunkt, engelsk notation (notation=s�ttet att skriva)
	cout << tal << endl; // 7 skrivs ut, decimaldelen f�rsvinner
	// Datatypen char
	// Anv�nds f�r att lagra ETT tecken
	// Ett visst heltal betecknar ett visst tecken
	// Vilket heltal som h�r till vilket tecken �r n�got man kommit �verens om
	// Se ASCCI-tabellen eller Unicde-tabellen som du hittar p� internet.
	char tecken = 65;
	cout << tecken << endl; // Skriver ut bokstaven A
    char tecken2 = 'A'; // OBS 'enkelfnuttar'
    cout << tecken << endl; // Skriver ut bokstaven A
  
     int x = 2; // Deklaration av och tilldelning av v�rde p� samma rad
     /* Samma sak kan g�ras p� tv� rader
        int x; deklaration
        x = 2; tilldelning
    */
     cout << x << endl; // 2
     x = x + 1; // x tilldelas sitt eget v�rde (2) + 1 = 3
     x++; // Samma sak som raden ovan. F�r din bekv�mlighet
     cout << x << endl; // 4
   
	return 0;
}
