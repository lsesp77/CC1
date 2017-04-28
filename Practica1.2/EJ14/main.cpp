#include <iostream>
using namespace std;

int sum(int array[],int t)
{
    if ( t <= 0 ){
      return 0;
    }

    return sum(array, t-1) + array[t-1];
}

int main()
{
    int t;
    int array[t];

    cout<<"Ingrese el tamano del array:\n"; cin>>t;
    cout<<"Ingrese los valores del array:\n";

    for(int i=0;i<t;i++)
        cin>>array[i];

    cout<<"La suma es: "<<sum(array,t)<<endl;

    return 0;
}
