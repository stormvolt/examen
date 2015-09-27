#include <iostream>
using namespace std;

void ord(int *ptr)
{
	for(int i=0; i<10; i++)
	{
		for(int j=i+1; j<10; j++)
		{
			if(*(ptr+i) > *(ptr+j))
			{
				int a= *(ptr+j);
				*(ptr+j)=*(ptr+i);
				*(ptr+i)=a;
			}
		}
	}
}

void printLista(int a[10])
{
	for(int i=0; i<10; i++)
	{
		cout<<a[i]<<"\n";
	}
}

int main()
{
	int list[10];
	for(int i=0; i<10; i++)
	{
		cout<<"Ingrese un numero: ";
		cin>>list[i];
	}
	int *ptr;
	ptr = list;
	ord(ptr);
	printLista(list);
	return 1;
}
