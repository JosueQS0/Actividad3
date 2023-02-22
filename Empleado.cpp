#include "persona.cpp"
#include <iostream>

using namespace std;
class empleado: persona {
	private : string puesto, codigo;
	
	public :
		empleado(){
		}
		
			empleado(string nom, string ap, string dire, string fn, int tel, string pt, string cod) : persona(nom,ap,dire,fn,tel){
			puesto = pt;
			codigo = cod;
			}
			
			void setpuesto(string pt){puesto=pt;}
			void setcodigo(string cod){codigo=cod;}
			void setnombres(string nom){nombres=nom;}
			void setapellidos(string ap){apellidos=ap;}
			void setdireccion(string dire){direccion=dire;}
			void setfechanacimiento(string fn){fechanacimiento=fn;}
			void settelefono(int tel){telefono=tel;}
			
			string getpuesto(){return puesto;}
			string getcodigo(){return codigo;}
			string getnombres(){return nombres;}
			string getapellidos(){return apellidos;}
			string getdireccion(){return direccion;}
			string getfechanacimiento(){return fechanacimiento;}
			int gettelefono(){return telefono;}
			
			void mostrar (){
				cout<<"_______________"<<endl;
				cout<<codigo<<","<<puesto<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<fechanacimiento<<","<<telefono<<endl;
			}
			
};
