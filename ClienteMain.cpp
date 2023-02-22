#include "cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string n,nom,ap,dire,fn;
	int tel;
	
	cout<<"ingrese su nit: ";
	cin>>n;
	cout<<"ingrese sus nombres: ";
	cin>>nom;
	cout<<"ingrese sus apellidos: ";
	cin>>ap;
	cout<<"ingrese su direccion: ";
	cin>>dire;
	cout<<"ingresar su fecha de nacimiento: ";
	cin>>fn;
	cout<<"ingresar su numero de telefono: ";
	cin>>tel;
	
	cliente obj = cliente(nom,ap,dire,fn,tel,n);
	obj.mostrar();
	
	cout<<"ingresar su nit: ";
	cin>>n;
	obj.setnit(n);
	obj.mostrar();
}
