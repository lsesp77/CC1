#include <iostream>

using namespace std;

int main()
{

    float k,m;
    cout<<"Millas: "; cin>>m; cout<<"\n";
    if(m>0)
    {
        k=m*1.60934;
        cout<<k<<"km"<<"\n";
    }
    else
        cout<<"\n"<<"Las Millas no pueden ser negativas"<<"\n";
    return 0;
}
