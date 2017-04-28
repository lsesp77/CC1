#include <iostream>

using namespace std;

bool palindrome(string w)
{
    if (w == string(w.rbegin(), w.rend())) {
        return true;
    }
    else{
        return false;
    }
}


int main()
{
    string w;
    cout<<"Ingrese la palabra a verificar:\n"; cin>>w;

    cout<<palindrome(w);

    return 0;
}
