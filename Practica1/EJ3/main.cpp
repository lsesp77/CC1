#include <iostream>

using namespace std;

int main()
{
  int x;
    cout<<"Ingrese un numero: "; cin>>x;
    while(x!=-1){
        if(x%2==0)
            cout<<"Es par."<<"\n";
        else
            cout<<"Es impar."<<"\n";
        cin>>x;
    }
    while(x==-1){
        cout<<"Finalizado"<<endl;
        break;
    }

    return 0;
}
