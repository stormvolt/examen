#include <iostream>
using namespace std;

bool pal(int a)
{
	bool v=false;
	int b=a;
	int d=0;
	int c=0;
	while(b!=0)
	{
		c=b%10;
		d=d*10+c;
		b=b/10;
	}
	if(d==a)
	{
		v=true;	
	}
	return v;
}	

int main()
//Para ahorrar tiempo, solo usaremos los 100 ultimos numeros, es obvio que en ese intervalo se encuentra la combinacion que buscamos.
{
	int a=0;
	for(int i=900; i<1000; i++)
	{
		for(int j=900; j<1000; j++)
		{
			if(pal(i * j)==true)
			{
				a= i * j;
			}
		}
	}
	cout<<a<<"\n";
	return 1;
}


