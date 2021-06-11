//Situacion Problema
//Sebastian Galvez A01251884
//Alam Lopez A01252135
//TC1030
//11/06/2021

#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

#include "rooms_derivados.h"

int main(){
    //Comandos para controlar el juego
    string command;
    cout<<"Lista de comandos: "<<endl;
    cout<<"salir | buscar | inventario"<<endl;
    
    //Declaracion del personaje
    personaje player;
    player.setNombre();
    player.showStatus();

    cout<<"------------START------------ "<<endl;
    //Declaracion de los cuartos
    room_inicio start;
    start.setDescripcion();
    //While para saber cuando salir del cuarto
    int stay1 = 1;
    while (stay1 == 1){
        cout<<"Ingresa un comando: | Comandos disponibles: salir, buscar, inventario"<<endl;
        cin>>command;
        //Funcion para buscar items dentro del cuarto
        if (command == "buscar"){
            start.showLoot();
        }
        //Funcion para revisar el inventario del player
        if (command == "inventario"){
            player.showInv();
        }
        //if y while para salir del cuarto
        if (command == "salir"){
            start.setPuertas();
            int choice{start.setEleccion()};
            while (choice != 2){
                cout<<"La puerta esta atorada con algo del otro lado, busca otro camino."<<endl;
                cin>>choice;
            }
        //if para saber si ya salimos del cuarto
        if (choice == 2){
            stay1 = stay1 - 1;
        }
        }
    }
    
    room_patio patio;
    patio.setDescripcion();
    int stay2 = 1;
    while (stay2 == 1){
        cout<<"Ingresa un comando: | Comandos disponibles: salir, buscar, inventario"<<endl;
        cin>>command;
        if (command == "buscar"){
            patio.showLoot();
        }
        if (command == "inventario"){
            player.showInv();
        }
        if (command == "salir"){
            patio.setPuertas();
            int choice1{patio.setEleccion()};
            while (choice1 != 1){
                cout<<"No puedes regresar por la ventana, esta muy alta. El hoyo es el unico camino."<<endl;
                cin>>choice1;
            }
        if (choice1 == 1){
            stay2 = stay2 - 1;
        }
        }
    }

    room_seg security;
    security.setDescripcion();
    int stay3 = 1;
    security.addGun();
    security.addLlave();
    while (stay3 == 1){
        cout<<"Ingresa un comando: | Comandos disponibles: salir, buscar, inventario"<<endl;
        cin>>command;
        if (command == "buscar"){
            security.showLoot();
            player.addGun();
            player.addLlave();
        }
        if (command == "inventario"){
            player.showInv();
        }
        if (command == "salir"){
            security.setPuertas();
            int choice3{security.setEleccion()};
            while (choice3 != 1){
                cout<<"No tiene sentido regresar, no hay otra salida en el patio."<<endl;
                cin>>choice3;
            }
        if (choice3 == 1){
            stay3 = stay3 - 1;
        }
        }
    }

    room_pasillo1 hall;
    hall.setDescripcion();
    int stay4 = 1;
    while (stay4 == 1){
        cout<<"Ingresa un comando: | Comandos disponibles: salir, buscar, inventario"<<endl;
        cin>>command;
        if (command == "buscar"){
            hall.showLoot();
        }
        if (command == "inventario"){
            player.showInv();
        }
        if (command == "salir"){
            hall.setPuertas();
            int choice4{hall.setEleccion()};
            while (choice4 != 1){
                cout<<"No puedes mover el mueble, busca otro camino."<<endl;
                cin>>choice4;
            }
        if (choice4 == 1){
            stay4 = stay4 - 1;
        }
        }
    }

    room_salida exit;
    exit.setDescripcion();
    int stay5 = 1;
    while (stay5 == 1){
        cout<<"Ingresa un comando: | Comandos disponibles: salir, buscar, inventario"<<endl;
        cin>>command;
        if (command == "buscar"){
            exit.showLoot();
        }
        if (command == "inventario"){
            player.showInv();
        }
        if (command == "salir"){
            exit.setPuertas();
            int choice5{exit.setEleccion()};
            while (choice5 != 1){
                cout<<"Necesitas una llave para salir del hospital, busca la llave."<<endl;
                cin>>choice5;
            }
        if (choice5 == 1){
            stay5 = stay5 - 1;
        }
    }
    }

    room_limpieza clean;
    clean.setDescripcion();
    int stay6 = 1;
    clean.addLlave();
    clean.addMochila();
    while (stay6 == 1){
        cout<<"Ingresa un comando: | Comandos disponibles: salir, buscar, inventario"<<endl;
        cin>>command;
        if (command == "buscar"){
            clean.showLoot();
            player.addLlave();
            player.addMochila();
            player.inv_upgrade();
        }
        if (command == "inventario"){
            player.showInv();
        }
        if (command == "salir"){
            clean.setPuertas();
            int choice6{clean.setEleccion()};
            while (choice6 != 1){
                cout<<"No hay otra salida."<<endl;
                cin>>choice6;
            }
        if (choice6 == 1){
            stay6 = stay6 - 1;
        }
    }
    }

    exit.setDescripcion();
    int stay7 = 1;
    while (stay7 == 1){
        cout<<"Ingresa un comando: | Comandos disponibles: salir, buscar, inventario"<<endl;
        cin>>command;
        if (command == "buscar"){
            exit.showLoot();
        }
        if (command == "inventario"){
            player.showInv();
        }
        if (command == "salir"){
            exit.setPuertas();
            int choice7{exit.setEleccion()};
            while (choice7 != 2){
                cout<<"Ya entraste al cuarto de limpieza, no tiene sentido regresar."<<endl;
                cin>>choice7;
        }
        if (choice7 == 2){
            stay7 = stay7 - 1;
        }
    }
    }

    cout<<"Has logrado escapar del hospital! Felicidades!"<<endl;

    return 0;
}