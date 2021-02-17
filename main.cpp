#include "Empleado.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion,codigo,puesto;
	int telefono;
	float sueldo;
	
	

cout<<"__________empleado__________"<<endl;
	cout<<"Ingrese codigo: ";
	cin>>codigo;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese apellido: ";
	cin>>apellidos;
	cout<<"Ingrese puesto: ";
	cin>>puesto;
	cout<<"Ingrese sueldo: ";
	cin>>sueldo;
		
	Empleado obj1 = Empleado(nombres,apellidos,direccion,telefono,codigo,puesto,sueldo);
	obj1.mostrar1();
}


