// Logiska operatorer
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL,"swedish");
	// && and, || or, ! not
	
	// se upp med paranteserna
	cout << ( ( (false) && (true) ) || (true) ) << endl; // 1 sant EXEMPEL 1
	cout << ( (false) && ( (true)  || (true) ) ) << endl; // 0 falskt EXEMPEL 2
	
	// utan paranteser
	// man ser att && har h�gre prioritet �n  || 
	// "Osynliga paranteser", samma resultat som i EXEMPEL 1
	// EXEMPEL 1
	cout << ( (false) && (true)  || (true)  )<< endl; // 0 falskt
	
	// ! "icke" inverterar sanningsv�rdet. Sant blir falskt och falskt blir sannt.
	bool b = true;
	// g�r ocks� att skriva "bool b = 1"
    cout << b << endl; // 1
	cout << !b << endl;  // Inverterar, 0

	// S� mycket kostar intr�det
	// Upp till 12 �r, 40 kr
	// �ver 80 �r, 40 kr
	// Alla andra 80 kr
	// Med rabattkort, g�ller allla, 40 kr 
	
	// N�gra olika s�tt att t�nka, vad tycker du �r b�st?
	int age;
	bool rabattkort;
	char c;
	cout << "Hur gammal �r du? ";
	cin >> age;
	cout << "Har du rabattkort (j/n)? ";
	cin >> c;
    if (c=='j')
       rabattkort=true;
    else
       rabattkort=false;
	   /* */
	   	if (age <= 12)
	   		cout << "Intr�det �r 40 kronor" << endl;
	    else if (age > 80)
	    	cout << "Intr�det �r 40 kronor" << endl;
	    else if (rabattkort)
	    	cout << "Intr�det �r 40 kronor" << endl;
	    else
			cout << "Intr�det �r 80 kronor" << endl;	
	   /* */
	   
	   /* */
	   if ( ( (age>12) && (age<=80) ) && !rabattkort )
	   		cout << "Intr�det �r 80 kronor" << endl;
		else
	   		cout << "Intr�det �r 40 kronor" << endl;
	   	/* */
	   	
	   	/* */
	   	if (  (age<=12) || (age>80) || rabattkort )
	   		cout << "Intr�det �r 40 kronor" << endl;
		else
	   		cout << "Intr�det �r 80 kronor" << endl;
	   	/* */
	   	
	   	/* */
	   	if (rabattkort)
	   		cout << "Intr�det �r 40 kronor" << endl;
	   	else
	   		{
	   			if ( (age<=12) || (age>80) )
	   				cout << "Intr�det �r 40 kronor" << endl;
	   			else
	   				cout << "Intr�det �r 80 kronor" << endl;
	   		}
	   		
		/* */
	   	if ( ( !(age>12) || !(age<=80) ) || rabattkort )
	   		cout << "Intr�det �r 40 kronor" << endl;
		else
	   		cout << "Intr�det �r 80 kronor" << endl;
	   	/* */
	
	return 0;
}
