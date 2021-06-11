//Sebastian Galvez A01251884
//Alam Lopez A01252135
//TC1030
//11/06/2021

#include "Item.h"

class gun : public item{
    public:
        gun();
        void setNombre(){nombre = "Glock";};
        int setPeso(){
            peso = 5;
            return peso;
        };
        void setDescripcion(){descripcion = "Arma con 20 balas.";};
        void setBalas(){balas = 20;};
        void disparo(){balas = balas - 1;};
        void find(){cout<<"Encontraste un arma."<<endl;};
        void showInventory(){
            cout<<"Nombre: "<<nombre<<" Peso: "<<peso<<" Descripcion: "<<descripcion<<endl;
        };
    private:
        int balas;
};
gun::gun() : item(){
    nombre = "Glock";
    peso = 5;
    descripcion = "Arma con 20 balas.";
    balas = 20;
};