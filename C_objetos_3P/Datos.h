#ifndef Datos_H
#define Datos_H
#include <vector>
#include <iostream>

using namespace std;

class Datos{
		
	vector <string> Datos_Pacientes;
	vector <string> Datos_Medicamentos;
	public:		
		Datos(){
			//Datos_Pacientes-----------------------------------------------------------------------
			Datos_Pacientes.push_back("Pedro Vargas 36 04166769989 1");
			Datos_Pacientes.push_back("Salvador Martinez 23 04123430020 2");
			Datos_Pacientes.push_back("Carla Monsalve 56 04166768989 1");
			Datos_Pacientes.push_back("Milena Rosas 44 04241234567 2");
			Datos_Pacientes.push_back("Luis Quintero 26 04146547892 3");			
			//Datos_Pacientes-----------------------------------------------------------------------
			//Datos_Medicamentos---------------------------------------------------------------------
			Datos_Medicamentos.push_back("Lamotrigina 3 25-11-2023 80.0");
			Datos_Medicamentos.push_back("Clorotimetrol 2 09-09-2020 45.5");
			Datos_Medicamentos.push_back("Cataflam 1 10-03-2024 20.5");
			Datos_Medicamentos.push_back("Azitromicina 3 10-10-2025 30.0");
			Datos_Medicamentos.push_back("Acetaminofen 1 10-10-2022 65.75");
			Datos_Medicamentos.push_back("Amoxicilina 3 10-10-2021 340.5");
			Datos_Medicamentos.push_back("Levetiracetam 1 10-10-2024 239.25");
			Datos_Medicamentos.push_back("Melatonina 3 10-10-2022 160.0");
			Datos_Medicamentos.push_back("Lamotrigina 2 10-10-2022 180.5");			
			//Datos_Medicamentos---------------------------------------------------------------------
		}
		
		char * getDatos_Pacientes(int n){
			return (char * )Datos_Pacientes[n].c_str();
		}
		char * getDatos_Medicamentos(int n){
			return (char * )Datos_Medicamentos[n].c_str();
		}
		int getCant_Datos_Pacientes(){
			return Datos_Pacientes.size();
		}
		int getCant_Datos_Medicamentos(){
			return Datos_Medicamentos.size();
		}
		
		
		
		
};
#endif
