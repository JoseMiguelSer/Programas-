/***********************************************
Taller: punto 7
Autor: Jose Miguel Serna Ospina 
*********************************************/

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <iomanip>

using namespace std;

//int intercambiarPosiciones(int aVec[],int elementoi, int elementoMinimo);
//int Procedimiento ordenarArrSelec(int  arreglo[],  int n);

const int fil = 3;
const int col = 3;
int ffpos=0, ccpos=0;

int main()
{
	int temp = 0;
    int matriz[fil][col];
    int matrizFila[2][col];
    int matrizColum[fil][2];
 
    cout << "\nIntroduzca los datos de la matriz:"
         << "\nDimensiones de la matriz: "
         << fil << " x " << col << "\n\n";
    for( int i = 0; i < fil; i++ ){
        for( int j = 0; j < col; j++ ) {
             cout << "[" << i << "][" << j << "]: ";
             cin >> matriz[i][j];
        }
    }
 
    cout << "\nDatos de la matriz:\n";
    for( int i = 0; i < fil; i++ ) {
        cout << "\n| ";
        for(int j = 0; j < col; j++ ) {
            cout << setw(4) << matriz[i][j] << " ";
        }
        cout << " |";
    }
    cout << endl;
    
    int minimo;
	int maximo;
	//Minimo
    for(int i=0;i<3;i++){
    	minimo=9999;
        for(int j=0;j<3;j++){ //El incremento se le aria a la variable j.
            if ((matriz[i][j])<minimo){
                minimo=matriz[i][j];
            }
        }
        matrizFila[1][i]=minimo;
        cout << "matriz  = "<<matrizFila[1][i]<< endl;
        cout << "minimo de Filas = "<<minimo<< endl;
    }
    //Segundo minimo
    int segMin;
    for(int i=0;i<3;i++){
    //	for(int w=0;w<2;w++){
	    	segMin=9999;
	        for(int j=0;j<3;j++){ //El incremento se le aria a la variable j.
	            if (((matriz[i][j])<segMin)&&((matriz[i][j]) > minimo)){
	                segMin=matriz[i][j];
	            }
	        }
	        cout << "Segundo minimo de Filas = "<<segMin<< endl;
	        matrizFila[2][i]=segMin;
	        cout << "matriz  = "<<matrizFila[2][i]<< endl;
       // }
    }
    //Maximo
    for(int j=0;j<3;j++){
    	maximo=-9999;
        for(int i=0;i<3;i++){ //El incremento se le aria a la variable j.
            if ((matriz[i][j])>maximo){
                maximo=matriz[i][j];
            }
        }
        cout << "maximo de columnas = "<<maximo<< endl;
        matrizColum[j][1]=maximo;
    }
 	//Segundo maximo
 	int segMax;
 	for(int j=0;j<3;j++){
    	segMax=-9999;
        for(int i=0;i<3;i++){ //El incremento se le aria a la variable j.
            if (((matriz[i][j])<maximo)&&((matriz[i][j]) > segMax)){
                segMax=matriz[i][j];
            }
        }
    	cout << "Segundo maximo de columnas = "<<segMax<< endl;
    	matrizColum[j][2]=segMax;
    }
     for( int i = 0; i < fil; i++ ) {
        for( int j = 0; j < col; j++ ) {
            for(int x = 0; x < fil; x++ ) {
                for( int y = 0; y < col; y++ ) {
 
                    if( matriz[i][j] > matriz[x][y]) {
                        temp = matriz[i][j];
                        matriz[i][j] = matriz[x][y];
                        matriz[x][y] = temp;
                    }
                }
            }
         }
    }
 
    cout << "\nDatos de la matriz ordenada:\n";
    for( int i = 0; i < fil; i++ ) {
        cout << "\n| ";
        for(int j = 0; j < col; j++ ) {
            cout << setw(4) << matriz[i][j] << " ";
        }
        cout << " |";
    }
    cout << endl;
    
    cout << "\nDatos de la matriz Fila:\n";
        for(int j = 0; j < col; j++ ) {
            cout << matrizFila[1][j] << " ";
            cout << endl;
            cout << matrizFila[2][j] << " ";
            
        }
      
    
 
    return 0;
}

/*int intercambiarPosiciones(int aVec[],int elementoi, int elementoMinimo)
{
	int aVec, elementoi, elementoMinimo;
	int aux;
	
	aux = aVec[elementoi];
	aVec[elementoi] = aVec[elementoMinimo];
	aVec[elementoMinimo] = aux;
	
	return aux;

}
public void ingresar(){
	
	return 0;
}

int Procedimiento ordenarArrSelec(int  arreglo[],  int n)
{
	int minimo,i,j;
	
	for( int i = 0; i < fil; i++ ) {
        for( int j = 0; j < col; j++ ) {
            for(int x = 0; x < fil; x++ ) {
                for( int y = 0; y < col; y++ ) {
 
                    if( matriz[i][j] > matriz[x][y]) {
                        temp = matriz[i][j];
                        matriz[i][j] = matriz[x][y];
                        matriz[x][y] = temp;
                    }
                }
            }
         }
    }*/
	









