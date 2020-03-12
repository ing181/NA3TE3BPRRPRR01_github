// Praktik 1b
#include <iostream>
#include <string>
using namespace std;
// Funktionsdeklartion (prototyp)
void test(string &namn);

int main() {
	
	
    cout << "Vad heter du? ";
    string in;
    getline(cin,in);
    // funktionsanrop
    test(in);
    cout << in << endl;

	return 0;
}
// Funktionsdefinition
void test(string &namn)
{
	int storlek = namn.size();
	int mellanrum = namn.find(' ');
	string fnamn = namn.substr(0,mellanrum);
	string enamn = namn.substr(mellanrum+1);
    namn =  enamn + ", " + fnamn;
	
}

















