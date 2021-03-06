#include <iostream>
#include <cstring>

using namespace std;

void nrvoccons(char s[],int &nrv,int &nrc)
{
    int i,n=strlen(s);nrv=nrc=0;
    for(i=0;i<n;++i)
    {
        if(strchr("aeiouAEIOU",s[i]))nrv++;
        else nrc++;
    }
}

void inlocvoc(char s[])
{
    int i,n=strlen(s);
    for(i=0;i<n;++i)
        if(strchr("aeiou",s[i]))s[i]=s[i]-32;
    cout<<"Dupa inlocuirea vocalelor cu literele mari corespunzatoare, cuvantul devine "<<s<<endl;
}

void dublarevoc(char s[])
{
    char a[400];
    for(int i=0;s[i]!='\0';++i)
        if(strchr("aeiouAEIOU",s[i])){strcpy(a,s+i+1);s[i+1]=s[i];strcpy(s+i+2,a);i++;}
    cout<<"Dupa dublarea vocalelor, cuvantul devine "<<s<<endl;
}

int verifanagrame(char x[],char y[])
{
    int i,j,n=strlen(x),m=strlen(y),p;
    if(n!=m)return 0;
    for(i=0;i<n;++i)
    {
        p=-1;
        for(j=0;j<m&&p==-1;++j)
            if(x[i]==y[j])p=j;
        if(p==-1)return 0;
        else
        {
            strcpy(x+i,x+i+1);
            strcpy(y+p,y+p+1);
            i--;n--;m--;
        }
    }
    return 1;
}


void caractcom(char x[],char y[])
{
    int i,j,n=strlen(x),m=strlen(y),ok,ok1=0;
    char s[200];
    for(i=0;i<n;++i)
        if(strchr(y,x[i]))
        {
            for(j=0;j<m;++j)
                if(x[i]==y[j]){strcpy(y+j,y+j+1);j--;m--;}
            if(!ok1){ok1=1;cout<<"Caracterele comune celor doua cuvinte sunt:";}
            cout<<x[i]<<" ";

        }
    if(!ok1)cout<<"Cele doua cuvinte nu au caractere comune";
    cout<<endl;
}

int verifsubsir(char x[],char y[],int &ok)
{
    ok=0;
    char aux[200];int i,n,p=0;
    if(strlen(x)<strlen(y)){strcpy(aux,x);strcpy(x,y);strcpy(y,aux);ok=1;}
    n=strlen(x);
    for(i=0;i<n;++i)
        if(x[i]==y[p])++p;
    if(p==strlen(y))return 1;
    return 0;
}

int verifrime(char x[],char y[])
{
    int n=strlen(x),m=strlen(y);
    if(x[n-1]!=y[m-1])return 0;
    if(x[n-2]!=y[m-2])return 0;
    return 1;
}

void propvoc(char s[])
{
    char *cuv;
    int ok=0,ok1,n,i;
    cuv=strtok(s," ,.;:!?-()/");
    while(cuv)
    {
        ok1=1;n=strlen(cuv);
        for(i=0;i<n&&ok1;++i)
            if(strchr("aeiouAEIOU",cuv[i])==0)ok1=0;
        if(ok1)
        {
            if(!ok){cout<<"Cuvintele din propozitia data care contin numai vocale sunt:";ok=1;}
            cout<<cuv<<' ';
        }
        cuv=strtok(NULL," ,.!?-");
    }
    if(!ok)cout<<"Nu exista cuvinte care contin numai vocale in propozitia data";
}
