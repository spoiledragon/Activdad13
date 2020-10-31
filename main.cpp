#include <iostream>
#include "Arra.h"
#include "Computadora.h"
#include <string>

using namespace std;



int main(){

    /*cout<<"Añadiendo 4 elementos al final"<<endl;
    for (size_t i = 0; i < 4; i++){
        dinamico.insertafin(to_string(i+100));
    }
    cout<<endl<<"Añadiendo 4 elementos al inicio"<<endl;
    for (size_t i = 0; i < 4; i++){
        dinamico.insertaini(to_string(i+1));
    }
    cout<<endl<<"Mostrando elementos"<<endl;
    for (size_t i = 0; i < dinamico.size(); i++){
        cout<<dinamico[i]<<endl;
    }
    cout<<endl<<"anexando elemetos a la posicion 2"<<endl;
    dinamico.insertarx("Anexado en la poscicion 2",2);
    cout<<"Mostrando elementos"<<endl;
    for (size_t i = 0; i < dinamico.size(); i++){
        cout<<dinamico[i]<<endl;
    }
    //borrar
    cout<<endl<<"Borramos al inicio , fin y en la posicion 1"<<endl;
    dinamico.borrarini();
    dinamico.borrarfin();
    dinamico.borrarx(1);

   
    //busqueda
    string *v =dinamico.buscar("100");
    *v= "300";
    cout<<endl<<v<<" "<<*v<<endl;

    //muestra
    cout<<endl<<"Mostrando elementos"<<endl;
    for (size_t i = 0; i < dinamico.size(); i++){
        cout<<dinamico[i]<<endl;
    }
    dinamico.~Arra();
    
    */
    
    Arra<Computador>Computadoras;

    Computador c1("Snapdragon","Linux","Celular",8);
    Computador c2("Core i9","Sierra Os","Workstation",64);
    Computador c3("amd a8asdasd","Windows 7","servidor",8);
    Computador c4("Core i9","Windows xp","Pc Nasa",64);
    Computador c5("Core i9","Windows 10","Servidor Casero",128);
    
    Computadoras <<c5<<c1<<c2<<c3<<c4<<c5<<c5<<c5<<c5;

    Computador c6("aryzen20","Windows 70","sx",8);

    
    Computador *ptr = Computadoras.buscar(c1);
    
    if(ptr != nullptr){
        cout << *ptr <<endl;}
        else{
        cout<<"No existe esa computadora"<<endl;
        }


    Computador *ptr2 = Computadoras.buscar(c6);
    if(ptr2 != nullptr){
        cout << *ptr2 <<endl;}
        else{
        cout<<"No existe esa computadora"<<endl;
        }
    
    

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