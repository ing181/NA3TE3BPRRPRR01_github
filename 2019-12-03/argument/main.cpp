#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
	string s(argv[1]);
	int storlek = s.size();
	cout << "Hejsan" << endl;
	cout << "Du har argumentet " << s << " som har " << storlek << " tecken " << endl;
   /* cout << argv[0] << endl;
    cout << argv[1] << endl;
    cout << argv[2] << endl;
    cout << argc << endl;*/
    system("PAUSE");

	return 0;
	
}
