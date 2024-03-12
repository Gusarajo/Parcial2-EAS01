#include "jugadores.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
Enimigo::Enimigo()
{
    /*
        Asignar 100 a hp y 5 a attack como valores default.
        Asignar 'No definido' al nombre como default.
    */
    this->vida = 100;
    this->attack = 5;
    this->nombre = "No definido";
}

Enimigo::Enimigo(int vida, int attack, string nombre)
{
    /*
        Asignar los par�metros recibidos a las propiedades del objeto.
        No se pueden asignar valores negativos a hp y attack.
        M�ximo 200 hp y 20 attack
    */
    this->vida = vida;
    this->attack = attack;
    this->nombre = nombre;
}
