#include<iostream>
using namespace std;

int fib(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return fib(n-2) + fib(n-1);
	}
}

int main()
{
	int x=0;
	int i=1;
	while(fib(i)<=4000000)
	{
		if(fib(i)%2==0)
		{
			x = x + fib(i);
		}
		i++;
	}
	cout<<x;
	return 1;
}
