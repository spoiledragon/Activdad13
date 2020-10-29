#ifndef ARRA_H_INCLUDED
#define ARRA_H_INCLUDED
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

template <class T>
class Arra
{
private:
    T *array;
    size_t tam;
    size_t cont;

    const static size_t Max=5;
    
    
public:

    

    Arra();
    ~Arra();
    size_t size();
    void expancion();
    
    void insertafin(const T& s);
    void insertaini(const T& s);
    void insertarx(const T& s,const int& x);
    void borrarini();
    void borrarfin();
    void borrarx(const int& x);
    T* buscar(const T& v);

    string operator[](size_t p)
    {
        return array[p];
    }


    friend Arra<T>& operator <<(Arra<T> &a,const T& v){
        a.insertaini(v);
        return a;
    }

};

    template <class T> 
    Arra<T>::Arra(){

    array = new T[Max];
    cont=0;
    tam=Max;

    }

    template<class T>
    Arra<T>::~Arra(){
        delete[] array;
    }

    template<class T>
    void Arra<T>::insertafin(const T& s){
    //comprobacion para clonar todo el arreglo si es necesario
        if(cont==tam){
            expancion();
        }
        array[cont]=s;
        cont++;
    }

    template<class T>
    void Arra<T>::insertaini(const T& s){
        if(cont==tam){
        expancion();
        }
        for(int i=cont; i>0; i--){
        array[i]=array[i-1];
        }   
        array[0]=s;
        cont++;

    }

     template<class T>
    size_t Arra<T>::size(){
        return cont;
    }

    template<class T>
    void Arra<T>::expancion(){
        T *nuevo= new T[tam+Max];
        //copiamos lo que tiene el arreglo anterior
        for(size_t i=0;i<cont;i++){
        nuevo[i]=array[i];
        }
        delete[] array; //destruimos nuestro antiguo arreglo uwu
        array = nuevo; //pero que paso papi , aqui revive y mas poderoso
        tam=+5;
    }

    template<class T>
    void Arra<T>::insertarx(const T& s,const int& x){
        if(x>=cont){
            cout<<"Posicion no valida"<<endl;
            return;
        }

        if(cont==tam){
        expancion();
        }

        for (size_t i = cont; i > x; i--)
        {
            array[i]=array[i-1];
        }

        array[x]=s;
        cont++;
    }

    template<class T>
    void Arra<T>::borrarx(const int& x){

        if(x>=cont){
            cout<<"Posicion no valida"<<endl;
            return;
        }

        for (size_t i = x; i<cont-1; i++)
        {
            array[i]=array[i+1];
        }
        cont--;

    }

    template<class T>
    void Arra<T>::borrarini(){
        if(cont==0){
            cout<<"arreglo sin elementos"<<endl;
            return;
        }

        for (size_t i = 0; i <cont-1; i++){
            array[i]=array[i+1];
        }
        cont--;
    }

    template<class T>
    void Arra<T>::borrarfin(){
        
        if(cont==0){
        cout<<"arreglo sin elementos"<<endl;
        return;
        }
        cont--;

    }

    template<class T>
    T* Arra<T>::buscar(const T& v){

       for (size_t i = 0; i < cont; i++)
       {
           if(v==array[i]){
               return &array[i];
           }
       }
       
        return nullptr;
    }
    //sobrecarga

    





#endif