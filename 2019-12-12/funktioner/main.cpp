
#include <iostream>
using namespace std;
// Vi talar om funktionens utvärde, namn och eventuella invärden
// Då menar jag datatypen, int, char, ...
/*
Om ni kollar på nätet eller i en bok kan det stå andra beteckningar
returvärde = utvärde
invärde = parameter = argument
*/
// exempel på utvärden
// int, char, double, ...
// och void som betyder att utvärde (returvärde) saknas
int test(); // Deklarerat utvärde, ev. invärden och ett namn
int test2(int a); // Deklarerat utvärde, ev. invärden och ett namn
void test3(string);
int main() {
	setlocale(LC_ALL,"swedish");
	// Programmet körs uppifrån och ner
	// Om en fuktion dyker upp hoppar
	// programmet dit och fortsätter sen
	// med nästa sats
	test3("Kalle Anka");
	cout << "Hej";  cout << " På " << " dig "; // En rad, två satser
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
// Definition av vad funktionen gör
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
	cout << "Välkommen till lektionen, " << s << endl;
}

