#include "item.h"

class llave : public item{
    public:
        llave();
        void setNombre();
        void setPeso();
        void setDescripcion();
        void find();
};
void llave::setNombre(){
       nombre = "Llave";
       cout<<nombre<<endl;
}
void llave::setPeso(){
    peso = 1;
}
void llave::setDescripcion(){
    descripcion = "Abre puertas cerradas.";
    cout<<descripcion<<endl;
}
void llave::find(){
    cout<<"Encontraste una llave."<<endl;
}

class gun : public item{
    public:
        gun();
        void setNombre(){
            nombre = "Glock";
            cout<<nombre<<endl;
        };
        void setPeso(){peso = 5;};
        void setDescripcion(){
            descripcion = "Arma con 20 balas.";
            cout<<descripcion<<endl;
        };
        void setBalas(){
            balas = 20;
        };
        void disparo(){
            balas = balas - 1;
        };
        void find(){cout<<"Encontraste un arma."<<endl;};
    private:
        int balas;
};

class mochila : public item{
    public:
        mochila();
        void setNombre(){
            nombre = "Mochila Escolar";
            cout<<nombre<<endl;
        };
        void setPeso(){peso = 0;}
        void setDescripcion(){
            descripcion = "Extiende tu inventario por 5 puntos.";
            cout<<descripcion<<endl;
        };
        void find(){cout<<"Encontraste una mochila."<<endl;};
};