//Sebastian Galvez A01251884
//Alam Lopez A01252135
//TC1030
//11/06/2021

#include "Item.h"

class mochila : public item{
    public:
        mochila();
        void setNombre(){nombre = "Mochila Escolar";};
        void setPeso(){peso = 0;}
        void setDescripcion(){descripcion = "Extiende tu inventario por 5 puntos.";};
        void find(){cout<<"Encontraste una mochila."<<endl;};
        void showInventory(){
            cout<<"Nombre: "<<nombre<<" Peso: "<<peso<<" Descripcion: "<<descripcion<<endl;
        };
};
mochila::mochila() : item(){
    nombre = "Mochila Escolar";
    peso = 0;
    descripcion = "Extiende tu inventario por 5 puntos.";
};