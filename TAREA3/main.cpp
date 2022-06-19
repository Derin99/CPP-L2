#include <iostream>
#include "starShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;
    system("cls");

 
cout << "**************" << endl;
cout << "MENU DE JUEGOS" << endl;
cout << "**************" << endl << endl;

        cout <<  "Seleccione un juego" << endl;

        cout <<  "1 - StarShip" << endl;

        cout <<  "2 - Snake" << endl; 

        cout <<  "Ingrese un numero del menu para seleccionar un juego: " << endl;

cin >> opcion;
     
    switch(opcion) 
{
    case 1: 
    {
        system("cls");
        starShip();

        break;
    }
    

    case 2: 
    {
        system("cls");
        snake();

        break;
    }
    
    
    default:
    break;
}

    return 0;
}