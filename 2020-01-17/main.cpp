#include <iostream>
using namespace std;
// Idag: Referensparametrar
void test(int &a, double falt[]);
int main() {
	
	// jämför
	/*
	int a = 5;
	cout << a << endl;
	int b = a;
	b = 88; // Har inget med a att göra
	cout << a << endl;
	*/
	int a = 5;
	cout << a << endl;
	double f[2];
	test(a, f);
	cout << a << endl;
	cout << f[1] << endl;
	return 0;
}
void test(int &x, double falt[])
{
	x = 88;
	cout << x << endl;
	falt[1] = 11.11;
}
