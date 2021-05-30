#ifndef personaje_h
#define personaje_h

#include <iostream>
using namespace std;

class personaje{
    public:
        personaje(){
            nombre = " ";
            inventario = 10;
            hp = 200;
            stamina = 100;
        };
        void setNombre();
        void take_dmg();
        void correr();
        void inv_upgrade();
        void showStatus();
    protected:
        string nombre;
        int hp;
        int stamina;
        int inventario;
};
void personaje::setNombre(){
    cout<<"Como se llama tu personaje? "<<endl;
    cin>>nombre;
}
//funcion para recibir dano, reduce la vida del personaje
void personaje::take_dmg(){
    hp = hp - 50;
    stamina = stamina - 10;
}
//funcion para correr, reduce la stamina del personaje
void personaje::correr(){stamina = stamina - 30;}
//funcion para mejorar el inventario
void personaje::inv_upgrade(){inventario = inventario + 5;}
//funcion para mostrar los atributos del personaje
void personaje::showStatus(){
    cout<<"NOMBRE: "<<nombre<<endl;
    cout<<"HP: "<<hp<<endl;
    cout<<"STAMINA: "<<stamina<<endl;
    cout<<"INVENTARIO: "<<inventario<<endl;
}

#endif