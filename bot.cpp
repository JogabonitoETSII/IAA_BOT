#include <iostream>
#include "bot.hpp"


bot::bot(Estado s0 , Estado s1){
     s0_=s0;
     s1_=s1;
}

Estado& bot::getEstado(){
    return s0_;
}

Estado& bot::getEstadoNext(){
    return s1_;
}

float bot::CalcularProbabilidadCondicionada(float a , float b){
        aux c;
        c= ((a+b)/b);
}

void bot::calcularEstado(){
    
    
    //p(a|b)= p(a) u p(b) / p(b) -> 
    
    for(int i =0;i<s0.size();i++){
        for(int j=0;j<s1.size();j++){
            if((s0.returnAtributo(i)==true) && (s1.returnAtributo(j)==true)){
                
            }
            
        }
    }
    
    
}