int sumacif(int x)
{
    int S=0;
    while(x){S=S+x%10;x=x/10;}
    return S;
}

void nrparimpar(int x,int &nrp,int &nri)
{
    nrp=nri=0;
    while(x)
    {
        if(x%2==0)++nrp;
        else ++nri;
        x/=10;
    }
}

void cifmaxmin(int x,int &c1,int &c2)
{
    c1=-1;c2=10;
    while(x)
    {
        if(x%10>c1)c1=x%10;
        else if(x%10<c2)c2=x%10;
        x/=10;
    }
}

int cifcontrol(int x)
{
    while(x>9)x=x%10+x/10;
    return x;
}

int elimcif(int x,int c)
{
    int y=0,p=1;
    while(x)
    {
        if(x%10!=c)
        {
            y=y+(x%10)*p;
            p*=10;
        }
        x/=10;
    }
    return y;
}

long dublare(int x)
{
    int y=0,p=1;
    while(x)
    {
        y=y+(x%10)*p+(x%10)*(p*10);
        p*=100;
        x/=10;
    }
    return y;
}

int cifdistincte(int x)
{
    int y;
    while(x)
    {
        y=x/10;
        while(y)
            {
                if(x%10==y%10)return 0;
                y/=10;
            }
        x/=10;
    }
    return 1;
}

int palindrom(int x,int &ogl)
{
    int y=x;ogl=0;
    while(y)
    {
        ogl=ogl*10+y%10;
        y/=10;
    }
    if(ogl==x)return 1;
    return 0;
}
