// Praktiskt uppgift 2
#include <iostream>
using namespace std;
int val();
void stigande(int,int);
void sjunkande(int,int);
int main() {
	setlocale(LC_ALL,"swedish");
    val();
	
	    
    
	return 0;
}
int val()
{
	int tal1, tal2;
	char ordning;
	cout << "Mata in första talet ";
	cin >> tal1;
	cout << "Mata in sista talet ";
	cin >> tal2;
	cout << "Vill du skriva ut i stigande ordning? (välj \'t\')" << endl;		
	cout << "Vill du skriva ut i sjunkande ordning? (välj \'j\')" << endl;	
	cin >> ordning;
	switch (ordning)
	{
		case 't':
	    stigande(tal1,tal2);
	    break;
		case 'j':
	    sjunkande(tal1,tal2);
	    break;	    
	    default:
	    cout << "felaktigt val" << endl;
	
    }
}
void stigande(int x, int y)
{
	for (int i=x; i<=y; i++)
	{
		cout << i << ' ';
	}
	cout << endl;
}

void sjunkande(int x, int y)
{
	for (int i=y; i>=x; i--)
	{
		cout << i << ' ';
	}
	cout << endl;
}















