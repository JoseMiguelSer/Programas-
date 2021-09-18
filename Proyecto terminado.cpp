/**********
PROYECTO
FECHA: 17 Sept 2021
Autor: Jose Miguel Serna, Eder Mauricio Monsalve, Juan Pablo Castaño

CREDITOS: https://www.youtube.com/watch?v=wojE3luwuno
***********/

#include <iostream>
#include <math.h>
#include <windows.h>
#include <cstdlib>

using namespace std;
short menu(void);
void factorizar();
void bienvenida();
void gotoxy (int x, int y);


int main ()

{   int opc;
    bienvenida();
	system("Pause");
    do{
	opc= menu ();

   switch(opc)
   {
   	case 1: system("cls");
	        cout <<"\t\t\t\t\t\t ==== QUE ES LA FACTORIZACION?======================= \n";
   	        cout<< endl;	
	        system("Color F9");
            cout<<"\nExiste una tecnica llamada formula general para resolver ecuaciones cuadraticas de segundo grado que funciona con cualquier ecuacion Se puede resolver una ecuacion cuadratica completando el cuadrado, reescribiendo parte de la ecuacion como un trinomio cuadrado perfecto.";
			cout<<"\nSi se completa el cuadrado de una ecuacion generica  ax2 + bx + c = 0 y luego se resuelve X, encuentras que  (-b(+/-)Raiz(b^2-4ac))/2a esta ecuacion se le conoce como ecuación cuadratica."; 
			cout<<"\nEsta formula es muy util para resolver ecuaciones cuadraticas que son dificiles o imposibles de factorizar y usarla puede ser más rápido que completar el cuadrado."; 
			cout<<"\nLa formula cuadratica puede usarse para resolver cualquier ecuación de la forma  ax2 + bx + c = 0.  Una raiz cuadrada posee siempre dos valores, uno positivo y uno negativo."; 
			cout<<"\nDe manera que cuando se utiliza la fórmula general se completan ambos signos por separado. De manera resumida, la formula general, en las matematicas sirve para modelar un determinado fenomeno o comportamiento, con la finalidad de que bajo determinadas condiciones podamos obtener o predecir un resultado mediante las medidas cuantitativas de las variables involucradas.";
			cout<<"\nCon el uso de la fórmula general, al sustituir los valores cuantitativos de las variables, podemos obtener un resultado que prediga un determinado evento o resultado.";
            cout<<endl;
            cout<<"\n\n\nEl link para ver la formula de una mejor manera es: https://sites.google.com/d/1TPgVhXkBCuAnQHWhXeNyRKGkeMV1La7j/p/11ZH_trpDB692YIB4zVjX07K_i9m5rFQS/edit";
            system("Pause");
			break;
	case 2: system("cls");
	cout <<"\t\t\t\t\t\t ====FACTORIZAR======================== \n";
	        factorizar();
	         cout<< endl;
            system("Pause");
			break;
	case 3:system("cls"); 
	        cout <<"\t\t\t\t\t\t === DESARROLLADORES \n";
			 cout<< endl;
			 system("Color F9");
			 cout<<"\n ESTE PROGRAMA FUE DESARROLADO POR:  ";
			 cout<<"\n JOSE MIGUEL SERNA (jose_serna82211@elpoli.edu.co)";
			 cout<<"\n JUAN PABLO CASTANO ( juan_castano82211@elpoli.edu.co)";
			 cout<<"\n EDER MAURICIO MONSALVE (edermauro37@gmail.com)";
            system("Pause");
			break;
	case 0:	cout << "\t\t\t\t\t\t === FINNNN \n";
	        cout<< "\n\t\t\t\t\tGRACIAS POR USAR EL PROGRAMA!\n\n";
	         cout<< endl;
            system("Pause");			
			break;	
   }
       } while (opc != 0); 

	return 0;
}

short menu()

{

	short opcion;
	system("cls");
	system("Color 0E");
	cout << "\t\t\t\t\t\t MENU DE OPCIONES \n\n";

	cout << "\t\t\t\t\t\t\n1. QUE ES LA FACTORIZACION?"<<endl;
	cout << "\t\t\t\t\t\t\n2. FACTORIZAR"<<endl;
	cout << "\t\t\t\t\t\t\n3. DESARROLADORES"<<endl;
	cout << "\t\t\t\t\t\t\n0. TERMINAR"<<endl;
	cout << "\nINGRESE OPCION=========>";
	cin >> opcion;
	while( opcion <0 or opcion > 3)
	{
	     cout << "INGRESE OPCION VALIDA=========>";	
		cin>> opcion;

    }
	return opcion;

}

void factorizar()
{
     int  a,b,c;
	float x1, x2;

	system("Color F9");
	cout<<"\nteniendo en cuenta la formula general POR FAVOR..."; cout<<endl;

	cout<< "\nINGRESE EL VALOR DE a= ";
	cin>> a;
	cout<< "INGRESE EL VALOR DE b= ";
	cin>> b;
	cout<< "INGRESE EL VALOR DE c=  ";
	cin>> c;


	x1 = (-b+(sqrt(b*b-4*a*c)))/(2*a);

	x2 = (-b-(sqrt(b*b-4*a*c)))/(2*a);

	cout<<"x1= "<<x1;
	cout<<"\nx2= "<<x2;


}
void gotoxy (int x, int y){
	HANDLE hcon;
	hcon = GetStdHandle (STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);
}
void bienvenida()


{
   string saludo[30]={"B","I","E","N","V","E","N","I","D","O","S"," ", "A","L"," ", "P","R","O","G","R","A","M","A\n\n\t\t\t\t" };
    system ("color 0B");
	gotoxy (38,13);
	for (int i= 0; i<23; i++)
    {
    	cout<< saludo[i];
    	Sleep(100);
	}
}
