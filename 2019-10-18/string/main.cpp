#include <iostream>
#include <string> // Nu kan vi anv�nda alla finesser i klassen string
using namespace std;
int main() {
	string s; // Deklaration av en string som heter s
	// char f[10];
	s = "A";
	cout << s << endl;
	s = "Hejsan"; // Anpassar sig efter inneh�llet. Tar s� mycket 
	// plats i minnet som det beh�vs.
	cout << s << endl;
	s.at(2) = 'b'; // 2:an �r ett inv�rde (parameter) 
	cout << s << endl;	
	// metoden returnerar, d.v.s. ur metoden kommer
	int pos; // Datatpen int "tar emot"
    pos = s.size(); // s.length() Antalet tecken
    cout << pos << endl;
    // Man kan sl� ihop tv� str�ngar (Konkatenering)
    string s1 = " glade";
    string s2 = s+" du"+s1; // + tecknet anv�nds f�r konkateneringen
    cout << s2 << endl;
    // Vill du leta efter ett tecken eller en del av str�ngen (delstr�ng)
    pos = s.find('b'); // pos f�r v�rdet positionen av tecknet 'b' i
                       // str�ngen s
    cout << pos << endl;
    pos = s.find("bs");
    cout << pos << endl;
    
	return 0;
}
