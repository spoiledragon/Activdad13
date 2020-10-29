#ifndef COMPUTADORA_H_INCLUDED
#define COMPUTADORA_H_INCLUDED

#include <iostream>
#include <string>

class Computador{

private:
    std::string procesador;
    std::string sistema;
    std::string nombre;
    int ram;

public:
    //getters
    Computador();
    Computador(const std::string &procesador,const std::string &So,const std::string &Nombre,const int &ram);
    //setters
    void setProcesador(const std::string&);
    void setSistema(const std::string&);
    void setRam(const int&);
    void setNombre(const std::string&);

    std::string getProcesador() const;
    std::string getNombre()     const;
    std::string getSistema()    const;
    int getRam()                const;

};


#endif // COMPUTADORA_H_INCLUDED
