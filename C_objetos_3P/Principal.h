#ifndef Principal_H
#define Principal_H

#include <iostream>
#include <vector>

#include "Persona_Paciente.h"
#include "Persona_Paciente.cpp"
#include "Medicamento.h"

using namespace std;

class Principal{
	private:
		//vectores
		//datos de los medicamentos
		vector<char*>nombres_medi;
		vector <int>presentacion_medi;
		vector<char*>fecha_medi;
		vector <double>precio_medi;
		//datos de pacientes
		vector<char *>nombres_Paci;
		vector<char*>ape_Paci;
		vector<int>edad_Paci;
		vector<char *>telf_Paci;
		vector<int>n_medicamentos;
		vector<int>n_cuarto;
		vector<Medicamento> Medicas;		
		//vectores de objetos
		vector<Persona_Paciente> Pacientes;	
		vector<Persona_Paciente> lista_convulsivo;	
	public:
		//metodos		
		
		void imprimirdeuda();
		void list_convulsivo();
		void lista_presentacion();
		void separar_Pacientes();
		void separar_Medicamentos();
		void llenar_pacientes();
		void mostrar_Pacientes();
	//getters
		char * getnombres_medi(int n);
		int getpresentacion_medi(int n);
		char * getfecha_medi(int n);
		double getprecio_medi(int n);
		char * getnombres_Paci(int n);
		char * getape_Paci(int n);
		int getedad_Paci(int n);
		char * gettelf_Paci(int n);
		int getn_cuarto(int n);
		int getn_medicamento(int n);
		
		
};
#endif
