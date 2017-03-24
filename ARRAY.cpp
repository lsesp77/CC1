#include "iostream"
using namespace std;
int main ()
{
	int n,suma,pro,ma,me,array[10];
	suma=0; ma=0; me=99999999;
	cout<<"Ingrese los 10 numeros del arreglo :"<<endl;
		for (int c=0;c<10;c++) {
			cin>>n;
			array[c]=n;
			suma+=array[c];
			if (array[c]>ma) {
				ma=array[c];
			}
			if (array[c]<me) {
				me=array[c];
			}
			array[c]++;
	}
		cout<<"la suma es : "<<suma<<endl<<"el promedio es : "<<suma/10<<endl<<"El mayor es :"<<ma<<endl<<"El menor es :"<<me;
}
