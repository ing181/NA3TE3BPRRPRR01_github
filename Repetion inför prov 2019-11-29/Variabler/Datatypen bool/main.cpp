// Variabler
#include <iostream>
using namespace std;
int main() {
/*
Variabler m�ste deklareras (m�ste finnas)
innan de kan anv�ndas
Variabler deklareras alltid s� h�r
typ namn;
typ avser vad f�r slags data som variabeln
kan inneh�lla.
EX:
int k; kan inneh�lla heltal
Namngining: Ej b�rja med en siffra,
ej inneh�lla mellanslag
Undvik svenska tecken (���...)

F�rutom typ av data
int (heltal), float f�r flyttal
kan variabler inneh�lla olika MYCKET data
doble och float kan b�da inneh�lla flyttat
men double kan inneh�lla ett st�rre tal

Om datatypen bool
*/
// Uttryck som kan utv�rderas att
// vara sanna eller falska
// kan tilldelas (lagras i)
// en variabel av datatypen bool
bool b = true; // Snt eller 1
cout << b << endl;
int i = 5;
b = (i<3);
cout << b << endl;
b = (i == 3);
cout << b << endl;
b = (i = 3);
cout << b << endl;
cout << i << endl;










	return 0;
}

