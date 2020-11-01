#include <iostream>
#include "Arra.h"
#include "Computadora.h"
#include <string>

using namespace std;

int main(){

    
    Arra<Computador>Computadoras;
    cout<<"Añadimos las maquiinas"<<endl;
    Computador c1("Snapdragon","Linux","Celular",8);
    Computador c2("Core i9","Sierra Os","Workstation",64);
    Computador c3("amd a8asdasd","Linux","master instinct",2048);
    Computador c4("Core i9","Windows xp","Pc Nasa",64);
    Computador c5("Core i9","Windows 10","Servidor Casero",128);
    
    Computadoras <<c5<<c1<<c2<<c3<<c4<<c5<<c5<<c5<<c5<<c3;
    cout<<"creamos la computadora 6 mas no la agregamos"<<endl;
    Computador c6("aryzen20","Windows 70","sx",8);

    cout<<"buscamos la computadora c3"<<endl;
    Computador *ptr = Computadoras.buscar(c3);
    if(ptr != nullptr){
        cout << *ptr <<endl;}
        else{
        cout<<"No existe esa computadora"<<endl;
        }

    cout<<"buscamos la computadora c6"<<endl;
    Computador *ptr2 = Computadoras.buscar(c6);
    if(ptr2 != nullptr){
        cout << *ptr2 <<endl;}
        else{
        cout<<"No existe esa computadora"<<endl;
        }


    cout<<"buscamos todas las computadoras c5"<<endl;
    Arra<Computador*>ptrs=Computadoras.buscar_todos(c5);
    if(ptrs.size()>0){
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            Computador *c= ptrs[i];
            cout<<*c<<endl;
        }
    }else{
        cout<<"No existen esas computadora"<<endl;}

    return 0;
}