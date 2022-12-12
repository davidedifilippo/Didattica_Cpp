#include <iostream>
using namespace std;



int main() {

     /********************************************************************
      *Si richiede due celle di memoria per conservare due numeri interi *
      ********************************************************************/

	int lato; 
	int area;

	/*******************************************************************
     *         Interazione con l'utente                                *
     *******************************************************************/
	
	cout<<"Inserire il lato del quadrato\n";
	cin>>lato;

	/********************************************************************************************************************
	 * L'istruzione cin blocca l'esecuzione del programma fino a quando l'utente non preme il tasto Invio. 			    *
	 * il dato presente nella memoria della tastiera vengono trasferiti nella locazione di memoria contrassegnata con x *
     *******************************************************************************************************************/


	area = lato * lato;  //elaborazione dati

        
    /*Si stampa il risultato*/  

	cout<<"Area del quadrato:\n";
	cout<<area;



}