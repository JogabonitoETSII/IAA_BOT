#pragma once
#include <iostream>
#include "Estado.hpp"
using namespace std;
class Bot {
    // Estado s0_; // Estado Inicial        
    //Estado s1_;   // Estado final
    public:
    Bot();
    Bot(//Estado s0,Estado s1);
    Bot( const Bot a);
    void calcularEstado();
    void setEstado(//Estado s0);
    void setEstadoNext(//Estado s1);
    //Estado getEstado();
    //Estado getEstadoNext();
};