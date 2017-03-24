#include <iostream>

using namespace std;

int main()
{
    float x;
    float y;
    float altura;
    float base;
    float pi= 3.14;
    cout<< "CUADRADO"<<endl;
    cout<< "ingrese el lado de un cuadrado : "<<endl;
    cin>>x;
    cout<< "el area del cuadrado es: "<< x*x<<endl;
    cout<<endl;

    cout<< "CIRCULO"<<endl;
    cout<< "ingrese el radio del circulo: "<<endl;
    cin>>y;
    cout<< "el area del circulo es : " << pi * (y*y)<<endl;
    cout<<endl;

    cout<< "RECTANGULO"<<endl;
    cout<< "ingrese la altura del rectangulo: "<<endl;
    cin>>altura;
    cout<< "ingrese la base del rectangulo: "<<endl;
    cin>>base;
    cout<< "el area del rectangulo es : "<< base*altura<<endl;


//    a=x+y/z;
//    cout << z << endl;

//    cout << "la suma de " << x << " y " <<y<<" es " <<z << endl;
//    a=x-y;
//    cout << "la resta de " << x << " y " <<y<<" es " <<z << endl;
//    a=x/y;
//    cout << "la divicion de " << x << " y " <<y<<" es " <<z << endl;
//    a=x*y;
//    cout << "la multiplicaion de " << x << " y " <<y<<" es " <<z << endl;
//    return 0;
}
