/***********************************************
Taller: punto 7
Autor: Jose Miguel Serna Ospina 
*********************************************/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>


int crearArchivo();
float contador_de_letras(char frase[30],int vocal_a=0,int vocal_e=0,int vocal_i=0,int vocal_o=0,int vocal_u=0);

using namespace std;

int main ()
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
	int i;
	
	archivo.open("Frase.txt", ios::in | ios::out | ios::app );
	if(archivo.fail())
	{
		cout << "-------- Error para abrir archivo";
		return -1;
	}
	archivo.close();
	
	
	return 1;
	
}	

float contador_de_letras(char frase[30],int vocal_a=0,int vocal_e=0,int vocal_i=0,int vocal_o=0,int vocal_u=0)
{
	char frase[30];
	int vocal_a=0;
	int vocal_e=0;
	int vocal_i=0;
	int vocal_o=0;
	int vocal_u=0; 
	
	cout << "Digite la frase: ";
	cin.getline(frase,30, '\n');
	
	for(int i=0;i<30;i++)
	{
		switch(frase[i])
		{
			case 'a': vocal_a++; break;
			case 'e': vocal_e++; break;
			case 'i': vocal_i++; break;
			case 'o': vocal_o++; break;
			case 'u': vocal_u++; break;
		}
	}
	
	cout << "Vocal a: " <<vocal_a << endl;
	cout << "Vocal e: " <<vocal_e << endl;
	cout << "Vocal i: " <<vocal_i << endl;
	cout << "Vocal o: " <<vocal_o << endl;
	cout << "Vocal u: " <<vocal_u << endl;
	
	
	
	getch();
	return 0;
}
