/*
Man kan ha flera funktioner med samma namn
Programmet hittar rätt funktion genom att invärdena är olika.
Olika antal, olika datayp
Kallas ÖVERLAGRADE FUNKTIONER
*/
int test(int);
int test(int,int);
int test(int,int,int);
#include <iostream>
using namespace std;
int main() {
	
	cout << test(7) << endl;
	cout << test(7,3) << endl;
	cout << test(7,3,1) << endl;

	return 0;
}
int test(int a)
{
	return a;
}
int test(int a, int b)
{
	return (a+b);
}
int test(int a, int b, int c)
{
	return (a+b+c);
}
