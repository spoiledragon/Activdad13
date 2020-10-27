#include <iostream>
#include "Arra.h"
#include <string>

using namespace std;

Arra<string>dinamico;


int main(){
    cout<<"Añadiendo 4 elementos al final"<<endl;
    for (size_t i = 0; i < 4; i++){
        dinamico.insertafin("Insertando al final numero: "+to_string(i+1));
    }
    cout<<endl<<"Añadiendo 4 elementos al inicio"<<endl;
    for (size_t i = 0; i < 4; i++){
        dinamico.insertaini("Insertando al inicio numero:"+to_string(i+1));
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
    cout<<endl<<"Borramos al inicio , fin y en la posicion 1"<<endl;
    dinamico.borrarini();
    dinamico.borrarfin();
    dinamico.borrarx(1);

    cout<<endl<<"Mostrando elementos"<<endl;
    for (size_t i = 0; i < dinamico.size(); i++){
        cout<<dinamico[i]<<endl;
    }
    dinamico.~Arra();


    return 0;
}