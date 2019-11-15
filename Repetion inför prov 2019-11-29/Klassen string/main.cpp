// Klassen string
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
/*
	int, float, ...
	Att det kallas "klass" inneb�r att
	du f�r tillg�ng till ett antal
	metoder. Inbygda i klassen.
	
	Hittils har vi tvingats allokerra (boka plats)
	i datorns minne f�r alla variabler vi vill
	anv�nda.
	
	klassen string l�ter oss allokera minne
	dynamiskt. En string kan v�xa och minska
	i storlek allt efter behov.
*/
    string s = "Lerums Gymnasium";
    cout << s << endl;
    //s = "p";  // OBS! "" Anv�nds alltid med string
    //cout << s << endl;
    char c = s[0];
    cout << c << endl;
    // Lerums Gymnasium
    int antal = 0;
    for (int i=0; i<s.size(); i++)
    {
    	if (s[i] == 'm') {
    		cout << "m hittas och finns p� index " << i << endl;
    		antal++;
    	}
    }
    
    cout << "Det finns " << antal << " m i Lerums Gymnasium" << endl;
    
    string s2;
    // Inmatning fr�n tangentbordet
    // cin >> s2; Matar till f�rsta mellanslag
    // F�ljt av
    // getline(cin,s2); Matar in till nyradstecknet '\n'
    cin >> s2;
    cout << s2 << endl;
    cin.ignore(1000,'\n');
    getline(cin,s2);
    cout << s2 << endl;
	return 0;
}

