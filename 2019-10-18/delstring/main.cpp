#include <iostream>
#include <string>
using namespace std;
int main() {
	
	string s = "Lerums Gymnasium";
	string dels = s.substr(7,9); // Delstr�ng, plockar ut fr�n
	                             // str�ngen s. B�rjar i position
	                             // 7 och plockar ut 9 tecken
    cout << dels << endl;
	return 0;
}
