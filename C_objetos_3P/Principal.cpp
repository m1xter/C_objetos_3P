#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cstdlib>
//clases
#include "Principal.h"
#include "Persona_Paciente.h"
#include "Medicamento.h"
#include "Datos.h"
//clases

using namespace std;

void Principal::imprimirdeuda(){
	
	
}

void Principal::list_convulsivo(){
	cout<<endl;
	cout<<"Lista de sindrome convulsivo"<<endl;	
	cout<<endl;
	for(int i = 0 ; i<lista_convulsivo.size();i++){
		lista_convulsivo[i].Concatenar_nom01();
	}
}
void Principal::lista_presentacion(){
	cout<<endl;
	cout<<"lista de presentacion de Medicamentos "<<endl;
	cout<<endl;
	for(int i =0 ; i<Pacientes.size();i++){
		Pacientes[i].getPresentacionMed();
		Pacientes[i].Concatenar_nom01();
	}
}


void Principal::separar_Medicamentos(){
	Datos z;
	int s;
	char * ptr;	
	for(int i =0; i<z.getCant_Datos_Medicamentos();i++){
		ptr = strtok(z.getDatos_Medicamentos(i)," ");
		nombres_medi.push_back(ptr);
		while ( ptr !=NULL){
			s++;
			ptr = strtok(NULL," ");								
			if(s==1){
				presentacion_medi.push_back(atoi(ptr));
			}
			if(s==2){
				fecha_medi.push_back(ptr);
			}
			if(s==3){
				precio_medi.push_back((double)atoi(ptr));
			}
		}
		if(ptr == NULL){
			s=0;
			
		}
	}
	
	
	for(int i=0;i<z.getCant_Datos_Medicamentos();i++){
		Medicamento h = Medicamento(nombres_medi.at(i),presentacion_medi.at(i),fecha_medi.at(i),precio_medi.at(i));
		Medicas.push_back(h);
		Medicas[i].precio_real();
		Medicas[i].mostrar();
	}
	
	
	
}

void Principal::separar_Pacientes(){
	Datos z;
	int s,g;
	
	char * ptr;	
	for(int i =0; i<z.getCant_Datos_Pacientes();i++){
		
		ptr = strtok(z.getDatos_Pacientes(i)," ");
		nombres_Paci.push_back(ptr);
		
		while ( ptr !=NULL){
			s++;
			ptr = strtok(NULL," ");								
			if(s==1){
				ape_Paci.push_back(ptr);
			}
			if(s==2){
				edad_Paci.push_back(atoi(ptr));
			}
			if(s==3){
				telf_Paci.push_back(ptr);
			}
			if(s==4){
				n_medicamentos.push_back(atoi(ptr));
			}
		}
		if(ptr == NULL){
			s=0;
			
		}
		
	}
	
	for(int i=0;i<z.getCant_Datos_Pacientes();i++){
		
		Persona_Paciente g = Persona_Paciente(nombres_Paci.at(i),ape_Paci.at(i),edad_Paci.at(i),telf_Paci.at(i),2,n_medicamentos.at(i),Medicas);
		Pacientes.push_back(g);
		
		//Pacientes[i].Concatenar_nom01();
		Pacientes[i].mostrar_paciente();
		if(Pacientes[i].Sindrome()){
			lista_convulsivo.push_back(g);
		}
	}
	
	
	
}

void Principal::llenar_pacientes(){
	
}


void Principal::mostrar_Pacientes(){
	for(int i=0;i<Pacientes.size();i++){
		Pacientes[i].mostrar_paciente();
	}
}




char * Principal::getnombres_medi(int n){
	return nombres_medi[n];
}
int  Principal::getpresentacion_medi(int n){
	return presentacion_medi[n];
}
char * Principal::getfecha_medi(int n){
	return fecha_medi[n];
}
double Principal::getprecio_medi(int n){
	return precio_medi[n];
}
//-------------------------------------------------------
char * Principal::getnombres_Paci(int n){
	return nombres_Paci[n];
}
char * Principal::getape_Paci(int n){
	return ape_Paci[n];
}
int Principal::getedad_Paci(int n){
	return edad_Paci[n];
}
char * Principal::gettelf_Paci(int n){
	return telf_Paci[n];
}
int Principal::getn_medicamento(int n){
	return n_medicamentos[n];
}
int Principal::getn_cuarto(int n){
	return n_cuarto[n];
}







