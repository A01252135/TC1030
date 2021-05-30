#include <iostream>
using namespace std;
#include "personaje.h"
#include "items_derivados.h"
#include "rooms_derivados.h"

int main(){
    //Declaramos nuestro personaje y mediante funciones cambiamos sus atributos
    personaje prota;
    prota.setNombre();
    prota.showStatus();
    prota.take_dmg();
    prota.correr();
    prota.inv_upgrade();
    //showStatus despues de recibir dano, correr y mejorar el inve
    prota.showStatus();

    return 0;
}