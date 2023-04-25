#ifndef Persona_H
#define Persona_H
#include <vector>
class Persona{
	private:
		char nom_paciente[50];
		char ape_paciente[50];
		int edad_paciente;
		char telf_paciente[60];
	public:
		//constructor
		Persona();
		Persona(char * nomb_paciente,char * ape_paciente,int edad_paciente,char * telf_paciente);
		//metodos
		virtual char * Concatenar_nom01()=0;
		void mostrar();
		//getters
		char * getnom_paciente();
		char * getape_paciente();
		int getedad_paciente();
		char * gettelf_paciente();
};
#endif
