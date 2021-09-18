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
int vectorLleno(int n); 
int buscarPos_des(float numa, int n, float vec_notas[]);
int insertaDesor(int &n, float vec_notas[], float nueva, string nombre, string vec_nombre[], int pos);
void borrarDesord(float vectorNot[], string vectorNom[], int &n, float clave);
 
int main()
{
	int n, i, in, pos;
	string vec_nombre[TAMAX], nombre;
	float vec_notas[TAMAX], nota;
	n = llenarVectorUsu(vec_nombre, vec_notas);
	mostrarVector(vec_nombre,vec_notas,n);
	ordenBaraja(vec_nombre, vec_notas,n);
	mostrarVector(vec_nombre, vec_notas, n);
	
	cout << "Ingrese nombre a insertar ==> "; cin >> nombre;
	cout << "\nIngrese nota a insertar ==> "; cin >> nota;
	while(nota > 5.0 or nota < 0.0)
	{
		cout << " Nota invalida " << endl;
		cin >> nota;
	}
	cout << "\nIngrese posicion a insertar ==> "; cin >> pos;
	
	in = insertaDesor(n, vec_notas, nota, nombre, vec_nombre, pos);
	if(in == -1)
	{
		cout << "no se puede insertar";
		return 0;
	}
	cout << "Insertado \n";
	mostrarVector(vec_nombre, vec_notas, n);
	
	ordenBaraja(vec_nombre, vec_notas, n);
	cout << "Ordenado \n\n" << endl;
	system("pause");
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
 
//*******************************

int vectorLleno(int n)
{
	bool lleno = false;
	if(n == TAMAX)
	{
		lleno = true;
	}
	return lleno;
 } 
 
//************************************ 
 
 int buscarPos_des(float numa, int n, float vec_notas[])
 {
    int i = 0;
    for (i = 0; i < n; i++)
    {
    	if(numa == vec_notas[i])
    	{
    		return i;
		}
	}
	return -1; // no lo encontro
 }
 
//*************************

int insertaDesor(int &n, float vec_notas[], float nueva, string nombre, string vec_nombre[] , int pos)
{
	int k;
	if(vectorLleno(n))
	{
		return -1;
	}
	if(pos == n)
	{
		vec_notas[pos] = nueva;
		vec_nombre[pos] = nombre;
		n = n + 1;
	}
	else{
		if(pos == 0 or pos < n)
		{
			k = n;
			while( k>= pos)
			{
				vec_notas[k] = vec_notas[k-1];
				vec_nombre[k] = vec_nombre[k-1];
				k--;
			}
			vec_notas[pos] = nueva;
			vec_nombre[pos] = nombre;
			n++;
		}
	}
	return 1;
}

//*******************************

void borrarDesord(float vectorNot[], string vectorNom[], int &n, float clave)
{
	int pos, j, k;
	
	pos = buscarPos_des( clave,  n,  vectorNot);
	if(pos == -1)
	{
		cout << "No se puede borrar, no esta en el vector " << endl;
	}
	else
	{
		j = pos;
		k = pos;
		while( k < n)
		{
			vectorNot[k] = vectorNot[k+1];
			vectorNom[k] = vectorNom[k+1];
			k++;
		}
		vectorNot[n-1] = -10;
		vectorNom[n-1] = " ";
		n--;
	}
}













 
 
 
 
 
 
 
 
 
