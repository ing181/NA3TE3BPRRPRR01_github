// In- och utmatning
#include <iostream>
using namespace std;
int main() {
	
	// inmatning
	// matar in till första
	// mellanslaget
	// cin (tangentbordet)
	// >> inmatningsoperatorn
	double d;
	cin >> d;
    // För att mata in en hel "line"
    // D.v.s mata in tills new-line
    // tecknet dyker upp
    // new-line dyker upp när du
    // trycker "Retur", ("Enter")
    // Används för inmatning av strängar
    string s;
    getline(cin,s); // Från cin (tangentbordet)
    // till variabeln s
    // Problem:
    // Efter inmatning med cin
    // "stannar new-line tecknet kvar"
    // och använder du
    // getline(cin,s) efteråt
    // så avbryts det direkt.
    // nyradstecknet (new-line)
    // dyker upp först...
    // Lösning
    // Ta bort nyradstecknet
    // cin.ignore(1000;'\n');
    // se också avsnittet på github
    // om string
    
    // utmatning (till skärmen, cout)
    cout << "Textsträng";
    s = "Utmatning från variabel";
    cout >> s;
	return 0;
}

