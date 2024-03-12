#ifndef base_h
#define base_h
#include <string>
using namespace std;
class Base
{
public:
    int vida;
    int ataque;
    string nombre;
    Base();
    Base(int vida, int ataque, string nombre);
    void atacar(Base &base);
};

#endif