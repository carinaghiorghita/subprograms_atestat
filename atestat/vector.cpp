#include <iostream>
#include <fstream>

using namespace std;

ifstream in1("vector.in");

void citirevect(int v[],int &n)
{
    int i;
    in1>>n;
    for(i=1;i<=n;++i)in1>>v[i];
}

void afisarevect(int v[],int n)
{
    int i;
    cout<<"v=(";
    for(i=1;i<n;++i)cout<<v[i]<<",";
    cout<<v[n]<<")";
}

void minimmaxim(int v[],int n,int &m1,int &m2)
{
    int i;m1=m2=v[1];
    for(i=2;i<=n;++i)
    {
        if(v[i]>m1)m1=v[i];
        else if(v[i]<m2)m2=v[i];
    }
}

int caut(int v[],int n,int x)
{
    int i;
    for(i=1;i<=n;++i)
        if(v[i]==x)return i;
    return 0;
}

int verifdistinct(int v[],int n)
{
    int i,j;
    for(i=1;i<n;++i)
        for(j=i+1;j<=n;++j)
        if(v[i]==v[j])return 0;
    return 1;
}

void ord(int v[],int n)
{
    int i,ok,aux;
    do
    {
        ok=0;
        for(i=1;i<n;++i)
            if(v[i]>v[i+1]){aux=v[i];v[i]=v[i+1];v[i+1]=aux;ok=1;}
    }while(ok);
}

void insertpozk(int v[],int &n,int k,int x)
{
    int i;
    for(i=n;i>=k;--i)v[i+1]=v[i];
    v[k]=x;++n;
}

void elimpozk(int v[],int &n,int k)
{
    int i;
    for(i=k+1;i<=n;++i)v[i-1]=v[i];
    n--;
}
