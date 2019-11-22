/*
Vi antar att f�ljande skattesystem g�ller:
- inkomster under 10000 kr beskattas inte
- f�r inkomster p� 10000 kr och mer �r grundskatten alltid 50 %
- f�r inkomster under 50000 kr f�r man ett skatteavdrag p� 5000 kr
- f�r inkomster �ver 100000 kr f�r man ett skattetill�gg p� 20 % p� den del av inkomsten som
�verstiger 100000 kr.
Skriv ett program som fr�gar efter inkomst samt ber�knar och skriver ut skatten p� inkomsten.
*/
#include <iostream>
#include <string>
#include <iomanip> // F�r  << fixed << setprecision(2)
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	double inkomst, storinkomst;
	double grundskatt, skatt;
	cout << "Din inkoms :> ";
	cin >> inkomst;
	
	if (inkomst < 10000) {
	    skatt=0;
	}
	else {
	// grundskatten
	if (inkomst >= 10000) {
	grundskatt = inkomst / 2;
	skatt = grundskatt;
	}
	if (inkomst < 50000) // Avdrag om <50000
	   skatt = skatt - 5000;
	
	storinkomst = inkomst - 100000; // Skatt p� h�ga inomster
	if ( storinkomst > 0)
		skatt = skatt + storinkomst / 5; // 1/5 = 20%
    }
    // Ger utskriften i decimalform med noll decimalers noggranhet "<< fixed << setprecision(0)"
    cout << "Du ska betala " << fixed << setprecision(0) << skatt << " kronor i skatt" << endl;

	return 0;
}
