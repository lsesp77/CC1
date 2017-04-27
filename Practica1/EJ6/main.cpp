#include <iostream>

using namespace std;

int main()
{
    char x; float y,z,res;
    cout<<"Ingrese el operando y dos numeros:  "; cin>>x>>y>>z;

    if(x=='+')
        res=y+z;
    else if(x=='-')
        res=y-z;
    else if(x=='*')
        res=y*z;
    else if(x=='/')
        res=y/z;

    cout<<y<<" "<<x<<" "<<z<<" : "<<res;

    return 0;

}
