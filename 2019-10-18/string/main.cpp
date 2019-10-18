#include <iostream>
#include <string> // Nu kan vi använda alla finesser i klassen string
using namespace std;
int main() {
	string s; // Deklaration av en string som heter s
	// char f[10];
	s = "A";
	cout << s << endl;
	s = "Hejsan"; // Anpassar sig efter innehållet. Tar så mycket 
	// plats i minnet som det behövs.
	cout << s << endl;
	s.at(2) = 'b'; // 2:an är ett invärde (parameter) 
	cout << s << endl;	
	// metoden returnerar, d.v.s. ur metoden kommer
	int pos; // Datatpen int "tar emot"
    pos = s.size(); // s.length() Antalet tecken
    cout << pos << endl;
    // Man kan slå ihop två strängar (Konkatenering)
    string s1 = " glade";
    string s2 = s+" du"+s1; // + tecknet används för konkateneringen
    cout << s2 << endl;
    // Vill du leta efter ett tecken eller en del av strängen (delsträng)
    pos = s.find('b'); // pos får värdet positionen av tecknet 'b' i
                       // strängen s
    cout << pos << endl;
    pos = s.find("bs");
    cout << pos << endl;
    
	return 0;
}
