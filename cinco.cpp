#include <iostream>
using namespace std;

double mayor(double a[7])
{
	double m=a[1];
	for (int i=1; i<7; i++)
	{
		if(m<a[i])
		{
			m=a[i];
		}
	}
	return m;
}


double menor(double a[7])
{
	double m=a[1];
	for (int i=1; i<7; i++)
	{
		if(m>a[i])
		{
			m=a[i];
		}
	}
	return m;
}

int main()
{
	double list[7];	
	for(int i=0; i<7; i++)
	{
		cout<<"Ingrese un valor decimal: ";
		cin>>list[i];
	}
	cout<<"Valor mas alto: "<<mayor(list)<<"\n";
	cout<<"Valor mas bajo: "<<menor(list)<<"\n";
	return 1;
} 
