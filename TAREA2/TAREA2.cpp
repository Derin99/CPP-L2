#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

string libros[39][3];

void cargarLibros() {
    // Arreglo con categoria y descripcion
	libros[0][0] = "Algoritmos"; libros[0][1] = "Algoritmos y Programacion (Guia para docentes)"; libros[0][2] = "Xiomara Castro" ;
	libros[1][0] = "Algoritmos"; libros[1][1] = "Apuntes de Algoritmos y Estructuras de Datos"; libros[1][2] = "Mel Zelaya" ;
	libros[2][0] = "Algoritmos"; libros[2][1] = "Breves Notas sobre Analisis de Algoritmos"; libros[2][2] = "Beatriz Valle" ;
	libros[3][0] = "Algoritmos"; libros[3][1] = "Fundamentos de Informatica y Programacion"; libros[3][2] = "Jorge Calix" ;
	libros[4][0] = "Algoritmos"; libros[4][1] = "Temas selectos de estructuras de datos"; libros[4][2] = "Rommell Quioto" ;
	libros[5][0] = "Algoritmos"; libros[5][1] = "Teoria sintactico-gramatical de objetos"; libros[5][2] = "Andy Najar" ;
	libros[6][0] = "Base de Datos"; libros[6][1] = "Apuntes de Base de Datos 1"; libros[6][2] = "Jerry Benstong" ;
	libros[7][0] = "Base de Datos"; libros[7][1] = "Base de Datos (2005)"; libros[7][2] = "Arnol Schawzznerg" ;
	libros[8][0] = "Base de Datos"; libros[8][1] = "Base de Datos (2011)"; libros[8][2] = "Rubilio Castillo" ;
	libros[9][0] = "Base de Datos"; libros[9][1] = "Base de Datos Avanzadas (2013)"; libros[9][2] = "Eduardo Maldonado" ;
	libros[10][0] = "Base de Datos"; libros[10][1] = "Diseno Conceptual de Bases de Datos"; libros[10][2] = "Ariela Caceres" ;
	libros[11][0] = "Ciencia Computacional"; libros[11][1] = "Breves Notas sobre Automatas y Lenguajes"; libros[11][2] = "Elsa Oseguera" ;
	libros[12][0] = "Ciencia Computacional"; libros[12][1] = "Breves Notas sobre Teoria de la Computacion"; libros[12][2] = "Bily Fernandez" ;
	libros[13][0] = "Metodologias de desarrollo de software"; libros[13][1] = "Compendio de Ingenieria del Software"; libros[13][2] = "Adan Palacios" ;
	libros[14][0] = "Metodologias de desarrollo de software"; libros[14][1] = "Diseno agil con TDD"; libros[14][2] = "Ramon Nunez" ;
	libros[15][0] = "Metodologias de desarrollo de software"; libros[15][1] = "Ingenieria de Software: Una Guia para Crear Sistemas de Informacion"; libros[15][2] = "Ferrari" ;
	libros[16][0] = "Metodologias de desarrollo de software"; libros[16][1] = "Scrum & Extreme Programming (para programadores)"; libros[16][2] = "JOH" ;
	libros[17][0] = "Metodologias de desarrollo de software"; libros[17][1] = "Scrum y XP desde las trincheras"; libros[17][2] = "Rafael Callejas" ;
	libros[18][0] = "Miscelaneos"; libros[18][1] = "97 cosas que todo programador deberia saber"; libros[18][2] = "Shin Fujiyama" ;
	libros[19][0] = "Miscelaneos"; libros[19][1] = "Docker"; libros[19][2] = "Karla Ortega" ;
	libros[20][0] = "Miscelaneos"; libros[20][1] = "El camino a un mejor programador"; libros[20][2] = "Michael Jackson" ;
	libros[21][0] = "Miscelaneos"; libros[21][1] = "Introduccion a Docker"; libros[21][2] = "David Zelaya" ;
	libros[22][0] = "Miscelaneos"; libros[22][1] = "Programacion de videojuegos SDL"; libros[22][2] = "Eva Lopez" ;
	libros[23][0] = "PHP"; libros[23][1] = "Manual de estudio introductorio al lenguaje PHP procedural"; libros[23][2] = "Luis Moran" ;
	libros[24][0] = "PHP"; libros[24][1] = "PHP y Programacion orientada a objetos"; libros[24][2] = "Vicky Luna" ;
	libros[25][0] = "PHP"; libros[25][1] = "POO y MVC en PHP"; libros[25][2] = "Lily Goodma" ;
	libros[26][0] = "PHP"; libros[26][1] = "Silex, el manual oficial"; libros[26][2] = "Romeo Santos" ;
	libros[27][0] = "PHP"; libros[27][1] = "Symfony 1.4, la guia definitiva"; libros[27][2] = "Marcos Bogran" ;
	libros[28][0] = "PHP"; libros[28][1] = "Symfony 2.4, el libro oficial"; libros[28][2] = "Lilian Sanchez" ;
	libros[29][0] = "Python"; libros[29][1] = "Aprenda a pensar como un programador (con Python)"; libros[29][2] = "Anuel brr" ;
	libros[30][0] = "Python"; libros[30][1] = "Doma de Serpientes para Ninos: Aprendiendo a Programar con Python"; libros[30][2] = "Bad Bunny" ;
	libros[31][0] = "Python"; libros[31][1] = "Inmersion en Python"; libros[31][2] = "Ariel Ortiz" ;
	libros[32][0] = "Python"; libros[32][1] = "Inmersion en Python 3"; libros[32][2] = "Ever Sanchez" ;
	libros[33][0] = "Python"; libros[33][1] = "Introduccion a la programacion con Python"; libros[33][2] = "Victor Andino" ;
	libros[34][0] = "Python"; libros[34][1] = "Introduccion a Programando con Python"; libros[34][2] = "Hilton Arzo" ;
	libros[35][0] = "Python"; libros[35][1] = "Python instantaneo (1999)"; libros[35][2] = "Roman Mario" ;
	libros[36][0] = "Python"; libros[36][1] = "Python para ciencia e ingenieria"; libros[36][2] = "Nelly Soliman" ;
	libros[37][0] = "Python"; libros[37][1] = "Python para principiantes"; libros[37][2] = "David Bardales" ;
	libros[38][0] = "Python"; libros[38][1] = "Python para todos"; libros[38][2] = "Suyapa Martinez" ;
}


