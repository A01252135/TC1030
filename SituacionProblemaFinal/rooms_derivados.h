//Sebastian Galvez A01251884
//Alam Lopez A01252135
//TC1030
//11/06/2021

#include "Room.h"

class room_inicio : public room{
    public:
        room_inicio(){};
        void setDescripcion(){
            descripcion = "Despertaste en esta habitacion de hospital sin saber porque.\nNo recuerdas nada.";
            cout<<descripcion<<endl;
        };
        void setPuertas(){
            puertas = 2;
            cout<<"Hay dos salidas. Una puerta que parece estar atascada y una ventana que lleva al patio.\nLa caida de la ventana esta un poco alta."<<endl;
        };
        int setEleccion(){
            cout<<"Cual deseas tomar?\nPuerta = 1 | Ventana = 2"<<endl;
            cin>>eleccion;
            return eleccion;
        };
        void addLlave(){};
        void addGun(){};
        void addMochila(){};
        void showLoot();
};
void room_inicio::showLoot(){
    cout<<"No hay nada en este cuarto"<<endl;
}

class room_patio : public room{
    public:
        room_patio(){};
        void setDescripcion(){
            descripcion = "Caiste desde la ventana al patio del hospital.";
            cout<<descripcion<<endl;
        };
        void setPuertas(){
            puertas = 2;
            cout<<"Hay un hoyo en la pared. Deseas entrar por el hoyo?";
        };
        int setEleccion(){
            cout<<"Cual es tu decision? \nsi = 1 | no = 2"<<endl;
            cin>>eleccion;
            return eleccion;
        };
        void addLlave(){};
        void addGun(){};
        void addMochila(){};
        void showLoot();
};
void room_patio::showLoot(){
    cout<<"No hay nada en este cuarto"<<endl;
}

class room_seg : public room{
    public:
        room_seg(){};
        void setDescripcion(){
            descripcion = "Entraste por el hoyo al cuarto para el personal de seguridad.";
            cout<<descripcion<<endl;
        };
        void setPuertas(){
            puertas = 2;
            cout<<"Hay una puerta azul reforzada y cerrada, tambien esta el hoyo por donde llegaste."<<endl;
        };
        int setEleccion(){
            cout<<"Cual deseas tomar?\nPuerta cerrada = 1 | Regresar = 2"<<endl;
            cin>>eleccion;
            return eleccion;
        };
        void addLlave();
        void addGun();
        void addMochila(){};
        void showLoot();
};
void room_seg::addLlave(){
    item *objeto;
    objeto = new llave();
    vec_items.push_back(objeto);
}
void room_seg::addGun(){
    item *objeto;
    objeto = new gun();
    vec_items.push_back(objeto);
}
void room_seg::showLoot(){
    cout<<"Encontraste un arma y una llave."<<endl;
    for (int i=0; i<vec_items.size(); i++){
        vec_items[i] -> showInventory();
    }
}

class room_pasillo1 : public room{
    public:
        room_pasillo1(){};
        void setDescripcion(){
            descripcion = "Entraste a un pasillo del hospital.";
            cout<<descripcion<<endl;
        };
        void setPuertas(){
            puertas = 3;
            cout<<"Hay una puerta bloqueada por un mueble gigante, otra puerta que parece estar abierta.";
        };
        int setEleccion(){
            cout<<" Cual eliges?\nPuerta abierta = 1 | Puerta bloqueada = 2"<<endl;
            cin>>eleccion;
            return eleccion;
        };
        void addLlave(){};
        void addGun(){};
        void addMochila(){};
        void showLoot();
};
void room_pasillo1::showLoot(){
    cout<<"No hay nada en este cuarto"<<endl;
}

class room_salida : public room{
    public:
        room_salida(){};
        void setDescripcion(){
            descripcion = "En este cuarto parece haber una salida del hospital.";
            cout<<descripcion<<endl;
        };
        void setPuertas(){
            puertas = 3;
            cout<<"Hay una puerta grande cerrada que necesita una llave y una puerta abierta.";
        };
        int setEleccion(){
            cout<<"Cual eliges?\nPuerta abierta = 1 | Puerta grande = 2"<<endl;
            cin>>eleccion;
            return eleccion;
        };
        void addLlave(){};
        void addGun(){};
        void addMochila(){};
        void showLoot();
};
void room_salida::showLoot(){
    cout<<"No hay nada en este cuarto"<<endl;
}

class room_limpieza : public room{
    public: 
        room_limpieza(){};
        void setDescripcion(){
            descripcion = "Entraste al cuarto de limpieza.";
            cout<<descripcion<<endl;
        };
        void setPuertas(){
            puertas = 3;
            cout<<"Solo hay una puerta, la puerta por donde llegaste.";
        };
        int setEleccion(){
            cout<<"Deseas regresar? si = 1 | no = 2"<<endl;
            cin>>eleccion;
            return eleccion;
        };
        void addLlave();
        void addGun(){};
        void addMochila();
        void showLoot();
};
void room_limpieza::addLlave(){
    item *objeto;
    objeto = new llave();
    vec_items.push_back(objeto);
}
void room_limpieza::addMochila(){
    item *objeto;
    objeto = new mochila();
    vec_items.push_back(objeto);
}
void room_limpieza::showLoot(){
    cout<<"Encontraste una mochila y una llave."<<endl;
    for (int i=0; i<vec_items.size(); i++){
        vec_items[i] -> showInventory();
    }
}