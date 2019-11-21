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
	// man ser att && har högre prioritet än  || 
	// "Osynliga paranteser", samma resultat som i EXEMPEL 1
	// EXEMPEL 1
	cout << ( (false) && (true)  || (true)  )<< endl; // 0 falskt
	
	// ! "icke" inverterar sanningsvärdet. Sant blir falskt och falskt blir sannt.
	bool b = true;
	// går också att skriva "bool b = 1"
    cout << b << endl; // 1
	cout << !b << endl;  // Inverterar, 0

	// Så mycket kostar inträdet
	// Upp till 12 år, 40 kr
	// Över 80 år, 40 kr
	// Alla andra 80 kr
	// Med rabattkort, gäller allla, 40 kr 
	
	// Några olika sätt att tänka, vad tycker du är bäst?
	int age;
	bool rabattkort;
	char c;
	cout << "Hur gammal är du? ";
	cin >> age;
	cout << "Har du rabattkort (j/n)? ";
	cin >> c;
    if (c=='j')
       rabattkort=true;
    else
       rabattkort=false;
	   /* */
	   	if (age <= 12)
	   		cout << "Inträdet är 40 kronor" << endl;
	    else if (age > 80)
	    	cout << "Inträdet är 40 kronor" << endl;
	    else if (rabattkort)
	    	cout << "Inträdet är 40 kronor" << endl;
	    else
			cout << "Inträdet är 80 kronor" << endl;	
	   /* */
	   
	   /* */
	   if ( ( (age>12) && (age<=80) ) && !rabattkort )
	   		cout << "Inträdet är 80 kronor" << endl;
		else
	   		cout << "Inträdet är 40 kronor" << endl;
	   	/* */
	   	
	   	/* */
	   	if (  (age<=12) || (age>80) || rabattkort )
	   		cout << "Inträdet är 40 kronor" << endl;
		else
	   		cout << "Inträdet är 80 kronor" << endl;
	   	/* */
	   	
	   	/* */
	   	if (rabattkort)
	   		cout << "Inträdet är 40 kronor" << endl;
	   	else
	   		{
	   			if ( (age<=12) || (age>80) )
	   				cout << "Inträdet är 40 kronor" << endl;
	   			else
	   				cout << "Inträdet är 80 kronor" << endl;
	   		}
	   		
		/* */
	   	if ( ( !(age>12) || !(age<=80) ) || rabattkort )
	   		cout << "Inträdet är 40 kronor" << endl;
		else
	   		cout << "Inträdet är 80 kronor" << endl;
	   	/* */
	
	return 0;
}
