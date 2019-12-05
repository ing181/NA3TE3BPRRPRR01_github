#include <iostream>
using namespace std;
// Funktionsdeklaration
// in- och utvärden, namn
// datatyp_ut namn(datatyp_in, datatyp_in, ...);
void namn(); // Varken in- eller utvärde
void namn2(string);  // Endast invärde
int main() {
	setlocale(LC_ALL,"swedish");
	
	for (int i=0; i<10; i++)
         namn();
         
    cout << endl;    
    string mitt_namn;
    cout << "Vad heter du? ";
    getline(cin,mitt_namn);
    namn2(mitt_namn);

	return 0;
}
void namn()
{
	cout << "Hej, jag heter Pelle Pall" << endl;
}
void namn2(string s)
{
	cout << "Välkommen " << s << endl;
}
