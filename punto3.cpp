/*[2] La Mediana en Estadística es un indicador que se obtiene de la siguiente
forma. Se toman los N datos, a los que se les desea calcular la mediana en
orden ascendente. Si el número de datos N es impar, se toma el dato de la
mitad. Por ejemplo: la secuencia 4; 1; 3, ordenada queda 1; 3; 4 y su mediana
es el valor de la mitad 3. Cuando la cantidad de datos es par, no hay un único
valor en la mitad. Por ejemplo la secuencia 3; 2; 6; 1 ordenada queda 1; 2; 3;
6 y los valores de la mitad serán 2 y 3, la mediana se toma como el promedio
de los dos valores de la mitad, entonces queda (2+3)/2 = 2,5. Desarrolle una
función usando paso por puntero que calcule la mediana de un arreglo de
tamaño n.*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void LlenarArreglo(int *Puntero, int Size, int N); //Llena un arreglo de tamaño "Zize" con numeros al azar cuando N = 0, o con N, cuano N!=0 

int main()
{

    cout<<endl<<"Ingrese la cantidad de datos para calcular la Mediana: "; 
    int Ndatos = 0,temp = 0; 
    float Promedio = 0;
    cin>>Ndatos;
    int Arreglo[Ndatos];
    int *PArreglo;
    PArreglo = &Arreglo[0];

    cout<<endl<<endl<<"El arreglo se lleno con "<<Ndatos<<" datos al azar:"<<endl<<"[ ";
    LlenarArreglo(PArreglo,Ndatos,0);
    cout<<"]"<<endl;
    
    for(int i = 0 ; i<Ndatos ; i++)
    {                                               //Algoritmo burbuja
        for(int j = 0 ; j<(Ndatos-1) ; j++)
        {
           if(PArreglo[j] > PArreglo[j+1])
           {
               temp = PArreglo[j];
               PArreglo[j] = PArreglo[j+1];
               PArreglo[j+1] = temp;
           }
        }
    }
    cout<<endl<<"Se organizaron los datos de forma ascendente: "<<endl<<"[ ";
    for(int i = 0;i<Ndatos; i++)
    {
        cout<<PArreglo[i]<<" ";
    }
    cout<<"]"<<endl<<endl;
    if((Ndatos%2) == 0)      //Se verifica si la cantidad de datos es par.

    {
       cout<<"Los dos numeros a tener en cuenta son: ";
       cout<<PArreglo[(Ndatos/2)-1]<<", "<<PArreglo[((Ndatos)/2)]<<endl; //Con PArreglo[(Ndatos/2)-1] se obtiene la posicion del primer numero a tener en cuenta
       Promedio = (PArreglo[(Ndatos/2)-1] + PArreglo[((Ndatos)/2)])/2;   //Con PArreglo[((Ndatos)/2)] se obtiene la posicion del segundo numero a tener en cuenta
       cout<<endl<<"Su Mediana es: "<<Promedio<<endl<<endl; 
    }
    else
    {
        cout<<endl<<"La mediana es: "<<PArreglo[(Ndatos)/2]<<endl<<endl;
    }
    
}

void LlenarArreglo(int *Puntero, int Size, int N)
{
    if (N == 0)
    {
        srand(time(NULL));
        for(int i = 0 ; i<Size ; i++ )
        {
            Puntero[i] = rand()%(101-1);
            cout<<Puntero[i]<<" ";
        }
    }
    else
    {
        for(int i = 0 ; i<Size ; i++ )
        {
            Puntero[i] = N; 
            cout<<Puntero[i]<<" ";
        }
    }
    
}