#include "Estado.hpp"


Estado::Estado(){
    //atributos_[8]={"St","H","W","OW","HN","NE","PW","PH"};
    estadoAtributos_.resize(8);
    probabilidad_.resize(8);
    int aux;
    for(int i=0;i<estadoAtributos_.size();i++){
        cout <<" Entrodusca el estado del atributo -> "<< atributos_[i] << "  como 1 para positivo o 0 para negativo"<<endl;
        cin>>aux;
        if(aux==0){
            estadoAtributos_[i]=true;
        }
        else{
            estadoAtributos_[i]=false;
        }
        probabilidad_[i]=0.125;
    }
}

vector<bool>& Estado::getEstadoAtributos(){
    return estadoAtributos_;
}
vector<float>& Estado::getEstadoProbabilidad(){
    return probabilidad_;
}