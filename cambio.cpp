#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>

using namespace std;

int main()
{
    float cambio;
    int  m10=0, m5=0, m2=0, m1=0, m50c=0,m20c=0,m10c=0;
    
    cout<<" cuanto te debemos en cambio"<<endl;
    cin>>cambio;
    while(cambio> 0)
    {
        if(cambio>=10)
        {
            m10++;
            cambio-=10;
        }
        else if(cambio>=5)
        {
            m5++;
            cambio-=5;
        }
        else if(cambio>=2)
        {
            m2++;
            cambio-=2;
        }
        else if(cambio>=1)
        {
            m1++;
            cambio-=1;
        }
        else if(cambio>=0.5)
        {
            m50c++;
            cambio-=0.5;
        }
        else if(cambio>=0.2)
        {
            m20c++;
            cambio-=0.20;
        }
        else if(cambio>=0.1)
        {
            m10c++;
            cambio-=0.1;
        }
    }
    cout <<"monedas 10:"<<m10<<endl<< "monedas 5:"<<m5<<endl<<"monedas 2:"<<m2<<endl<<"monedas 1:"<<m1<<endl<<"monedas .50:"<<m50c<<endl<<"monedas .20:"<<m20c<<endl<<"monedas .10:"<<m10c<<endl;
    system("pause");
}
