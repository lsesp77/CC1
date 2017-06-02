#include <iostream>
#include <vector>

#include "Avion.h"
#include "Avion_1.h"
#include "Avion_2.h"


using namespace std;



class Torre {
public:
    vector<Avion *> aviones;
    Torre() {}
    void add(Avion_1 w){
    aviones.push_back(&w);
    }
    void add(Avion_2 w){
    aviones.push_back(&w);
    }
    void mostrarMsm()
    {
        for(size_t i=0;i<aviones.size();i++)
            aviones[i]->mensaje();
    }
};

int main()
{
    Avion_1 a;
    Avion_2 b;
    Torre t;
    t.add(a);
    t.add(b);
    t.mostrarMsm();


    return 0;
}