int main(int argc, char const *argv[])
{
    cargarLibros();

    srand (time(NULL));
    
    bool salir = false;

    while (salir == false)
    {
        string buscar = "";
        system("cls");
        cout << "Ingrese la descripcion del libro que busca: ";
        cin >> buscar;

        // busqueda
        for (int i = 0; i < 39; i++)
        {
            string libro = libros[i][1];
            string libroEnminuscula = libro;
            // transformamos a minuscula los string buscar y libro
            transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);
            
            string autor = libros[i][2];
            string autorEnminuscula = autor;
            // transformamos a minuscula los string buscar y libro
            transform(autorEnminuscula.begin(), autorEnminuscula.end(), autorEnminuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);

            if (libroEnminuscula.find(buscar) != string::npos  || autorEnminuscula.find(buscar) != string::npos) {
                cout << "Libro encontrado: " << libro << endl;

                cout << "Tambien te sugerimos estos libros: " << endl;

                int sugerencia1 = rand() % 38 + 1;
                int sugerencia2 = rand() % 38 + 1;
                int sugerencia3 = rand() % 38 + 1;

                cout << " Sugerencia 1: " << libros[sugerencia1][1] << endl;
                cout << " Sugerencia 2: " << libros[sugerencia2][1] << endl;
                cout << " Sugerencia 3: " << libros[sugerencia3][1] << endl;

                salir = true;
                break;
            }
            if (autorEnminuscula.find(buscar) != string::npos) {
                cout << "Libro encontrado: " << libro << endl;

                cout << "Tambien te sugerimos estos libros: " << endl;

                int sugerencia1 = rand() % 38 + 1;
                int sugerencia2 = rand() % 38 + 1;
                int sugerencia3 = rand() % 38 + 1;

                cout << " Sugerencia 1: " << libros[sugerencia1][1] << endl;
                cout << " Sugerencia 2: " << libros[sugerencia2][1] << endl;
                cout << " Sugerencia 3: " << libros[sugerencia3][1] << endl;

                salir = true;
                break;
            }
        }
        

        if (salir == false) {
            char continuar = 'n';

            while(true) {
                system("cls");
                cout << "No se encontro el libro que busca. Desea continuar? s/n ";
                cin >> continuar;

                if (continuar == 's' || continuar == 'S') {
                    break;
                } else if (continuar == 'n' || continuar == 'N') {
                    salir = true;
                    break;
                }
            }
        }
    }
    

    return 0;
}