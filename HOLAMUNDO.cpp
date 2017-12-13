#include <iostream>
using namespace std;
int main(){
	cout<<"HOLA MUNDO"<<endl;
	
	int num=0, fac=0;
	cout<<"Ingresa un numero"<<endl;
	cin>>num;
	fac=num;
	for(int i=num-1;i>=1;i--){
		fac=fac*i;
	}
	cout<<"El factorial de"<<" "<<num<<" "<<"es"<<" "<<fac<<endl;
	system("PAUSE");
	return 0;

}
