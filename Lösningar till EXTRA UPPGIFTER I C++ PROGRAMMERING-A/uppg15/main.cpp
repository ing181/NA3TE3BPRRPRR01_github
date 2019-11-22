/*
Gör ett program som som slumpar fem heltal i intervallet [1,10],
lagrar dessa i en array, och därefter summerar talen.
*/
#include <time.h> // För tiden
#include <cstdlib> // För slumpen
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	srand(time(NULL)); // initierar ett startvärde för slumpen.
	// vi behöver ett heltalsfält med 5 platser
	int falt[5];
	
// Resten vid division med 10 blir alltid
// ett heltal mellan 0 och 9
// Adderar du med ett får du ett tal
// mellan 1 och 10
/*
Ur "rand()" kommer ett slumptal
*/
// Nu använder vi en for-sats för att slumpa värden mellan 
// 1 och 10 i de 5 platserna i fältet
for (int i=0; i<5; i++)
{
	falt[i] = (rand() % 10)+1; // Ett tal mellan 0 och 9, plus 1
}
// Dags att skriva ut fältet för att se vad det blev för tal
// och att addera alla talen
// variabel för summeringan
int summa = 0;
for (int i=0; i<5; i++)
{
	cout << falt[i] << ' ';
	summa = summa + falt[i];
}
cout << "Summan av talen är " << summa << endl;
	return 0;
}
