#include <iostream>

using namespace std;
class persona{
	
	protected : string nombres, apellidos, direccion, fechanacimiento;
				int telefono;
				
	protected : 
		 persona(){
		 }
		 	persona (string nom, string ap, string dire, string fn, int tel){
		 			nombres=nom;
		 			apellidos=ap;
		 			direccion=dire;
		 			fechanacimiento=fn;
		 			telefono=tel;
			 }
			 
			void mostrar();
};
