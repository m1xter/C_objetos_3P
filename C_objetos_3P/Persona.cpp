#include <iostream>
#include <string.h>
#include <stdlib.h>
//clases
#include "Persona.h"


using namespace std;
//constructores
Persona::Persona(){
	strcpy(nom_paciente,"vacio");
	strcpy(ape_paciente,"vacio");
	edad_paciente=0;
	strcpy(telf_paciente,"vacio");
}

Persona::Persona(char * nom_paciente,char * ape_paciente,int edad_paciente,char * telf_paciente){
	strcpy(this->nom_paciente,nom_paciente);
	strcpy(this->ape_paciente,ape_paciente);
	this->edad_paciente = edad_paciente;
	strcpy(this->telf_paciente,telf_paciente);
}

//metodos

void Persona::mostrar(){
	cout<<"nombre:"<<nom_paciente<<endl;
	cout<<"apellido: "<<ape_paciente<<endl;
	cout<<"edad: "<<edad_paciente<<endl;
	cout<<"telf: "<<telf_paciente<<endl;
}

char * Persona::Concatenar_nom01(){
	char coma[5] = ",";
	char * ncoma = strcat(nom_paciente,coma);
	char * nombre_apellido = strcat(ncoma,ape_paciente);
	return nombre_apellido;
}


//getters
char *  Persona::getnom_paciente(){
	return nom_paciente;
}
char * Persona::getape_paciente(){
	return ape_paciente;
}
int Persona::getedad_paciente(){
	return edad_paciente;
}
char * Persona::gettelf_paciente(){
	return telf_paciente;
}





