#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Ingrese un numero:  "; cin>>n;
    while(n!=-1)
    {
        if(n>=0 and n<=9)
        {
            if(n==0)
                cout<<"Cero"<<"\n";
            if(n==1)
                cout<<"Uno"<<"\n";
            if(n==2)
                cout<<"Dos"<<"\n";
            if(n==3)
                cout<<"Tres"<<"\n";
            if(n==4)
                cout<<"Cuatro"<<"\n";
            if(n==5)
                cout<<"Cinco"<<"\n";
            if(n==6)
                cout<<"Seis"<<"\n";
            if(n==7)
                cout<<"Siete"<<"\n";
            if(n==8)
                cout<<"Ocho"<<"\n";
            if(n==9)
                cout<<"Nueve"<<"\n";
        }
        else
            cout<<"Numero no permitido";
        cin>>n;
    }

       
    cout<<"Finalizado."<<endl;

    return 0;
}
