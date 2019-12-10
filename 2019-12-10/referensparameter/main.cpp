// Fält och funktioner
#include <iostream>
  // Funktionsdeklaration
  // parameter, argument, invärde är samma sak
  void test(float xxx[]);
using namespace std;
int main() {
	//cout << sizeof(float) << endl;
	// 10000 * 4 byte
	// 10000 * 4 * 8 bitar (ettor o. nollor)
	float falt[100000];
	test(falt); // Till funktionen
	// Hoppar hit efter funktionen
	// ETT FÄLT SKICKAS ALLTID SOM REFERENS
/*	for (int i=0; i<100000; i++)
	{
		cout << falt[i] << endl;
	}
	*/
	return 0;
} 

 // Funktionsdefinition
void test(float f[])
{
	for (int i=0; i<100000; i++)
	{
		f[i] = 78.56;
	}
}
