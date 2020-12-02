/*[2] Desarrolle programa que calcule el número mayor y menor de un arreglo
bidimensional con tamaño nxn y genere como resultado el promedio de
ambos valores.*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void RellenarMatriz(int *Puntero, int SizeN, int SizeM); //Funcion que rellena una matriz de tamaño NxM con valores al azar entre 10 y 100

 int main()
 {
     cout<<endl<<endl<<"Ingrese el tamano del arreglo nxn : ";
     int Size = 0;
     float Mayor = 0, Menor = 0;
     cin>>Size;
     cout<<endl; 
     int Matriz[Size][Size];
     int *PMatriz;
     PMatriz = &Matriz[0][0];
     RellenarMatriz(PMatriz,Size,Size);
     Mayor = PMatriz[0];
     Menor = PMatriz[0];
     for(int i = 0; i<(Size*Size) ; i++)
     {
         if(PMatriz[i] > Mayor)
         {
             Mayor = PMatriz[i];      //Hacemos uso de punteros para tomar el arreglo bidimencional y trabajarlo en una sola dimencion
         }                            //Asignamos a las dos variables el primer valor del arreglo y luego lo comparamos con todas la demas posiciones    
         if(PMatriz[i] < Menor)       //para determinar al numero menor y al numero mayor.   
         {
             Menor = PMatriz[i];
         }
     }
     
     cout<<endl<<endl<<"El numero mayor es: "<<Mayor<<endl;
     cout<<"El numero menor es: "<<Menor<<endl;
     cout<<"el promedio de estos dos numeros es: "<<(Mayor + Menor)/2<<endl<<endl;
     
 }

void RellenarMatriz(int *Puntero, int SizeN, int SizeM)
{   
    srand(time(NULL));
    
    int temp = 0;
    for(int i = 0 ; i<SizeN ; i++)
    {   cout<<"| ";
        for(int j = 0; j<SizeM ; j++)
        {
          Puntero[(i*SizeN)+j]= 10 + rand()%(91-1);     /*En realidad La matriz se podria rellenar con numeros al azar en cualquier
                                                        rango, pero lo pongo de 10 a 100, para ver la impresion en pantalla de forma mas estetica.*/
          cout<<Puntero[(i*SizeN)+j]<<" ";
          temp++;

        }
        cout<<"|";
        cout<<endl;
    }
}
