/*
Skriv programmet AAA som r�knar bokstaven a.
Din mening: Jag heter Olle
1 st A
Min mening: Jag hatar Alla
5 st A
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	string in;
	const char a = 'a';
	cout << "Mata in en mening s� r�knar jag hur m�nga a du anv�nt ";
	getline(cin,in);
	int antala = 0;
	int antaltecken = in.size();
	
	for (int i=0; i<antaltecken; i++)
	{
		if ( in[i] == a )
			antala++;
	}
	
	cout << antala << " st " << a << endl;

	return 0;
}
