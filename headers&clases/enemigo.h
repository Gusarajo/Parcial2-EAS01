#ifndef enemigo
#define enemigo
#include "jugadores.h"
class Enimigo{

   public:
   int vida, attack;
   string nombre;


    Enimigo();
    Enimigo(int vida, int attack, string nombre);

    void atacarJugador(Jugador &j2);
};

#endif // enemigo
