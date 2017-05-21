#include <iostream>

using namespace std;

void reversa(int* arreglo[],int n)
{
    n--;
    int temp,i=n/2,x=0;
    while (n>i)
    {
        /*
         0  5
         1  4
         2  3
        */
        temp=*(arreglo+x);
        *(arreglo+x)=*(arreglo+n);
        arreglo[n]=temp;
        x++;
        n--;
    }
}
int main()
{
    int arreglo[]={1,2,3,4,5,6},n=6;
    reversa(arreglo,n);
    for(int x=0;x<n;x++)
        cout<<arreglo[x]<<"  ";

    return 0;
}
