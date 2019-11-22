/*
Gör ett program som finner alla heltalslösningar till ekvationen 3x - 7y = 1,
då -50<=x=>50 och -20<=y=>20.
*/

#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	// 3x - 7y = 1 kan skrivas
	// 3x - 7y - 1 = 0
	
	// Vi loopar genom de givna intervallen och
	// kollar om det finns någon eller några lösningar
	// inte lika elegant som en matematisk lösning kanske
	// men vi låter datorn göra jobbet och slipper tänka!
	
	// Test av alla kombinationer
	
	for (int x=(-50); x<=50; x++)
	{
		for (int y=(-20); y<=20; y++)
		{
			if ( (3*x - 7*y - 1) == 0 )
			{
			  cout << "Lösning finns: x=" << x <<" y=" << y << endl;
			  cout << " Ty 3*" << x << "-7*" << y << "-1=0"<< endl << endl;
			}
			  
		}
	}

	return 0;
}
