/*
G�r ett program som finner alla heltalsl�sningar till ekvationen 3x - 7y = 1,
d� -50<=x=>50 och -20<=y=>20.
*/

#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	// 3x - 7y = 1 kan skrivas
	// 3x - 7y - 1 = 0
	
	// Vi loopar genom de givna intervallen och
	// kollar om det finns n�gon eller n�gra l�sningar
	// inte lika elegant som en matematisk l�sning kanske
	// men vi l�ter datorn g�ra jobbet och slipper t�nka!
	
	// Test av alla kombinationer
	
	for (int x=(-50); x<=50; x++)
	{
		for (int y=(-20); y<=20; y++)
		{
			if ( (3*x - 7*y - 1) == 0 )
			{
			  cout << "L�sning finns: x=" << x <<" y=" << y << endl;
			  cout << " Ty 3*" << x << "-7*" << y << "-1=0"<< endl << endl;
			}
			  
		}
	}

	return 0;
}
