#include "persona.cpp"
#include <iostream>

using namespace std;
class cliente: persona {
	private : string nit;
	
	public :
		cliente(){
		}
		
			cliente(string nom, string ap, string dire, string fn, int tel, string n) : persona(nom,ap,dire,fn,tel){
			nit = n;
			}
			
			void setnit(string n){nit=n;}
			void setnombres(string nom){nombres=nom;}
			void setapellidos(string ap){apellidos=ap;}
			void setdireccion(string dire){direccion=dire;}
			void setfechanacimiento(string fn){fechanacimiento=fn;}
			void settelefono(int tel){telefono=tel;}
			
			string getnit(){return nit;}
			string getnombres(){return nombres;}
			string getapellidos(){return apellidos;}
			string getdireccion(){return direccion;}
			string getfechanacimiento(){return fechanacimiento;}
			int gettelefono(){return telefono;}
			
			void mostrar (){
				cout<<"_______________"<<endl;
				cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fechanacimiento<<","<<telefono<<endl;
			}
			
};
