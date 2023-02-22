#include "empleado.cpp"
#include <iostream>
using namespace std;
main(){
	string pt,nom,ap,dire,fn,cod;
	int tel;
	
	cout<<"ingrese su puesto: ";
	cin>>pt;
	cout<<"ingrese sus nombres: ";
	cin>>nom;
	cout<<"ingrese sus apellidos: ";
	cin>>ap;
	cout<<"ingrese su direccion: ";
	cin>>dire;
	cout<<"ingrese su codigo de empleado: ";
	cin>>cod;
	cout<<"ingrese su fecha de nacimiento: ";
	cin>>fn;
	cout<<"ingrese su numero de telefono: ";
	cin>>tel;
	
	
	empleado obj = empleado(nom,ap,dire,fn,tel,pt, cod);
	obj.mostrar();
	
	cout<<"ingrese su nuevo puesto: ";
	cin>>pt;
	obj.setpuesto(pt);
	obj.mostrar();
	}
