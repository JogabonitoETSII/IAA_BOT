#pragma once
#include <iostream>
#include <vector>
#include "Estado.hpp"
using namespace std;
class Bot {
    Estado s0_; // Estado Inicial        
    Estado s1_;   // Estado final
    public:
    Bot(Estado s0,Estado s1);
    void calcularEstado();
    float CalcularProbabilidadCondicionada(float a, float b);
    Estado& getEstado();
    Estado& getEstadoNext();
};