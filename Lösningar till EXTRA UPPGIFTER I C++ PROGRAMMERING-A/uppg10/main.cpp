/*
Skriv programmet AAA som räknar bokstaven a.
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
	cout << "Mata in en mening så räknar jag hur många a du använt ";
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
