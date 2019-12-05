#include <iostream>
using namespace std;
// Global variabel
const PI = 3.141592654;
int main() {
	
	int x = 5; // x deklarerad i huvudprogrammet
	
	if (x < 7)
	{
		cout << x << endl; // 5
		// Ny variabel x, instängd i if-satsen
		int x = 100; // x deklarerad i if-satsen
		cout << x << endl;  // 100
    }
	cout << x << endl;  // 5
	

	return 0;
}
