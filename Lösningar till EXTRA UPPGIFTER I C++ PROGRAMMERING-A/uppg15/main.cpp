/*
G�r ett program som som slumpar fem heltal i intervallet [1,10],
lagrar dessa i en array, och d�refter summerar talen.
*/
#include <time.h> // F�r tiden
#include <cstdlib> // F�r slumpen
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	srand(time(NULL)); // initierar ett startv�rde f�r slumpen.
	// vi beh�ver ett heltalsf�lt med 5 platser
	int falt[5];
	
// Resten vid division med 10 blir alltid
// ett heltal mellan 0 och 9
// Adderar du med ett f�r du ett tal
// mellan 1 och 10
/*
Ur "rand()" kommer ett slumptal
*/
// Nu anv�nder vi en for-sats f�r att slumpa v�rden mellan 
// 1 och 10 i de 5 platserna i f�ltet
for (int i=0; i<5; i++)
{
	falt[i] = (rand() % 10)+1; // Ett tal mellan 0 och 9, plus 1
}
// Dags att skriva ut f�ltet f�r att se vad det blev f�r tal
// och att addera alla talen
// variabel f�r summeringan
int summa = 0;
for (int i=0; i<5; i++)
{
	cout << falt[i] << ' ';
	summa = summa + falt[i];
}
cout << "Summan av talen �r " << summa << endl;
	return 0;
}
