// Klassen string
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
/*
	int, float, ...
	Att det kallas "klass" innebär att
	du får tillgång till ett antal
	metoder. Inbygda i klassen.
	
	Hittils har vi tvingats allokerra (boka plats)
	i datorns minne för alla variabler vi vill
	använda.
	
	klassen string låter oss allokera minne
	dynamiskt. En string kan växa och minska
	i storlek allt efter behov.
*/
    string s = "Lerums Gymnasium";
    cout << s << endl;
    //s = "p";  // OBS! "" Används alltid med string
    //cout << s << endl;
    char c = s[0];
    cout << c << endl;
    // Lerums Gymnasium
    int antal = 0;
    for (int i=0; i<s.size(); i++)
    {
    	if (s[i] == 'm') {
    		cout << "m hittas och finns på index " << i << endl;
    		antal++;
    	}
    }
    
    cout << "Det finns " << antal << " m i Lerums Gymnasium" << endl;
    
    string s2;
    // Inmatning från tangentbordet
    // cin >> s2; Matar till första mellanslag
    // Följt av
    // getline(cin,s2); Matar in till nyradstecknet '\n'
    cin >> s2;
    cout << s2 << endl;
    cin.ignore(1000,'\n');
    getline(cin,s2);
    cout << s2 << endl;
	return 0;
}

