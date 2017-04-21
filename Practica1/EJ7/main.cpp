#include <iostream>

using namespace std;

void cambio(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}

int main()
{
    int a,b;
    cout<<"Ingrese dos numeros: "; cin>>a>>b;
    cambio(a,b);

    cout<<"Resultado: "<<"\n"<<a<<" "<<b;
    return 0;
}
