#include <iostream>
#include <string.h>
#include <stdlib.h>
//clases
#include "Medicamento.h"

using namespace std;

//constructor
Medicamento::Medicamento(char * nombre,int presentacion,char * fecha_vencimiento,double precio){
	strcpy(this->nombre,nombre);
	this->presentacion = presentacion;
	strcpy(this->fecha_vencimiento,fecha_vencimiento);
	this->precio = precio;
}
//metodos
float Medicamento::precio_real(){
	char * venci20 = "2020";
	double deci = precio * 0.16;
	double dies = precio * 0.10;
	precio = precio + deci;
	
	if(strstr(fecha_vencimiento,venci20) !=NULL){
		
		precio = precio - dies;
		
	}
}

void Medicamento::mostrar(){
	cout<<endl;
	cout<<"nombre:"<<nombre;
    cout<<"  /  presentacion: "<<presentacion<<endl;
	cout<<"fecha_vencimiento: "<<fecha_vencimiento;
	cout<<"  /  precio real : "<<precio<<endl;
	cout<<endl;
}

//setters
void Medicamento::setnombre(char * ){
	strcpy(this->nombre,nombre);
}

void Medicamento::setfecha_vencimiento(char * ){
	strcpy(this->fecha_vencimiento,fecha_vencimiento);
}
void Medicamento::setprecio(double precio){
	this->precio = precio;	
}
void Medicamento::setpresentacion(int presentacion){
	this->presentacion = presentacion;
}
//getters

char * Medicamento::getfecha_vencimiento(){
	return fecha_vencimiento;
}
char * Medicamento::getnombre(){
	return nombre;
}
int  Medicamento::getpresentacion(){
	return  presentacion;
}
double Medicamento::getprecio(){
	return precio;
}



