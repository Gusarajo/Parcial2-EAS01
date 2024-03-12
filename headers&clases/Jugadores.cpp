#include "jugadores.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void Jugador::atacarJugador(Jugador &j2)
{
    atacar(j2);
    j2.atacadoPor = this;
}