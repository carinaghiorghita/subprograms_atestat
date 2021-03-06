#include <iostream>
using namespace std;

int primeintreele(int x,int y,int &c)
{
    if(x*y==0){c=x+y;return 0;}
    int r=x%y;
    while(r){x=y;y=r;r=x%y;}
    if(y==1){c=1;return 1;}
    c=y;return 0;
}

int cmmmc(int x,int y)
{
    int p=x*y,c;
    primeintreele(x,y,c);
    return p/c;
}

int prim(int x)
{
    if(x<=0)return 0;
    if(x==2)return 1;
    if(x%2==0)return 0;
    for(int i=3;i*i<=x;i+=2)
        if(x%i==0)return 0;
    return 1;
}

void divizori(int x)
{
    int i;
    for(i=1;i<=x/2;++i)
        if(x%i==0)cout<<i<<",";
    cout<<x;
}

int sumdiv(int x)
{
    int i,S=1+x;
    if(x<=1)return x;
    for(i=2;i<=x/2;++i)
        if(x%i==0)S+=i;
    return S;
}

void descfactprimi(int x)
{
    int d=3,p=0;
    if(x<=1)cout<<"Descompunere imposibila";
    else
    {
        cout<<"Descompunerea in factori primi a numarului citit este:";
        while(x%2==0){x/=2;++p;}
        if(p)cout<<"2^"<<p<<" ";
        while(x!=1)
        {
            p=0;
            while(x%d==0){p++;x/=d;}
            if(p)cout<<d<<"^"<<p<<" ";
            d+=2;
        }
    }
}

int nrzero(int x)
{
    if(x==0)return 0;
    int nr=0,i,p;
    for(i=5;i<=x;i+=5)
    {
        p=i;
        while(p%5==0){nr++;p/=5;}
    }
    return nr;
}

int veriffibo(int x)
{
    if(x==1)return 1;
    int a=1,b=1,c=2;
    while(c<x){a=b;b=c;c=a+b;}
    if(c==x)return 1;
    return 0;
}
