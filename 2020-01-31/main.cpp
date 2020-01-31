/*
Upp till 1000 olika temperaturer skall kunna lagras i en array
Användaren ska kunna mata in ny temperatur
All inmatade temperaturer ska kunna visas
*/
void meny(float temperatur[], int antal); // arrayer skickas ALLTID som referens

void matain(float temperatur[], int &antal); // Här ändras värdet
											 // på antal av funktionen
											 // & (referens) måste
											 // användas
void avlas(float temperatur[], int antal);   // antal ändras inte
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"swedish");
	float temperatur[1000]; 
	int antal = 0;
	meny(temperatur,antal);

	return 0;
}
void meny(float temperatur[], int antal)
{
	cout << "Mata in en ny temperatur (n)" << endl;
	cout << "Visa alla inmatade temperaturer (v)" << endl;
    cout << "Avbryt (a)" << endl;
    char val;
    cin >> val;
    switch (val)
    {
    	case 'n':
    	matain(temperatur,antal);
    	break;
    	case 'v':
    	avlas(temperatur,antal);
    	break;
    	case 'a':
    	cout << "Hej då!\n";
    	break;
    	default:
    	cout << "Inkorrekt val\n";
    	meny(temperatur,antal);
    }
	
}

void matain(float temperatur[], int &antal)
{
	cout << "Mata in den nya temperaturen ";
	cin >> temperatur[antal];
	antal++;
	meny(temperatur,antal);
}
void avlas(float temperatur[], int antal)
{
	for (int i=0; i<antal; i++)
		cout << temperatur[i] << " Grader" << endl;
	meny(temperatur,antal);	
	
}
