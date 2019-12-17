
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	
	// 1. Vad skrivs ut?
	int x = 10;
	while (x > 0)
	{
		cout << x << ' '; // 10 7 4 1
		x = x - 3;
	}

	// 2
	char c;
	cin >> c;
	// Finns inget tecken som samtidigt 
	// är lika med OCH ej lika med
	if ( (c!='c') && (c=='c') )
	{
		cout << "Du valde rätt" << endl;
	}
	
	// 3
	// Datatyp för bokstäver (flera) och andra tecken
	// char för ett tecken och string för flera tecken
	// Svar: char eller string
	
	
	// 4 Fel i koden
	//float val; switch fungerar inte med flyttal
	int val;
	cin >> val;
	switch (val)
	{
		case 1: // obs kolon
		cout << "Du valde ett" << endl;
		break;
		// case 1.5 // Funkar inte med decimaltal
		case 2: // kolon
		cout << "Du valde ungefär ett och ett halvt" << endl;	
		break;
	//};   // Inget semikolon, fungerar med vår kompilator. Undvik!
   }

    
	// 5 
	// 13 tolkas som ett heltal, 13.0 tolkas som ett flyttal
	cout << (13 % 3) << endl; // Resten vid heltalsdivision. Det som blir över. Alltid mellan 0 och 2
	                          // om x % 3 Här: 1
	cout << (13 / 3) << endl;  // 4  13 tolkas som ett heltal
	// jämför
	cout << (13.0 / 3) << endl;  // 4.3333... 13.0 tolkas som ett flyttal


	// 6
	// Börja innifrån och gå utåt
	// s = sant
	// f = false
	bool b = true;
	int a = 23;
 	int c = (-99);

	if ( ( (a > 99) || (c <=0) ) && b )
	{
		if ( (a > 99) || ( (c <=0) && b ) )
			cout << "Nummer 1A";
		else
			cout << "Nummer 1B";
     }
	else
		cout << "Nummer 2";	
		
	if ( ( (  s ) || (  s ) ) && s )
	{
		if ( ( f ) || ( ( s ) && s ) )
			cout << "Nummer 1A"; // Skrivs ut!
		else
			cout << "Nummer 1B";
     }
	else
		cout << "Nummer 2";	
		
	if ( ( s ) && s )
	{
		if (  f  ||   s  )
			cout << "Nummer 1A";
		else
			cout << "Nummer 1B";
     }
	else
		cout << "Nummer 2";	
	*/
	
	
	// 7
	// "Skriv kod som tilldelar variabeln tal värdet som finns i falt, index 3."
	// Borde stått "Skriv kod som tilldelar variabeln tal värdet som finns i falt, 3:e index.
	float tal;
    float falt[3];
    
    tal = falt[2];
   
    
   
    // 8
    // Tilldela falt värden genom en while-sats
    int falt[12];
    
    int i = 0;
    while (i < 12)
    {
    	falt[i] = 99;
    	i++;
    }
    
    
    // 9
    // Skriv ut alla värden som finns falt med hjälp av en for-sats.
    falt[12];
    for (int i=0; i<12; i++)
    {
    	cout << falt[i];
    }
    

	return 0;
}
