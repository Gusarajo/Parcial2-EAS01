#ifndef jugadores
#define jugadores
#include "base.h"
#include <string>
using namespace std;
class Jugador : public Base
{
public:
    Jugador *atacadoPor;

    Jugador() : Base()
    {
        atacadoPor = nullptr;
    }
    Jugador(int vida, int ataque, string nombre) : Base(vida, ataque, nombre)
    {
        atacadoPor = nullptr;
    }

    void atacarJugador(Jugador &j2);
};

#endif // jugadores
