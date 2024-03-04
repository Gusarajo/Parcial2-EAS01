#include <iostream>
#include <string>
#include <cstdlib>  // Función rand().
#include <ctime>    // Función time() para generar una nueva seed aleatoria.
using namespace std;

#define log(x) cout << x << endl;

class Jugador{
    public:
    int vida;
    int ataque;
    string nombre;
    Jugador *ptrJugadorAtaque;

    Jugador(); 
    Jugador(int vida,int ataque,string nombre); 
    
    void atacar(Jugador *Pataque); 
};

int main()
{
    srand(time(0));  // Seed para generar valores aleatorios
    Jugador j1(50,10,"Gus");
    Jugador j2(40,10,"Gusarajo");
    do
    {
     j1.atacar(&j2);

    }while(j1.vida>0 || j2.vida>0);
    if (j1.vida>0)
    {
        cout<<"Gano:"<<j1.nombre;
    }else{
        cout<<"Gano:"<<j2.nombre;
    }



    return 0;
}

Jugador::Jugador(){
    this->vida=100;
    this->ataque=5;
    this->nombre="No definido";
}

Jugador::Jugador(int vida,int ataque,string nombre){
    if(vida>0 && vida<201)
    {
        this->vida=vida;
    }else if (vida>200)
    {
        this->vida=200;
    }else
    {
     this->vida=1;
    };
          if(ataque>0 && ataque<21)
    {
        this->ataque=ataque;
    }else if (vida>20)
    {
        this->ataque=20;
    }else
    {
     this->ataque=1;
    };
}

void Jugador::atacar(Jugador *Pataque){
    int x=rand()%10;
    if(x!=1 || x!=2)
    {
cout<<nombre<<" ataco a "<<Pataque->nombre<<" hizo "<<ataque<<" de daño, vida restante de "<<Pataque->nombre<<Pataque->vida-ataque;
    }
       if(x!=1 || x!=2)
       {
cout<<Pataque->nombre<<" ataco a "<<nombre<<" hizo "<<Pataque->ataque<<" de daño, vida restante de "<<nombre<<&vida-Pataque->ataque;
 this->ptrJugadorAtaque=Pataque;
    }  
}
