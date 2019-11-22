/*
Skriv ett program wordmirror som g�r s� h�r:
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
	Anv�nd en algoritm som 
	b�rjar i b�gge �ndar och
	systematiskt byter plats
	tills de m�ts i mitten
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
	
	// Det �r bra att pr�va algoritmen "manuellt".
	// Man kan d� se om det finns ett m�nster som
	// g�r att utnytja i en loop.
	// S� att det fungerar p� alla str�ngar, med olika l�ngd.
	*/
	
	string s_original = s;
	char tmp;
	for (int i=0,j=(s.size()-1); i<(s.size())/2; i++,j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;	
	}
	
	// Att "j=(s.size()-1)" beror p� att antalet tecken �r 1 mer �n
	// sista index. Indexeringen b�rjar ju p� 0
	
	// "i<(s.size())/2" s� att vi stoppar i mitten, d�r i och j m�ts.
	// Heltalsdivisin returnerar ju heltalet och sl�nger bort
	// resten, s� om "s.size()" �r till exempel 5, forts�tter
	// programmet tills att i �r mindre �n 2,
	// EX:
	// s = "abcdd" vi byter de tv� siste tecknen med varandra, "c" i
	// mitten ska ju vara kvar. G�ller alla str�ngar med ett udda antal tecken.
	
	cout << s_original + '-' + s;
	
	return 0;
}
