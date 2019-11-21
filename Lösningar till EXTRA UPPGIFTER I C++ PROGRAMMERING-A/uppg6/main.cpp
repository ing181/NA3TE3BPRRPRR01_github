/*
Skriv ett program som slumpvis genererar tv� tal mellan 1 och 100
Programmet skall forts�tta till dess de tv� slumpade talen �r lika. S� h�r:
12 23
22 77
4 89
3 56
12 12
*/
#include <time.h> // F�r tiden
#include <cstdlib> // F�r slumpen
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
    srand(time(NULL)); //initierar ett startv�rde f�r slumpen.
    int slump1, slump2;
    
    do {
    slump1 = (rand() % 100)+1; // modulus 100 �r alltid 0 - 99, plus 1 ger 1-100
    slump2 = (rand() % 100)+1;
    cout << slump1 << " " << slump2 << endl;
    
    } while (slump1 != slump2);


	return 0;
}
