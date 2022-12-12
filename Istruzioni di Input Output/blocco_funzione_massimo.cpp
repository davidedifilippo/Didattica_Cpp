#include <iostream>
using namespace std;

void massimo(int x, int y)
{

	if (x>y) 
		cout << x <<" è il cateto maggiore\n";
	else
    cout << y <<" è il cateto maggiore\n";
}



int main() {

  int a,b;

	
	cout<<"Inserire il cateto a del triangolo: \n";
	cin>>a;

	cout<<"Inserire il cateto b del triangolo: \n";
	cin>>b;

	massimo(a,b);
  


}