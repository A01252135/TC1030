//Sebastian Galvez A01251884
//Alam Lopez A01252135
//TC1030
//11/06/2021

#include "Item.h"

class llave : public item{
    public:
        llave();
        void setNombre(){nombre = "Llave";};
        int setPeso(){
            peso = 1;
            return peso;
        };
        void setDescripcion(){descripcion = "Abre puertas cerradas.";};
        void find(){cout<<"Encontraste una llave."<<endl;};
        void showInventory(){
            cout<<"Nombre: "<<nombre<<" Peso: "<<peso<<" Descripcion: "<<descripcion<<endl;
        };
};
llave::llave() : item(){
    nombre = "Llave";
    peso = 1;
    descripcion = "Abre puertas cerradas.";
};