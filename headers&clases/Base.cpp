#include "base.h"
#include <iostream>
#include <string>
using namespace std;
Base::Base()
{

    this->vida = 100;
    this->ataque = 5;
    this->nombre = "No definido";
}

Base::Base(int vida, int ataque, string nombre)
{

    this->vida = vida;
    this->ataque = ataque;
    this->nombre = nombre;
}

void Base::atacar(Base &base)
{
    int ran = rand() % 5;
    if (ran == 0)
    {
        cout << this->nombre << " ataco a " << base.nombre << " pero fallo, vida restante de " << base.nombre << " = " << base.vida << endl;
    }
    else
    {
        base.vida -= this->ataque;
        cout << this->nombre << " ataco a " << base.nombre << " e hizo " << this->ataque << " de danio, vida restante de " << base.nombre << " = " << base.vida << endl;
    }
}