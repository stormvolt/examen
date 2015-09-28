#include <iostream>
#include <cstdlib>
#define size 100
using namespace std;

void llenar(int x[size][size])
{
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			srand((unsigned)time(NULL));
			x[i][j]=rand()%20+1;
		}
	}
}
	


void buscar(int x[size][size], int y)
{
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			if(x[i][j]==y)
			{
				cout<<i<<" , "<<j<<"\n";
			}
		}
	}
}




int main()
{
	int matrix[size][size];
	llenar(matrix);
	int x;
	cout<<"Ingrese un numero: ";
	cin>>x;
	buscar(matrix,x);
	return 1;
}
