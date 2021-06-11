//Sebastian Galvez A01251884
//Alam Lopez A01252135
//TC1030
//11/06/2021

#ifndef Personaje_h
#define Personaje_h

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include "llave.h"
#include "gun.h"
#include "mochila.h"

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
        int inv();
        void inv_upgrade();
        void showStatus();
        void addLlave();
        void addGun();
        void addMochila();
        void showInv();
        //int check();
    protected:
        string nombre;
        int hp;
        int stamina;
        int inventario;
        int check_llave = 1;
        vector<item*> vec_items;
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
//funcion para modificar el inventario
int personaje::inv(){
    inventario;
    return inventario;
}
//funcion para mejorar el inventario
void personaje::inv_upgrade(){inventario = inventario + 5;}
//funcion para mostrar los atributos del personaje
void personaje::showStatus(){
    cout<<"NOMBRE: "<<nombre<<endl;
    cout<<"HP: "<<hp<<endl;
    cout<<"STAMINA: "<<stamina<<endl;
    cout<<"INVENTARIO: "<<inventario<<endl;
}
//Funciones para agregar objetos al inventario del personaje
void personaje::addLlave(){
    item *objeto;
    objeto = new llave();
    vec_items.push_back(objeto);
}
void personaje::addGun(){
    item *objeto;
    objeto = new gun();
    vec_items.push_back(objeto);
}
void personaje::addMochila(){
    item *objeto;
    objeto = new mochila();
    vec_items.push_back(objeto);
}
void personaje::showInv(){
    cout<<"INVENTARIO: "<<endl;
    for (int i=0; i<vec_items.size(); i++){
        vec_items[i] -> showInventory();
    }
}
//Funcion para comprobar si el jugador ya tiene la llave
/*int personaje::check(){
    if (find(vec_items.begin(), vec_items.end(), llave()) != vec_items.end()){
        check_llave = check_llave - 1;
        cout<<"No tienes la llave para abrir la puerta."<<endl;
    }
    return check_llave;
}*/

#endif