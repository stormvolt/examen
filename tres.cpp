#include <iostream>
using namespace std;


bool comprobar(int x)
{
	int list[]={11,12,13,14,15,16,17,18,19,20};
	bool es=true;
	bool end=false;
	int i=0;
	while(end==false)
	{
		if(x%list[i]!=0)
		{
			es=false;
			end=true;
		}
		if(i==9)
		{
			end=true;
		}
		i++;
	}
	return es;
}
			
int main()
{
	bool end=false;
	int x=20;
	while(end==false)
	{
		x++;
		end=comprobar(x);
	}
	cout<<x;
}
		
