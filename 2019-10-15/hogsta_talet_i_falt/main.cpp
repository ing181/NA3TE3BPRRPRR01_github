/* Hitta det högsta talet i ett
talfält */
#include <iostream>
using namespace std;
int main() {
	int falt[] = {5,3,66,88,-3,91,4};
	int temp = falt[0];
	for (int i=1; i<7; i++)
	{
		if (falt[i] > temp)
		{
			temp = falt[i];
		}
	}
    cout << temp << endl;

	return 0;
}
