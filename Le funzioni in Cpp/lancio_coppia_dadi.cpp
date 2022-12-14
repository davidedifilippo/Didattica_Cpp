#include <iostream>
#include <ctime>
using namespace std;

int main() {
  int dado1;
  int dado2;
  int x;

  srand(time(NULL));
  
  cout<<"Inserisci un numero [2:12]\n";
  cin >> x;
  
  dado1 = 1+rand()%6;
  dado2 = 1+rand()%6;
  cout << "Estratto 1: " <<dado1<<endl;
    cout << "Estratto 2: " <<dado2<<endl;

  if(dado1+dado2==x) 
    cout <<"Hai vinto";
  else 
    cout <<"Hai perso";
    
  
} 
