/************************
Objetivo: Implementar operaciones con arreglos
fecha: Agosto 21 de agosto 
autores: Todos
*********************************/

#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#define TAMAX 45
#define TAMIN 1

using namespace std;

int llenarVectorUsu(string vec_nombre[], float vec_notas[]); 
void mostrarVector(string vec_nombre[], float vec_notas[], int n);
void ordenBaraja(string vec_nombre[], float vec_notas[], int n); 
 
 
int main()
{
	int n;
	string vec_nombre[TAMAX];
	float vec_notas[TAMAX];
	n = llenarVectorUsu(vec_nombre, vec_notas);
	mostrarVector(vec_nombre,vec_notas,n);
	ordenBaraja(vec_nombre, vec_notas,n);
	mostrarVector(vec_nombre, vec_notas, n);
	return 0;
 } 
 
//***********************************  

int llenarVectorUsu(string vec_nombre[], float vec_notas[])
{
	
	int n;
	do
	{
		cout << "Ingrese tamaño del vector entre " << TAMIN << " Y " << TAMAX;
		cin >> n;
	}while( n < TAMIN or n > TAMAX);
	
	for (int i = 0; i < n; i++)
	{
		cout << "Ingrese nombre del estudiante" << i+1 << ": \t";
		fflush(stdin);
		cin >> vec_nombre[i];
		cin >> vec_notas[i];
		while (vec_notas[i] > 5.0 or vec_notas[i] < 0.0)
		{
			cout << "Nota invalida" << endl;
			cin >> vec_notas[i];
		}
		
	}
	return n;
 }
    
//******************************** 

void mostrarVector(string vec_nombre[], float vec_notas[], int n)
{
	system("cls");
	
	cout << "     ESTUDIANTES" << endl << endl;
	
	for( int i ; i < n; i++)
	{
		cout << vec_nombre[i] << "\t" << vec_notas[i] << endl;
	}
	
	system("Pause");
 } 
 
//*************************

void ordenBaraja(string vec_nombre[], float vec_notas[], int n)
{
	float clave;
	int i,j;
	string nombre;
	
	for( i= 1; i< n; i++)
	{
		clave = vec_notas[i];
		nombre = vec_nombre[i];
		j = i - 1;
		while((j >= 0) and (vec_notas[j] > clave))
		{
			vec_notas[j+1] = vec_notas[j];
			vec_nombre[j+1] = vec_nombre[j];
			j--;
		}
		vec_notas[j+1] = clave;
		vec_nombre[j+1] = nombre;

	}
	
 } 
 
 
 
 
 
 
 
