#ifndef item_h
#define item_h

#include <iostream>
using namespace std;

class item{
    public:
        item(){
            nombre = " ";
            peso = 0;
            descripcion = " ";
        };
        virtual void setNombre();
        //declaramos cuanto espacio dentro del inventario necesita el objeto
        virtual void setPeso();
        //establecemos una descricpion del objeto
        virtual void setDescripcion();
        //accion de encontrar el objeto
        virtual void find();
    protected:
        string nombre;
        int peso;
        string descripcion;
};

#endif