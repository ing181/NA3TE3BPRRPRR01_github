// Praktiskt uppgift 3
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	int tusen, hundra, tjugo, gammalSumma, restSumma;
	int tretton, etthundratrettio, trettonhundra;
    cout << "Antalet 1000-kronors sedlar: ";
    cin >> tusen;
    cout << "Antalet 100-kronors sedlar: ";
    cin >> hundra;	
    cout << "Antalet 20-kronors sedlar: ";
    cin >> tjugo;	    
    gammalSumma = 1000*tusen+100*hundra+20*tjugo;
    restSumma = gammalSumma;
    
    trettonhundra = restSumma / 1300;
    restSumma = restSumma-trettonhundra*1300;
    etthundratrettio = restSumma / 130;
    restSumma = restSumma-etthundratrettio*130;
    tretton = restSumma / 13;
    restSumma = restSumma-tretton*13;
    cout << "Dina sedlar är värda " << gammalSumma << " kronor" << endl;
    cout << "Du får dessa nya sedlar" << endl;
    cout << trettonhundra << " 1300-kronorssedlar" << endl;
    cout << etthundratrettio << " 130-kronorssedlar" << endl;
    cout << tretton << " 13-kronorssedlar" << endl;
    cout << "och " << restSumma << " kronor" << endl;
    
    
    
	return 0;
}

