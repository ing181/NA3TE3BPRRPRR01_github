/*
Skriv programmet fakultet som fungerar enligt följande:
Programmet ger n! d.v.s 1*2*3....*n
Ange värde för n
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
	long long produkt = 1;   // OBS! Inte 0, då blir svaret alltid 0
	                         // long long så får det plats stora tal!
	                         // 20! = 2432902008176640000 funkar, sen blir det problem
	cout << "Jag beräknar n! om du bara ger mig ett värde på n" << endl;
	
	do { // Kör alltid minst en gång...
	cout << "n=";
	cin >> n;
	produkt = 1; // Återsåller till 1 inför nästa beräkning
	for (int i=1; i<n; i++) {
	      // produkt tilldelas värdet av sig själv (gammla värdet) + det nya
	      produkt = produkt + (produkt * i);
	  }
	      
    cout << n << "! = " << produkt << endl;
    
    } while (n != 0); // ...här är vilkoret som avgör om programmet fortsätter
	
	return 0;
}
