#include <iostream>
using namespace std;

int primos[9]={2,3,5,7,9,11,13,17,19};


int potencia(int b, int e)
{
    int a=1;
    for(int i=0; i<e; i++)
    {
        a=a*b;
    }
    return a;
}



void factor(int x, int*ptr)
{
    int i=0;
    while(x!=1)
    {
        if(x%primos[i]==0)
        {
            int j=0;
                while(x%primos[i]==0)
                {
                    x=x/primos[i];
                    j++;
                }
            if(*(ptr+i)<j)
            {
                *(ptr+i)=j;
            }
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int mcm[9]={0,0,0,0,0,0,0,0,0};
    int *ptr;
    ptr=mcm;
    int resultado=1;
    for(int i=1; i<=20; i++)
    {
        factor(i, ptr);
    }
    for(int j=0; j<9; j++)
    {
        resultado=resultado * potencia(primos[j], mcm[j]);
    }
    cout<<resultado;
}
