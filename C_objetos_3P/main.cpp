#include <iostream>
#include <string.h>
#include <stdlib.h>
//clases
#include "Principal.h"
#include "Principal.cpp"
#include "Medicamento.h"

#include <vector>
//clases


//autor Juan vizcaya 

using namespace std;

int main(int argc, char** argv) {
	
	
	
	Principal x;
	x.separar_Medicamentos();
	x.separar_Pacientes();
	x.list_convulsivo();
	x.lista_presentacion();
	//x.mostrar_Pacientes();
	//s.llenar_datos("esrt",3,";alsdkjf",3000);
	
	return 0;
}
