// In- och utmatning
#include <iostream>
using namespace std;
int main() {
	
	// inmatning
	// matar in till f�rsta
	// mellanslaget
	// cin (tangentbordet)
	// >> inmatningsoperatorn
	double d;
	cin >> d;
    // F�r att mata in en hel "line"
    // D.v.s mata in tills new-line
    // tecknet dyker upp
    // new-line dyker upp n�r du
    // trycker "Retur", ("Enter")
    // Anv�nds f�r inmatning av str�ngar
    string s;
    getline(cin,s); // Fr�n cin (tangentbordet)
    // till variabeln s
    // Problem:
    // Efter inmatning med cin
    // "stannar new-line tecknet kvar"
    // och anv�nder du
    // getline(cin,s) efter�t
    // s� avbryts det direkt.
    // nyradstecknet (new-line)
    // dyker upp f�rst...
    // L�sning
    // Ta bort nyradstecknet
    // cin.ignore(1000;'\n');
    // se ocks� avsnittet p� github
    // om string
    
    // utmatning (till sk�rmen, cout)
    cout << "Textstr�ng";
    s = "Utmatning fr�n variabel";
    cout >> s;
	return 0;
}

