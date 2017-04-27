#include <iostream>

using namespace std;

void multi(int a,int b,int c)
{
    int suma;
    int l1[a][b],l2[b][c],l3[a][c];

    cout<<"Ingrese los datos de la matriz 1\n";
    for (int i=0;i<a;i++)
    {
        cout<<"Fila "<<i+1<<endl;
        for (int j=0;j<b;j++)
        {
            cin>>l1[i][j];
        }
    }
    cout<<"Ingrese los datos de la matriz 2\n";
    for (int i=0;i<b;i++)
    {
        cout<<"Fila "<<i+1<<endl;
        for (int j=0;j<c;j++)
        {
            cin>>l2[i][j];
        }
    }

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            suma=0;
            for(int k=0;k<c;k++)
            {
                suma+=l1[i][k]*l2[k][j];
            }
            l3[i][j]=suma;
        }
    }
    cout<<"Matriz resultante\n";
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<l3[i][j]<<"  ";
        }
        cout<<endl;
    }


}




int main()
{
    int a,b,c;
    cout<<"Ingrese las filas y columnas de la primera matriz\n"; cin>>a>>b;
    cout<<"Ingrese las columnas de la matriz 2\n"; cin>>c;


    multi(a,b,c);

    return 0;
}
