/*
Skriv programmet fakultet som fungerar enligt f�ljande:
Programmet ger n! d.v.s 1*2*3....*n
Ange v�rde f�r n
programmet avslutas om 0 anges som varde
=>4
4! = 24
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	int n;
	long long produkt = 1;   // OBS! Inte 0, d� blir svaret alltid 0
	                         // long long s� f�r det plats stora tal!
	                         // 20! = 2432902008176640000 funkar, sen blir det problem
	cout << "Jag ber�knar n! om du bara ger mig ett v�rde p� n" << endl;
	
	do { // K�r alltid minst en g�ng...
	cout << "n=";
	cin >> n;
	produkt = 1; // �ters�ller till 1 inf�r n�sta ber�kning
	for (int i=1; i<n; i++) {
	      // produkt tilldelas v�rdet av sig sj�lv (gammla v�rdet) + det nya
	      produkt = produkt + (produkt * i);
	  }
	      
    cout << n << "! = " << produkt << endl;
    
    } while (n != 0); // ...h�r �r vilkoret som avg�r om programmet forts�tter
	
	return 0;
}
