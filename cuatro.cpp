#include <iostream>
#include <cstdlib>
using namespace std;

void llenar(int x[100][100])
{
	for(int i=0; i<100; i++)
	{
		for(int j=0; j<100; j++)
		{
			srand((unsigned)time(NULL));
			x[i][j]=rand()%20+1;
		}
	}
}
	


void buscar(int x[100][100], int y)
{
	for(int i=0; i<100; i++)
	{
		for(int j=0; j<100; j++)
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
	int matrix[100][100];
	llenar(matrix);
	int x;
	cout<<"Ingrese un numero: ";
	cin>>x;
	buscar(matrix,x);
	return 1;
}
