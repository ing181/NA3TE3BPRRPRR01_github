/*
Skriv programmet aha med f�ljande upptr�dande
N�r �r du f�dd? => 1942
Aha, 58 �r i �r!
Fyller 59 �r 2008
Fyller 60 �r 2009
:::::::::
:::::::::
Fyller 65 �r 2014
Sen f�r du g� hem!
*/

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "swedish");
	int born, iar=2019, age;
	
	cout << "N�r �r du f�dd => ";
    cin >> born;
    age = iar-born;
    cout << "Aha, " << age << " i �r!" << endl;
    while (age < 65)
    	cout << "Fyller " << (++age) << " �r " << (++iar) << endl;
	cout << "Sen f�r du g� hem" << endl;
	return 0;
}
