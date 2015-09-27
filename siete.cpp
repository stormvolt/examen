#include <iostream>
using namespace std;

int sum()
{
	int a=0;
	for(int i=3; i<1000; i++)
	{
		if(i%3==0 | i%5==0)
		{
			a=a+i;
		}
	}
	return a;
}

int main()
{
	cout<<sum()<<"\n";
}

		

