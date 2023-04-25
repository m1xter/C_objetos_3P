#ifndef Medicamento_H
#define Medicamento_H
#include <vector>
class Medicamento{
private:
	
char  nombre[40];
int presentacion;
//solo fechas que se vencen despues del 2020
char fecha_vencimiento[50];

double precio;

public:	
//constructores
Medicamento(char * nombre,int presentacion,char * fecha_vencimiento,double precio);
//metodos
float precio_real();
void mostrar();
//setters
void setnombre(char * nombre);
void setpresentacion(int presentacion);
void setfecha_vencimiento(char * fecha_vencimiento);
void setprecio(double precio);
//getters
char * getnombre();
int getpresentacion();
char * getfecha_vencimiento();

double getprecio();
};
#endif
