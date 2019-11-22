/*
Skriv ett program som läser in två tal och därefter skriver ut alla tal mellan de inmatade talen i
stigande eller sjunkande ordning.
*/
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	int starttal,sluttal;
	char ordning;
	cout << "Välj första talet: ";
    cin >> starttal;
  	cout << "Välj andra talet: ";
    cin >> sluttal;
	


	
	cout << "Vill du skriva ut talen stigande (s) eller fallande? (f) ";
	cin >> ordning;
	
	if (ordning == 's')
	{
		for (int i=starttal+1; i<sluttal; i++)
			cout << i << ' ';
		
	}
	else if (ordning == 'f')
	{
		for (int i=sluttal-1; i>starttal; i--)
			cout << i << ' ';
		
		
	}
	else
		cout << "Felaktig inmatning" << endl;
		
		cout << endl;
	return 0;
}
