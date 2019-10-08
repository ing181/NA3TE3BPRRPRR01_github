#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	
	int i = 0;
	while (i < 10) // Så länge detta är sant, fortsätt
	{
		cout << "Det var sant 1" << endl;
		cout << "Det var sant 2" << endl;
		cout << "Före ökning i = " << i << endl;
		i++;
		cout << "Efter ökningi = " << i << endl;
	}
	
	
	// Detta utförs minst en gång
	do {
		
		cout << "Detta skrivs ut" << endl;
    } while (1>2); // Om det är falsk, görs det inte om
	
	
	
	
	
	
	
	

	return 0;
}
