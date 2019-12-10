/* 26
Skriv ett program som läser in ett tecken och skriver ut tecknets Unicode.
Du matar in tecknet i en funktion som returnerar tecknets Unicode.
*/
#include <iostream>
using namespace std;
int tillInt(char);
int main() {
	setlocale(LC_ALL,"swedish");
	char t;
	cout << "Mata in ett tecken ";
	cin >> t;
	int franFunktionen = tillInt(t);
	cout << "Unicode för " << t << " är " << franFunktionen << endl;
	return 0;
} 
int tillInt(char tecken)
{
	int heltal = tecken;
	return heltal;
}
