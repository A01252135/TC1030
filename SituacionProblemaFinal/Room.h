//Sebastian Galvez A01251884
//Alam Lopez A01252135
//TC1030
//11/06/2021

#ifndef Room_h
#define Room_h

#include <iostream>
#include <vector>
using namespace std;
#include "Personaje.h"

class room{
    public:
        room();
        //establecemos una descricpion del cuarto
        virtual void setDescripcion()=0;
        //establecemos cuantas puertas hay en el cuarto
        virtual void setPuertas()=0;
        //funciones para agregar items al cuarto
        virtual void addLlave()=0;
        virtual void addGun()=0;
        virtual void addMochila()=0;
        //funcion que muestro los objetos dentro del cuarto
        virtual void showLoot()=0;
    protected:
        string descripcion;
        int loot;
        int puertas;
        int eleccion;
        int inspect;
        vector<item*> vec_items;
};

room::room(){
    descripcion = " ";
    loot = 0;
    puertas = 0;
    eleccion = 0;
}

#endif