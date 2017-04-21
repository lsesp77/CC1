#include <iostream>

using namespace std;

 potencia(int b,int e)
{
    int p;
    p=1;
    for(int i=0;i<e;i++)
        p*=b;
    return p;
}

int main()
{
    int b,e;
    cout<<"Ingrese base y exponente: "; cin>>b>>e;
    cout<<potencia(b,e);

    return 0;
}

