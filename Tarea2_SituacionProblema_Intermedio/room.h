#ifndef room_h
#define room_h

#include <iostream>
using namespace std;

class room{
    public:
        room(){
            descripcion = " ";
            loot = 0;
            puertas = 0;
        };
        //establecemos una descricpion del cuarto
        virtual void setDescripcion();
        //establecemos cuantos objetos hay en el cuarto
        virtual void setLoot();
        //establecemos cuantas puertas hay en el cuarto
        virtual void setPuertas();
    protected:
        string descripcion;
        int loot;
        int puertas;
};

#endif