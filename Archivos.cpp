/********************************
autores: todos
fecha: viernes 10 de septiembre del 2021
********/

#include <fstream>
#include <iostream>
#include <stdio.h>
#define TAMAX 45

using namespace std;

int crearArchivo();
int leerArchivo(string nombre[], float matriz[][5]);
void mostrar(int n, float notas[][5], string nombre[]);
void mostrarDatos(string vNom[], float matNot[][5], int n);
void calculoDef(int n, float notas[][5]);
int guardarDef(string nombre[], float matriz[][5], int n);

//________PRIN________PROGRAMA__________PRINCIPAL

int main()
{
	int re;
	int n;
	string nombres[TAMAX];
	float matrizNotas[TAMAX];
	float notas, vNot, vNom;
	float matriz;
	
	re = crearArchivo();
	if(re == -1)
	{
		cout << "Lo siento no se pudo craer el archivo " << endl;
	}
	n = leerArchivo( nombres, matrizNotas);
	if( n == -1)
	{
		cout << "Lo siento no se pudo leer el archivo " << endl;
	}
	else
	{
		mostrarDatos(nombres, matriz, n);
		calculoDef(matriz, n);
		mostrarDatos(nombres, matriz, n);
		re = guardarDef(nombres, matriz, n);
		if
		{
			cout << "Lo siento no se pudo guardar el archivo" << endl;
		}
	}
	return 0;
}

int crearArchivo()
{
	string nombres;
	float notas[4];
	char seguir;
	fstream archi;
	int i;
	
	archi.open("estudNota.txt", ios::in | ios::out | ios::app );
	if(archi.fail())
	{
		cout << "-------- Errorpara abrir archivo";
		return -1;
	}
	seguir = 's';
	do
	{
		cout << "\nIngrese nombre estudiantes ==> ";
		cin.ignore();
		getline(cin, nombres);
		cin.ignore();
		archi << nombres << "  ";
		for( i = 0; i < 4; i++)
		{
		do
		{
			cout << "Ingrese nota valida";
			cin >> notas[i];
		}while(notas[i] < 0.0 or notas [i] > 5.0);
		archi << notas[i] << "  ";
	}
	archi << "\n";
	
		cout << "Seguir entrando datos";
		cin >> seguir;
	}while(seguir == 's');
	archi.close();
	return 1;
	
}	

int leerArchivo(string nombre[], float matrizNotas[][5])
{
	int n,i,j;
	float matrizNotas;
	float matNot;
	ifstream archi;
	float matriz;
	
	archi.open("estudNota.txt" );
	if(archivo.fail())
	{
		cout << "-------- Error al abrir el archivo";
		return -1;
	}
	else
	{
	while(!archi.eof())
	{
		archi >> nombre[i] >> matrizNotas[i][0] >> matrizNotas[i][1] >> matrizNotas[i][2] >> matrizNotas[i][3],matNot[i][4];
		i++;
	}
	archi.close();
	return i;
	}
}

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

void mostrarDatos(string vNom[], float matNot[][5], int n)
{
	int i;
	cout << " Nombre \t Nota 1 \t Nota 2 \t Nota3 \t Nota4" << endl;
	cout << "\t ------------------------------------------------------------------------";
	for(i = 0; i < n; i++)
	{
		cout << vNom[i];
		printf("\t%4.2f\t%4.2f\t%4.2f\t%4.2f\t%4.2f\n"), matNot[i][0],matNot[i][1],matNot[i][2],matNot[i][3],matNot[i][4];
	}
	cout << "---------------------------------------------";
}

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

int guardarDef(string nombre[], float matriz[][5], int n)
{
	fstream archiSal;
	
	
	archi.open("estudNotaDef.txt", ios::in | ios::app );
	if(archiSal.fail())
	{
		cout << "-------- Errorpara abrir archivo";
		return -1;
	}
	for(int i=0; i<n;i++)
	{
		archi<<nombre[i] << "  " < matriz[i][4] << "\n";
	}
	archiSal.close();
}



