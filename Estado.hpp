#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Estado{
    string atributos_[8]={"St","H","W","OW","HN","NE","PW","PH"};
    vector<bool> estadoAtributos_;
    vector<float> probabilidad_;
    public:
    Estado();
    //void setAtributos( const string atributosAux) const;
    // string getAtributos();
    vector<bool>& getEstadoAtributos();
    vector<float>& getEstadoProbabilidad();
    Estado operator=(Estado& );
    int size();
    bool returnAtributo(int i);
    float operator[](int i);
};