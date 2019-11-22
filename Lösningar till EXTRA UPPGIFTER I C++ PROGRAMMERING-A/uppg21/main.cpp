/*
Vi antar att följande skattesystem gäller:
- inkomster under 10000 kr beskattas inte
- för inkomster på 10000 kr och mer är grundskatten alltid 50 %
- för inkomster under 50000 kr får man ett skatteavdrag på 5000 kr
- för inkomster över 100000 kr får man ett skattetillägg på 20 % på den del av inkomsten som
överstiger 100000 kr.
Skriv ett program som frågar efter inkomst samt beräknar och skriver ut skatten på inkomsten.
*/
#include <iostream>
#include <string>
#include <iomanip> // För  << fixed << setprecision(2)
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
	
	storinkomst = inkomst - 100000; // Skatt på höga inomster
	if ( storinkomst > 0)
		skatt = skatt + storinkomst / 5; // 1/5 = 20%
    }
    // Ger utskriften i decimalform med noll decimalers noggranhet "<< fixed << setprecision(0)"
    cout << "Du ska betala " << fixed << setprecision(0) << skatt << " kronor i skatt" << endl;

	return 0;
}
