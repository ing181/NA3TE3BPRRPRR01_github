
#include <iostream>
using namespace std;
// Vi talar om funktionens utv�rde, namn och eventuella inv�rden
// D� menar jag datatypen, int, char, ...
/*
Om ni kollar p� n�tet eller i en bok kan det st� andra beteckningar
returv�rde = utv�rde
inv�rde = parameter = argument
*/
// exempel p� utv�rden
// int, char, double, ...
// och void som betyder att utv�rde (returv�rde) saknas
int test(); // Deklarerat utv�rde, ev. inv�rden och ett namn
int test2(int a); // Deklarerat utv�rde, ev. inv�rden och ett namn
void test3(string);
int main() {
	setlocale(LC_ALL,"swedish");
	// Programmet k�rs uppifr�n och ner
	// Om en fuktion dyker upp hoppar
	// programmet dit och forts�tter sen
	// med n�sta sats
	test3("Kalle Anka");
	cout << "Hej";  cout << " P� " << " dig "; // En rad, tv� satser
	cout << endl;
	int x = 7;
	cout << x << endl;
	
	test3("Kalle Anka");
	
	int utvarde = test();
	cout << utvarde << endl;
	
	int utvarde2 = test2(99);
	cout << utvarde2 << endl;
	
	test3("Kalle Anka");
	
	return 0;
}
// Definition av vad funktionen g�r
int test()
{
	return 5;
}

int test2(int a)
{	int summa = a + 1;
    return summa;
}
void test3(string s)
{
	cout << "V�lkommen till lektionen, " << s << endl;
}

