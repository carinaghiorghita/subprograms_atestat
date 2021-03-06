#include <iostream>
#include <fstream>

using namespace std;

ifstream in2("matrice.in");

void citirematr(int a[][100],int &n)
{
    int i,j;
    in2>>n;
    for(i=1;i<=n;++i)
        for(j=1;j<=n;++j)in2>>a[i][j];
}

void afisarematr(int a[][100],int n)
{
    int i,j;
    for(i=1;i<=n;++i)
    {
        for(j=1;j<=n;++j){cout.width(5);cout<<a[i][j]<<" ";}
        cout<<endl;
    }
}

void elemmaxlin(int a[][100],int n)
{
    int i,j,m;
    for(i=1;i<=n;++i)
    {
        m=a[i][1];
        for(j=2;j<=n;++j)
            if(a[i][j]>m)m=a[i][j];
        cout<<"Elementul maxim de pe linia "<<i<<" este "<<m<<endl;
    }
}

int sumzona(int a[][100],int n,int z,int &ok)
{
    int i,j,S=0;
    if(z<1||z>4){cout<<"Optiune invalida\n";ok=0;return 0;}
    if(z==1)
    {
     for(i=1;i<=n/2;++i)
            for(j=i+1;j<=n-i;++j)
            if((i+j)<(n+1))S+=a[i][j];
    }
    else if(z==2)
    {
        for(i=2;i<=n-1;++i)
            for(j=n/2;j<=n;++j)
            if(i<j&&(i+j)>(n+1))S+=a[i][j];
    }
    else if(z==3)
    {
        for(i=n/2;i<=n;++i)
            for(j=2;j<=i;++j)
            if((i+j)>(n+1))S+=a[i][j];
    }
    else if(z==4)
    {
        for(i=2;i<=n-1;++i)
            for(j=1;j<=n/2;++j)
            if(i>j&&(i+j)<(n+1))S+=a[i][j];
    }
    return S;
}

int verifsimetrie(int a[][100],int n)
{
    int i,j;
    for(i=2;i<=n;++i)
        for(j=1;j<i;++j)
        if(a[i][j]!=a[j][i])return 0;
    return 1;
}

long long proddiagsec(int a[][100],int n)
{
    int i;long long P=1;
    for(i=1;i<=n;++i)P*=a[i][n+1-i];
    return P;
}

void rotirest(int a[][100],int b[][100],int n)
{
    int i,j;
    for(i=1;i<=n;++i)
        for(j=1;j<=n;++j)b[i][j]=a[j][n+1-i];
}

void rotiredr(int a[][100],int b[][100],int n)
{
    int i,j;
    for(i=1;i<=n;++i)
        for(j=1;j<=n;++j)b[i][j]=a[n+1-j][i];
}

void copiere(int a[][100],int b[][100],int n)
{
    int i,j;
    for(i=1;i<=n;++i)
        for(j=1;j<=n;++j)a[i][j]=b[i][j];
}

void bordare(int a[][100],int &n,int x)
{
    int i,j;
    for(i=n;i>=1;--i)
        for(j=n;j>=1;--j)a[i+1][j+1]=a[i][j];
    n+=2;
    for(i=1;i<=n;++i)a[1][i]=a[n][i]=a[i][1]=a[i][n]=x;

}
