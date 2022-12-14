#include <iostream>
#include <ctime>
using namespace std;

int main() {
  int dado;
  int x;

  srand(time(NULL));
  
  cout<<"Inserisci un numero [1:6]";
  cin >> x;
  
  dado = 1+rand()%6;
  cout << "Estratto: " <<dado<<endl;

  if(dado==x) 
    cout <<"Hai vinto";
  else 
    cout <<"Hai perso";
    
  
} 
