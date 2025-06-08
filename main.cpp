////Programa de Regina y Jin
// A01802688 A01803027

#include "Pelicula.hpp"
#include "Netflix.hpp"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // Géneros son drama, acción, misterio.
    Netflix netflix;
    Pelicula Lalaland(1,"Lalaland","2h 8min","drama");
    Video* vid = &Lalaland;

    //con este operador sobrecargado califico mi película
    Lalaland += 1;
    Lalaland += 3;

    int opc = 0;

    //do while para que el menu se repita
    do
    {
        cout << "\n Netflix \n";
        cout << "********************************\n";
        cout << "\t1. Mostrar todos los videos con sus calificaciones\n";
        cout << "\t2. Mostrar todas las películas con sus calificaciones\n";
        cout << "\t3. Mostrar episodios de una serie específica\n";
        cout << "\t4. Mostrar películas por género\n";
        cout << "\t5. Mostrar series por género\n";
        cout << "\t0. Salir\n";
        cout << "********************************\n";
        cout << "Ingrese su opción: ";

        cin >> opc;

        //switch de las opciones del menú

        switch(opc) {

            //1. Mostrar todos los videos con sus calificaciones
            case 1: 
                for (int i = 0; i < netflix.videos.size(); i++)
                {
                    netflix.videos[i]->mostrarInfo();
                }
                break;

            case 2: //2. Mostrar todas las películas con sus calificaciones
                for (int i = 0; i < netflix.videos.size(); i++)
                {
                    if (netflix.videos[i]->soyPelicula()== true)
                        {
                            netflix.videos[i]->mostrarInfo();
                        }
                }
                break;

            //3. Mostrar episodios de una serie específica
            case 3: 
            {
                break;
            }

            //4. Mostrar películas por género
            case 4: 
            {
                int genreNum = 0;
                string genre;

                cout << "\nSeleccione un género:\n";
                cout << "\t1. Drama\n";
                cout << "\t2. Acción\n";
                cout << "\t3. Misterio\n";
                cout << "\nGénero deseado: ";
                cin >> genreNum;

                //Géneros son drama, acción, misterio.
                switch (genreNum)
                {
                case 1:
                    genre = "Drama";
                    for (int i = 0; i < netflix.videos.size(); i++)
                    {
                        if (netflix.videos[i]->getGenero() == "Drama")
                        {
                            netflix.videos[i]->mostrarInfo();
                        }                        
                    }
                    break;
                case 2:
                    genre = "Acción";
                    break;
                case 3:
                    genre = "Misterio";
                    break;
                default:
                    cout << "Género no válido.\n";
                    break;   
                }
                break;
            }

            //5. Mostrar series por género
            case 5:
            { 
                break;
            }

            // 0. Salir
            case 0: 
                cout << "Saliendo del programa...\n";
                break;

            default:
                cout << "Opción inválida. Intente de nuevo.\n";
        }
    } while (opc != 0);
    

    return 0;
}
