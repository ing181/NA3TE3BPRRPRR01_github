#include <iostream>
#include <string>
using namespace std;
int main() {
	string s1,s2;
	int tal;
	setlocale(LC_ALL,"swedish");
	cin >> s2;
	cout << s2 << endl;
	cin >> tal;
	cout << tal << endl;
	// Nu kommer problemet!
	// Använd "cin.ignore(1000,'\n')"
	// efter inmatning med "cin >> variabel"
	// Om du vill använda "getline(cin,s1);"
	cin.ignore(1000,'\n');
	getline(cin,s1);
	cout << s1 << endl;

	

	return 0;
}
