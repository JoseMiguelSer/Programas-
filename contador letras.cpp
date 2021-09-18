#include <iostream>
#include <conio.h>
#include <string.h>
#include <fstream>
#include <stdio.h>
#include <math.h>
int crearArchivo();
int leerArchivo();

using namespace std;

int main()
{
	
	int re;
	int n;
	re = crearArchivo();
	if(re == -1)
	{
		cout << "Lo siento no se pudo craer el archivo " << endl;
	}
	if( n == -1)
	{
		cout << "Lo siento no se pudo leer el archivo " << endl;
	}
	if( n == -1)
	{
		cout << "Lo siento no se pudo guardar el archivo" << endl;
	}
	
	return 0;
}

int crearArchivo()
{
	string nombres;
	fstream archivo;
	char frase[30];
	
	int vocal_a=0, vocal_e=0, vocal_i=0, vocal_o=0, vocal_u=0, letras=0,total_Letras=0;
	float frecuencia_a=0.0;
	float frecuencia_e=0.0;
	float frecuencia_i=0.0;
	float frecuencia_o=0.0;
	float frecuencia_u=0.0;
	float total;
	
	int i;
	
	archivo.open("Contadores.txt", ios::in  | ios::app );
	if(archivo.fail())
	{
		cout << "-------- Error para abrir archivo";
		return -1;
	}
	
	cout << "Digite una frase: ";
	cin.getline(frase, 30, '\n');
	archivo<<frase;
	total_Letras=strlen(frase);
	
	for(int i=0;i<total_Letras;i++)
	{
			switch(frase[i])
			{
				case 'a': vocal_a++; break;
				case 'e': vocal_e++; break;
				case 'i': vocal_i++; break;
				case 'o': vocal_o++; break;
				case 'u': vocal_u++; break;	
				default: if(frase[i]>'a' && frase[i]<'z'){
					letras++;
				}	
			}			
	}
	
	
	cout << "vocal a: "<<vocal_a<<endl;
	cout << "vocal e: "<<vocal_e<<endl;
	cout << "vocal i: "<<vocal_i<<endl;
	cout << "vocal o: "<<vocal_o<<endl;
	cout << "vocal u: "<<vocal_u<<endl;
	cout << "Total letras: "<<total_Letras<<endl;
	
	total=(float)total_Letras;
	frecuencia_a=vocal_a/total;
	frecuencia_e=vocal_e/total;
	frecuencia_i=vocal_i/total;
	frecuencia_o=vocal_o/total;
	frecuencia_u=vocal_u/total;
	cout <<"Frecuencia Vocal A: "<<frecuencia_a<<endl;
	cout <<"Frecuencia Vocal E: "<<frecuencia_e<<endl;
	cout <<"Frecuencia Vocal I: "<<frecuencia_i<<endl;
	cout <<"Frecuencia Vocal O: "<<frecuencia_o<<endl;
	cout <<"Frecuencia Vocal U: "<<frecuencia_u<<endl;
	
	getch();
	archivo.close();
	return 0;
	
}	

int leerArchivo()
{
	int n,i,j;
	ifstream archivo;
	
	archivo.open("Contadores.txt" );
	if(archivo.fail())
	{
		cout << "-------- Error al abrir el archivo";
		return -1;
	}
	archivo.close();
	return i;
}

