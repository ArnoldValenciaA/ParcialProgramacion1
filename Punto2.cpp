/*[1] Desarrolle una estructura estudiante, que contenga nombre, edad,
documento de identidad y semestre académico.*/

#include <iostream>
#include <string>

using namespace std;

struct Estudiante
{
    string Nombre;
    int Edad;
    int Didentidad;
    int Semestre; 

};

int Menu();

int main()
{
    int NumEstudiantes = 3, Contador = 0;

    Estudiante Agregar[NumEstudiantes];
    for(int i = 0 ; i<NumEstudiantes ; i++)
        {
            Agregar[i].Nombre = "Vacio";
            Agregar[i].Edad = 0;
            Agregar[i].Didentidad = 0;
            Agregar[i].Semestre = 0;
        }
    bool Llave = true;
    while (Llave == true)
    {
        switch (Menu())
        {
        case 1:{
            if(Contador < NumEstudiantes)
            {   
                string Nombre;
                int Edad;
                int Semestre;
                int NIdentidad;
                cout<<"In grese el Nombre: ";
                cin>>Nombre;
                cout<<endl;
                cout<<"Ingrese la Edad: ";
                cin>>Edad;
                cout<<endl;
                cout<<"Ingrese el Documento de identidad: ";
                cin>>NIdentidad;
                cout<<endl;
                cout<<"Ingrese el Semestre: ";
                cin>>Semestre;

                Agregar[Contador].Nombre = Nombre;
                Agregar[Contador].Edad = Edad;
                Agregar[Contador].Didentidad = NIdentidad;
                Agregar[Contador].Semestre =Semestre;

                Contador++;
            }
            else
            {
                cout<<"No se pueden agregar mas estudiantes."<<endl<<endl;
            }
            
            break;}
        case 2:{
            for(int i = 0;i<NumEstudiantes; i++)
                {
                    cout<<"Nombre: "<<Agregar[i].Nombre<<endl;
                    cout<<"Edad: "<<Agregar[i].Edad<<endl;
                    cout<<"Documento de identidad: "<<Agregar[i].Didentidad<<endl;
                    cout<<"Semestre: "<<Agregar[i].Semestre<<endl<<endl;
                }
            
            break;}
        case 3:{
            Llave = false;
            break;}
        
        default:
        cout<<"Ingrese un valor valido"<<endl<<endl;
            break;
        }
    }
    
}

int Menu()
{
    int Opcion = 0;
    cout<<"         Que desea hacer?        "<<endl<<endl;
    cout<<"1. Agregar un Estudiante."<<endl;
    cout<<"2. Ver estudiantes"<<endl;
    cout<<"3. Salir"<<endl<<endl;
    cin>>Opcion;
    return Opcion;
}