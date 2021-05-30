#include "room.h"

class room_inicio : public room{
    public:
        room_inicio();
        void setDescripcion(){
            descripcion = "Despertaste en esta habitacion de hospital sin saber porque.";
            cout<<descripcion<<endl;
        };
        void setLoot(){
            loot = 0;
            cout<<"No hay nada en este cuarto"<<endl;
        };
        void setPuertas(){
            puertas = 2;
            cout<<"Hay dos salidas. Una puerta y una ventana que lleva al patio. Cual deseas tomar?"<<endl;
        };
};

class room_patio : public room{
    public:
        void setDescripcion(){
            descripcion = "Patio del hospital.";
            cout<<descripcion<<endl;
        };
        void setLoot(){
            loot = 0;
            cout<<"No hay nada en este cuarto."<<endl;
        };
        void setPuertas(){
            puertas = 2;
            cout<<"Hay un hoyo en la pared y la ventana por donde llegaste. Deseas entrar por el hoyo?";
        };
};

class room_seg : public room{
    public:
        void setDescripcion(){
            descripcion = "Cuarto para el personal de seguridad.";
            cout<<descripcion<<endl;
        };
        void setLoot(){
            loot = 2;
            cout<<"Encontraste un arma y una llave."<<endl;
        };
        void setPuertas(){
            puertas = 2;
            cout<<"Hay una puerta cerrada y el hoyo por donde llegaste. Deseas salir por el hoyo?";
        };
};

class room_pasillo1 : public room{
    public:
        void setDescripcion(){
            descripcion = "Pasillo del hospital.";
            cout<<descripcion<<endl;
        };
        void setLoot(){
            loot = 0;
            cout<<"No hay nada en este cuarto."<<endl;
        };
        void setPuertas(){
            puertas = 3;
            cout<<"Hay una puerta cerrada, una puerta abierta y la puerta por donde llegaste. Cual eliges?";
        };
};

class room_salida : public room{
    public:
        void setDescripcion(){
            descripcion = "Pasillo del hospital.";
            cout<<descripcion<<endl;
        };
        void setLoot(){
            loot = 0;
            cout<<"No hay nada en este cuarto."<<endl;
        };
        void setPuertas(){
            puertas = 3;
            cout<<"Hay una puerta cerrada, una puerta abierta y la puerta por donde llegaste. Cual eliges?";
        };
};

class room_limpieza : public room{
    public: 
        void setDescripcion(){
            descripcion = "Cuarto de limpieza.";
            cout<<descripcion<<endl;
        };
        void setLoot(){
            loot = 2;
            cout<<"Hay un llave y una mochila."<<endl;
        };
        void setPuertas(){
            puertas = 3;
            cout<<"Hay una puerta cerrada, una puerta abierta y la puerta por donde llegaste. Cual eliges?";
        };
};