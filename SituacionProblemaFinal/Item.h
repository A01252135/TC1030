//Sebastian Galvez A01251884
//Alam Lopez A01252135
//TC1030
//11/06/2021

#ifndef Item_h
#define Item_h

class item{
    public:
        item();
        virtual void setNombre()=0;
        //declaramos cuanto espacio dentro del inventario necesita el objeto
        int setPeso();
        //establecemos una descricpion del objeto
        virtual void setDescripcion()=0;
        //mostrar en el inventario el objeto
        virtual void showInventory()=0;
    protected:
        string nombre;
        int peso;
        string descripcion;
};
item::item(){
    string nombre = " ";
    int peso = 0;
    string descripcion = " ";
}

#endif