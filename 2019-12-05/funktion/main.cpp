#include <iostream>
using namespace std;
// Funktionsdeklaration
// in- och utvärden, namn
// datatyp_ut namn(datatyp_in, datatyp_in, ...);
/*
Varför använda funktioner
1. Isolerar koden. Motverkar att koden ändras oavsiktligt.
2. Koden behöver bara skrivas en gång.
3. Koden kan testas, fungerar den första gången.
   lär den fungera varje gång.
4. Koden kan återanvändas.
5. Programmerare kan jobba med väldiffinierade uppgifter.
*/
float addera(float, float);
float celsius_to_fahrenheit(float);
int main() {
	
//	float utvarde = 6.6;
    float x = 5.5;
    float y = 1.1;
	float utvarde = addera(x,y);
	cout << utvarde << endl;
	// Omvandla från celsius till fahrenheit
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
