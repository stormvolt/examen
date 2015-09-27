#include <iostream>
using namespace std;

void revertir(int a[8])
{
	for(int i=0; i<8; i++)
	{
		cout<<a[7-i]<<"\n";
	}
}


int main()
{
	int list[8];	
	for(int i=0; i<8; i++)
	{
		cout<<"Ingrese un valor entero: ";
		cin>>list[i];
	}
	revertir(list);
	return 1;
} 
