#ifndef Persona_Paciente_H
#define Persona_Paciente_H
#include "Persona.h"
#include "Medicamento.h"
#include "Principal.h"
#include <iostream>
#include <vector>

using namespace std;

class Persona_Paciente : public Persona {
	private:
		int numero_cuarto;
		int cant_medicamentos;
		vector <char * > sindrome;
		vector<Medicamento> medi;
		vector<Medicamento> solo;
	public:
		//constructor
		Persona_Paciente(char * nom_paciente,char * ape_paciente,int edad_paciente,char *  telf_paciente,int numero_cuarto,int cant_medicamentos,vector <Medicamento> medi);
		//metodos
		char * Concatenar_nom01();	
		void mostrar_paciente();
		void llenar_datos();
		bool Sindrome();
		double cal_deuda();
		int getPresentacionMed();
		//setters
		void setnumero_cuarto(int numero_cuarto);
		void setcant_medicamentos(int cant_medicamentos);
		//getters
		int getcant_medicamentos();
};
#endif
