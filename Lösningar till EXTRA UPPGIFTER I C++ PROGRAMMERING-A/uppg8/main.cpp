/*
Skriv ett program wordmirror som gör så här:
Skriv ett ord: PORTUGAL
Speglat: PORTUGAL-LAGUTROP
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	string s;
	cout << "Skriv ett ord ";
	cin >> s;
	
	/*
	Använd en algoritm som 
	börjar i bägge ändar och
	systematiskt byter plats
	tills de möts i mitten
	EX:
	string s = "PORTUGAL";
	char tmp;
	tmp = s[0];
	s[0] = s[7];
	s[7] = tmp;
	
	tmp = s[1];
	s[1] = s[6];
	s[6] = tmp;
	
	tmp = s[2];
	s[2] = s[5];
	s[5] = tmp;
	
	tmp = s[3];
	s[3] = s[4];
	s[4] = tmp;	
	
	// Nu har alla byts ut
	
	// Det är bra att pröva algoritmen "manuellt".
	// Man kan då se om det finns ett mönster som
	// går att utnytja i en loop.
	// Så att det fungerar på alla strängar, med olika längd.
	*/
	
	string s_original = s;
	char tmp;
	for (int i=0,j=(s.size()-1); i<(s.size())/2; i++,j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;	
	}
	
	// Att "j=(s.size()-1)" beror på att antalet tecken är 1 mer än
	// sista index. Indexeringen börjar ju på 0
	
	// "i<(s.size())/2" så att vi stoppar i mitten, där i och j möts.
	// Heltalsdivisin returnerar ju heltalet och slänger bort
	// resten, så om "s.size()" är till exempel 5, fortsätter
	// programmet tills att i är mindre än 2,
	// EX:
	// s = "abcdd" vi byter de två siste tecknen med varandra, "c" i
	// mitten ska ju vara kvar. Gäller alla strängar med ett udda antal tecken.
	
	cout << s_original + '-' + s;
	
	return 0;
}
