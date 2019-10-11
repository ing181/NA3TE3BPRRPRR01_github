#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	int heltal;
	cout << "Mata in månadens ordningsnummer ";
	cin >> heltal;
	switch (heltal) // Endast heltal
	{
		case 1:
		cout << "Du valde Januari" << endl;
		break;
		case 2:
		cout << "Du valde Februarii" << endl;
		break;
		case 3:
		cout << "Du valde Mars" << endl;
		break;
		case 4:
		cout << "Du valde April" << endl;
		break;
		case 5:
		cout << "Du valde Maj" << endl;
		break;
		case 6:
		cout << "Du valde Juni" << endl;
		break;
		case 7:
		cout << "Du valde Juli" << endl;
		break;
		case 8:
		cout << "Du valde Augusti" << endl;
		break;	
		case 9:
		cout << "Du valde September" << endl;
		break;
		case 10:
		cout << "Du valde Oktober" << endl;
		break;
		case 11:
		cout << "Du valde November" << endl;
		break;
		case 12:
		cout << "Du valde December" << endl;
		break;	
		default:
		cout << "Finns ingen månad med ordningsnummer " << heltal << endl;
		
	}
	
	if (heltal == 1)
	{
		cout << "Du valde Januari" << endl;
	}
	else if (heltal == 2)
	{
		cout << "Du valde Februari" << endl;
	}
	else if (heltal == 3)
	{
		cout << "Du valde Mars" << endl;
	}
	else if (heltal == 4)
	{
		cout << "Du valde April" << endl;
	}
	else
	{
		cout << "Finns ingen månad med ordningsnummer " << heltal << endl;
	}

	return 0;
}
