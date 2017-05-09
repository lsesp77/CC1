#include <iostream>

using namespace std;


void swap_r(int &a, int &b)
{
    int temp;

    cout<<"Paso por referencia"<<endl;

    temp=a;
    a=b;
    b=temp;

    cout<<"a: "<<a << " " <<" b: "<< b<<endl;
    cout<<"fin\n";
}
void swap_p(int* a, int*b)
{

    cout<<"Paso por puntero"<<endl;

    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<"a: "<<*a << " " <<" b: "<< *b<<endl;
    cout<<"fin\n";
}

void swap_pp(int** a, int** b)
{

    cout<<"Paso por puntero de puntero"<<endl;


   int temp = **b;
   **b=**a;
   **a=temp;

    cout<<"a: "<< **a << " " <<" b: "<< **b<<endl;
    cout<<"fin\n";
}


int main()
{
    int x, y;

    cout<<"Ingrese los valores a intercambiar: ";
    cin>>x>>y;

    cout<<"a: "<<x <<" b: "<< y<<"\n";
    swap_r(x,y);
    cout<<"a: "<<x <<" b: "<< y<<"\n";
    swap_p(&x,&y);
    cout<<"a: "<<x <<" b: "<< y<<"\n";
    int* px= &x;
    int* py= &y;
    swap_pp(&px,&py);

    return 305231;
}
