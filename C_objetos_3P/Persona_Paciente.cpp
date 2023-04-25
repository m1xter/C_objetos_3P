#include <iostream>
#include <string.h>
#include <stdlib.h>
//clases
#include "Persona.h"
#include "Persona.cpp"
#include "Persona_Paciente.h"
#include "Medicamento.h"
#include "Medicamento.cpp"
#include "Principal.h"
#include "Datos.h"

using namespace std;
//constructor
Persona_Paciente::Persona_Paciente(char * nom_paciente,char * ape_paciente,int edad_paciente,char * telf_paciente,int numero_cuarto,int cant_medicamentos,vector <Medicamento> medi):Persona(nom_paciente,ape_paciente,edad_paciente,telf_paciente){
this->numero_cuarto = numero_cuarto;
this->cant_medicamentos = cant_medicamentos;
this->medi = medi;
}


//metodos
char * Persona_Paciente::Concatenar_nom01(){
	char * c = Persona::Concatenar_nom01();
	char * cguion = strcat(c,"-");
	char * nombreape_m = strcat(cguion,"Lamotrigina");
	cout<<nombreape_m<<endl;
	return 0;
}

void Persona_Paciente::llenar_datos(){
	
	
	
}

void Persona_Paciente::mostrar_paciente(){
	cout<<endl;
	
	Persona::mostrar();
	cout<<"n de cuarto: "<<numero_cuarto<<endl;
	cout<<"cant_medicamentos: "<<cant_medicamentos<<endl;
}

bool Persona_Paciente::Sindrome(){
	
	for(int i=0 ;i<medi.size();i++){
		if(strcmp(medi[i].getnombre(),"Lamotrigina") ){		
			return true;
		}
	}
	
}
double Persona_Paciente::cal_deuda(){
	
}
int Persona_Paciente::getPresentacionMed(){	
		if( cant_medicamentos == 1){
			cout<<"tipo : tabletas"<<endl;
		}
		if(cant_medicamentos == 3){
			cout<<"tipo : ampolla"<<endl;
		}
		if(cant_medicamentos== 2){
			cout<<"tipo : jarabe"<<endl;
		}		
}

//setters
void Persona_Paciente::setcant_medicamentos(int cant_madicamentos){
	this->cant_medicamentos = cant_medicamentos;
}
void Persona_Paciente::setnumero_cuarto(int numero_cuarto){
	this->numero_cuarto = numero_cuarto;
}


