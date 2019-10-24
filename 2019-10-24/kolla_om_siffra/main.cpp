#include <iostream>
#include <stdlib.h>  // atoi() och isdigit()
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	
	char tecken;
	cout << "Mata in ett tecken ";
    cin >> tecken;
    int tal;
    if (isdigit(tecken)) // Kollar om det inmatade tecknet är en siffra
         {
         	tal = atoi(&tecken);  // Omvandlar ett tecken till ett heltal, OBS! adressen till char-variabeln ska användas
         	                      // Se förklaring nedan.
         	cout << "En siffra! " << tal << endl;
         }
    else
            cout << tecken << " är ingen siffra" << endl;
            
            /*
            int tal=7;
            cout << tal << endl;
            cout << &tal << endl;  // & gör att vi kommer åt adressen, var i RAM-minnet, variabeln tal är lagrad.
            int *t; // Vi deklarerar en variabel som kan innehålla adressen till en int
            t = &tal;  // t lagrar nu adressen till variabeln tal
            cout << *t << endl;  // Vi skriver ut innehållet på adressen till variabeln tal, 7
            */
            
	return 0;
	
	
}
