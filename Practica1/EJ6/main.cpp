#include <iostream>

using namespace std;

int main()

{
    char x,y,z;
    float res;
    cout<<"Ingrese el operando y dos numeros:  "; cin>>x>>y>>z;

    float fy=y-'0';
    float fz=z-'0';


    if(x=='+'){

        res= fy + fz;
    }
    else if(x=='-'){
        res=fy-fz;
    }
    else if(x=='*'){
        res=fy*fz;
    }
    else if(x=='/'){
        res=fy/fz;
    }

    cout<<y<<" "<<x<<" "<<z<<" : "<<res;


    return 0;


}
