#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	
	/*
	Om variabelnamn
	STOR och liten bokstav är olika tecken
	int tal;
	int Tal;
	är två olika variabler
	
	Variabler får inte börja med en siffra
	"int 2tal" Förbjudet och ger ett felmeddelande.
	Variabler får inte innehålla mellaslag
	"my age" Förbjudet och ger ett felmeddelande.
	
	Undvik svenska tecken (ÅÄÖ åäö) i variabelnamn
	
	Använd beskrivande variabelnamn
	Använd ett konsekvent sätt att skriva variabelnamn
	EX:
	"my_age" eller "myAge" är beskrivande
	Om du väljer "myAge" så namnger du med samma princip "maxHeight" och "lastRun"
	Om du väljer "my_age" så namnger du med samma princip "max_height" och "last_run"
	*/
	
	// heltalsvariabler
	// short, int och long
	// Kan endast innehålla heltal. 
	int tal = 7.9;  // OBS! Decimalpunkt, engelsk notation (notation=sättet att skriva)
	cout << tal << endl; // 7 skrivs ut, decimaldelen försvinner
	// Datatypen char
	// Används för att lagra ETT tecken
	// Ett visst heltal betecknar ett visst tecken
	// Vilket heltal som hör till vilket tecken är något man kommit överens om
	// Se ASCCI-tabellen eller Unicde-tabellen som du hittar på internet.
	char tecken = 65;
	cout << tecken << endl; // Skriver ut bokstaven A
    char tecken2 = 'A'; // OBS 'enkelfnuttar'
    cout << tecken << endl; // Skriver ut bokstaven A
  
     int x = 2; // Deklaration av och tilldelning av värde på samma rad
     /* Samma sak kan göras på två rader
        int x; deklaration
        x = 2; tilldelning
    */
     cout << x << endl; // 2
     x = x + 1; // x tilldelas sitt eget värde (2) + 1 = 3
     x++; // Samma sak som raden ovan. För din bekvämlighet
     cout << x << endl; // 4
   
	return 0;
}
