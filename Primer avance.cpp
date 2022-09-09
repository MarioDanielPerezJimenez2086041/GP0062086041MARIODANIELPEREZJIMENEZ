// Primer avance.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
#include <math.h>
#include <string>
int main()
{
    string Numarticulo, juego, genero, consola, lanzamiento, clas, carac, descripcion;
    int opc;
    float precio, IVA;
    std::cout << "\t*** BIENVENIDO A POWER FOX GAMES STORE *** \n";
    cout << "1.-Agregar articulo\n 2.-Limpiar pantalla\n 3.-Salir\n"; 
    cin >> opc;
    switch (opc)
    {
    case 1:
        cout << "Ingrese el numero de su articulo" << endl;
        cin >> Numarticulo;
        cout << "Ingrese el nombre del juego" << endl;
        cin.ignore();
        getline(cin,juego);
        cout << "Ingrese la clasificacion" << endl;
        cin >> clas;
        cout << "Ingrese el genero de su juego" << endl;
        cin.ignore();
        getline(cin,genero);
        cout << "Ingrese la plataforma del juego" << endl;
        cin.ignore();
        getline(cin,consola);
        cout << "Ingrese el dia de lanzamiento del juego" << endl;
        cin.ignore();
        getline(cin,lanzamiento);
        cout << "Ingrese las caracteristicas del juego" << endl;
        cin.ignore();
        getline(cin,carac);
        cout << "Ingrese la descripcion del juego" << endl;
        cin.ignore();
        getline(cin,descripcion);
        cout << "Ingrese el precio del juego" << endl;
        cin >> precio;
        IVA = precio * 1.16;
        cout << "El precio de su juego con IVA es de:\n " << IVA <<endl;
        system("pause");
        system("cls");
        return main();
        break;

    case 2:
        system("cls");
        system("pause");
        break;

    case 3:
        system("cls");
        cout << "Gracias por visitar POWER FOX GAMES STORE" << endl;
        system("pause");
        break;
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
