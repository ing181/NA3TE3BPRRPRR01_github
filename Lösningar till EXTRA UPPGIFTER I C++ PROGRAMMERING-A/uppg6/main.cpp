/*
Skriv ett program som slumpvis genererar två tal mellan 1 och 100
Programmet skall fortsätta till dess de två slumpade talen är lika. Så här:
12 23
22 77
4 89
3 56
12 12
*/
#include <time.h> // För tiden
#include <cstdlib> // För slumpen
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
    srand(time(NULL)); //initierar ett startvärde för slumpen.
    int slump1, slump2;
    
    do {
    slump1 = (rand() % 100)+1; // modulus 100 är alltid 0 - 99, plus 1 ger 1-100
    slump2 = (rand() % 100)+1;
    cout << slump1 << " " << slump2 << endl;
    
    } while (slump1 != slump2);


	return 0;
}
