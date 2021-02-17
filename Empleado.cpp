#include "Persona.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona{
  // atributos
  private : string codigo,puesto;
            float sueldo;
  // constructor
  public :
  Empleado(){
  }
  Empleado(string nom,string ape,string cod,string pu,float su) : Persona(nom,ape){ 
  codigo = cod;
  puesto = pu;
  sueldo = su;
  
  }
  
  // METODOS
  //set (modificar)
  void setCodigo(string cod){codigo = cod;}
  void setNombres(string nom){nombres = nom;}
  void setApellido(string ape){apellido = ape;}
  void setPuesto(string pu){puesto = pu;}
  void setSueldo(float su){sueldo = su;}
  //get (mostrar)
  
  string getCodigo(){	return codigo;}
  string getNombres(){	return nombres;}
  string getApellido(){	return apellido;}
  string getPuesto(){	return puesto;}
  float getSueldo(){	return sueldo;}
  
// metodo
void mostrar1(){
	cout<<"______________________"<<endl;
	cout<<codigo<<","<<nombres<<","<<apellido<<","<<puesto<<","<<sueldo<<endl;
}
};

