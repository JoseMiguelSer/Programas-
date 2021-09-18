#include <iostream>
#include <string>
#include <stdio.h>
#define TAMAX 45

using namespace std;

int leer_notas(float notas[][5], string nombre[]);
void mostrar(int n, float notas[][5], string nombre[]);
void calculoDef(int n, float notas[][5]);
void calcularEstad( int n, float notas[][5], string nombre[]);

int main()
{
	string nombre[TAMAX];
	float notas[TAMAX][5];
	int n;
	
	n = leer_notas(notas, nombre);
	mostrar(n, notas, nombre);
	calculoDef(n, notas);
	mostrar(n, notas, nombre);
	calcularEstad( n, notas, nombre);
	
	return 0;
}

//***********************

int leer_notas(float notas[][5], string nombre[])
{
	int n, i, j;
	
	do
	{
		cout << "Ingrese numero de estudiantes ==> ";
		cin >> n; 
	} while(n > TAMAX or n < 1);
	
	for(i = 0; i < n; i++)
	{
		cout << "Ingrese el nombre del esudiante "<< i+1<<" ==> ";
		cin >> nombre[i];
		
		for (j = 0; j < 4; j++)
		{
			
			do
			{
				cout << "Ingrese la nota " << j+1 << " del estudiante " << nombre[i] <<" ==> ";
				cin >> notas[i][j];
			} while(notas[i][j] < 0.0 or notas[i][j] > 5.0);
			
		}
	}
	return n;
}

//*****************************

void mostrar(int n, float notas[][5], string nombre[])
{
	system ("cls");
	
	int i, j;
	
	cout << "\tNombre\tNota1\tNota2\tNota3\tNota4\tDefinitiva";
	for(i=0; i < n; i++)
	{
		cout << "\n" << i+1 << "\t" << nombre[i];
		for(j=0; j<5; j++)
		{
			cout << "\t" << notas[i][j];
		}
	} 
	cout << "\n" ;
	system("pause"); 	
	
 } 

//******************************

void calculoDef(int n, float notas[][5])
{
	int i, j;
	float suma;
	
	for(i=0; i < n; i++)
	{
		suma = 0.0;
		for(j=0; j < 4; j++)
		{
			suma = suma + notas[i][j];
		}
	notas[i][4]=suma/4; 
	}
}

//****************************

void calcularEstad( int n, float notas[][5], string nombre[])
{
	int i;
	int ganaron, perdieron, spromedio, bpromedio;
	float suma,promedio;
	
	ganaron = 0;
	perdieron= 0;
	
	for(i=0 ; i < n; i++)
	{
		if (notas[i][4]>=3.0){
			ganaron++;
		}else{
			perdieron++;
		}	
	}
	for(i=0 ; i < n; i++)
	{
		
	suma=suma+notas[i][4];
		
	}
	promedio=suma/4;
	
	for(i=0 ; i < n; i++)
	{
		if (promedio < notas[i][4]){
			spromedio++;
		}else{
			if(promedio > notas[i][4])
			{
				bpromedio++;
			}	
		}	
	}
	cout << "\nLa nota promedio es " <<promedio;
	cout << "\nEstudiantes que ganaron " <<ganaron;
	cout << "\nEstudiantes que perdieron " <<perdieron;
	cout << "\nEstudiantes que superaron el promedio " <<spromedio;
	cout << "\nEstudiante por debajo del promedio " <<bpromedio;
	cout << "\n";
}


 




