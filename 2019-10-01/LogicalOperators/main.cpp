#include <iostream>
using namespace std;
int main() {
	// Logical Operators
	// && and, || or
	//! icke (inverterar sanningsvärdet)
	// sant blir falsk och falskt blir sant
	bool b;
	b = ( ((5>4) || (5==3)) && !(6<3) );
    cout << b << endl;
    b = !b;
    cout << b << endl;
    cout << sizeof(bool) << endl;
    cout << sizeof(b) << endl;
	return 0;
}
