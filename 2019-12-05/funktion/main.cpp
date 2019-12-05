#include <iostream>
using namespace std;
// Funktionsdeklaration
// in- och utv�rden, namn
// datatyp_ut namn(datatyp_in, datatyp_in, ...);
/*
Varf�r anv�nda funktioner
1. Isolerar koden. Motverkar att koden �ndras oavsiktligt.
2. Koden beh�ver bara skrivas en g�ng.
3. Koden kan testas, fungerar den f�rsta g�ngen.
   l�r den fungera varje g�ng.
4. Koden kan �teranv�ndas.
5. Programmerare kan jobba med v�ldiffinierade uppgifter.
*/
float addera(float, float);
float celsius_to_fahrenheit(float);
int main() {
	
//	float utvarde = 6.6;
    float x = 5.5;
    float y = 1.1;
	float utvarde = addera(x,y);
	cout << utvarde << endl;
	// Omvandla fr�n celsius till fahrenheit
	float cel;
	cout << "Ange temperaturen i grader Celsius: ";
	cin >> cel;
	cout << "Uttryckt i Fahrenheit: " << celsius_to_fahrenheit(cel) << endl;
	return 0;
}
float addera(float a, float b)
{
	float summa = (a+b);
	return summa;
}
float celsius_to_fahrenheit(float celsius)
{
	float fahrenheit = celsius * 1.8 + 32;
	return fahrenheit;
}
