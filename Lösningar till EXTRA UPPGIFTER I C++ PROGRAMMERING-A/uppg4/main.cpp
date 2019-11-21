/*
Skriv programmet aha med följande uppträdande
När är du född? => 1942
Aha, 58 år i år!
Fyller 59 år 2008
Fyller 60 år 2009
:::::::::
:::::::::
Fyller 65 år 2014
Sen får du gå hem!
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	int born, iar=2019, age;
	
	cout << "När är du född => ";
    cin >> born;
    age = iar-born;
    cout << "Aha, " << age << " i år!" << endl;
    while (age < 65)
    	cout << "Fyller " << (++age) << " år " << (++iar) << endl;
	cout << "Sen får du gå hem" << endl;
	return 0;
}
