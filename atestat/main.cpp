#include <iostream>
#include <cstring>
#include <cstdlib>
#include "cifre.h"
#include "numere.h"
#include "vector.h"
#include "matrice.h"
#include "caractere.h"

using namespace std;

void meniu()
{
    cout<<"\n1.Prelucrarea cifrelor unui numar\n";
    cout<<"2.Prelucrarea numerelor\n";
    cout<<"3.Prelucrarea vectorilor\n";
    cout<<"4.Prelucrarea matricilor\n";
    cout<<"5.Prelucrarea sirurilor de caractere\n";
    cout<<"0.Iesire\n";
    cout<<"Optiunea dumneavoastra:";
}

void meniu1()
{
    cout<<"\n1.Suma cifrelor unui numar\n";
    cout<<"2.Numarul de cifre pare si de cifre impare\n";
    cout<<"3.Cifra maxima si cifra minima\n";
    cout<<"4.Cifra de control\n";
    cout<<"5.Numarul obtinut prin eliminarea unei cifre citite de la tastatura\n";
    cout<<"6.Dublarea aparitiilor cifrelor in numar\n";
    cout<<"7.Verificare daca numarul citit are toate cifrele distincte\n";
    cout<<"8.Verificare daca un numar este palindrom (daca nu este, se va afisa oglinditul sau)\n";
    cout<<"0.Iesire\n";
    cout<<"Optiunea dumneavoastra:";
}

void meniu2()
{
    cout<<"\n1.Verificarea daca doua numere sunt prime intre ele (daca nu sunt, se va afisa cel mai mare divizor comun)\n";
    cout<<"2.Cel mai mic multiplu comun a doua numere\n";
    cout<<"3.Verificare daca un numar este prim (daca nu este, se vor afisa divizorii sai)\n";
    cout<<"4.Suma divizorilor unui numar\n";
    cout<<"5.Descompunere in factori primi\n";
    cout<<"6.Numarul de zerouri de la sfarsitul factorialului unui numar\n";
    cout<<"7.Verificare daca un numar apartine sirului lui Fibonacci\n";
    cout<<"0.Iesire\n";
    cout<<"Optiunea dumneavoastra:";
}

void meniu3()
{
    cout<<"\n1.Citirea unui vector din fisier\n";
    cout<<"2.Afisare vector\n";
    cout<<"3.Elementul maxim si cel minim dintr-un vector\n";
    cout<<"4.Cautarea unui numar intr-un vector si afisarea pozitiei pe care se afla daca exista\n";
    cout<<"5.Verificare daca elementele vectorului sunt distincte\n";
    cout<<"6.Ordonarea crescatoare a unui vector \n";
    cout<<"7.Inserarea unui element pe o pozitie data\n";
    cout<<"8.Eliminarea elementului de pe o pozitie data\n";
    cout<<"0.Iesire\n";
    cout<<"Optiunea dumneavoastra:";
}

void meniu4()
{
    cout<<"\n1.Citirea unei matrice patratice din fisier\n";
    cout<<"2.Afisarea matricei\n";
    cout<<"3.Elementul maxim de pe fiecare linie\n";
    cout<<"4.Suma elementelor dintr-o zona data\n";
    cout<<"5.Verificare simetrie fata de diagonala principala\n";
    cout<<"6.Produsul elementelor de pe diagonala secundara\n";
    cout<<"7.Rotirea matricei cu 90 de grade spre stanga\n";
    cout<<"8.Rotirea matricei cu 90 de grade spre dreapta\n";
    cout<<"9.Bordarea matricei cu un element citit de la tastatura\n";
    cout<<"0.Iesire\n";
    cout<<"Optiunea dumneavoastra:";
}

void meniu5()
{
    cout<<"\n1.Numarul de vocale si de consoane dintr-un cuvant\n";
    cout<<"2.Inlocuirea vocalelor cu litera mare corespunzatoare\n";
    cout<<"3.Dublarea vocalelor dintr-un cuvant\n";
    cout<<"4.Verificarea daca doua cuvinte sunt anagrame\n";
    cout<<"5.Afisarea caracterelor comune a doua cuvinte\n";
    cout<<"6.Verificarea daca un cuvant este subsirul altui cuvant\n";
    cout<<"7.Verificarea daca doua cuvinte rimeaza\n";
    cout<<"8.Afisarea cuvintelor dintr-o propozitie care contin numai vocale\n";
    cout<<"0.Iesire\n";
    cout<<"Optiunea dumneavoastra:";
}

int main()
{
    int opt,opt1,opt2,opt3,opt4,opt5;
    int n,nrp,nri,c1,c2,ogl;
    int x,y,c;
    int v[5000],m1,m2,k,nv=-1;
    int a[100][100],b[100][100],nm=0,z,ok,S;
    char s[200],s1[200];int nrv,nrc;
    do
    {
        meniu();
        cin>>opt;
        switch(opt)
        {
            case 1:do
            {
                meniu1();
                cin>>opt1;
                //subprograme care prelucreaza cifrele unui numar
                switch(opt1)
                {
                    //suma cifrelor unui numar
                    case 1:
                        cout<<"\nIntroduceti numarul:";cin>>n;
                        cout<<"Suma cifrelor este "<<sumacif(n)<<endl;
                        system("pause");
                        break;
                    //numarul de cifre pare si de cifre impare dintr-un numar
                    case 2:
                        cout<<"\nIntroduceti numarul:";cin>>n;
                        nrparimpar(n,nrp,nri);
                        cout<<"Numarul contine "<<nrp<<" cifre pare si "<<nri<<" cifre impare.\n";
                        system("pause");
                        break;
                    //cifra maxima si cifra minima dintr-un numar
                    case 3:
                        cout<<"\nIntroduceti numarul:";cin>>n;
                        cifmaxmin(n,c1,c2);cout<<"Cifra maxima este "<<c1<<", iar cifra minima este "<<c2<<endl;
                        system("pause");
                        break;
                    //cifra de control a unui numar
                    case 4:
                        cout<<"\nIntroduceti numarul:";cin>>n;
                        cout<<"Cifra de control a numarului este "<<cifcontrol(n)<<endl;
                        system("pause");
                        break;
                    //eliminarea unei cifre dintr-un numar
                    case 5:
                        cout<<"\nIntroduceti numarul:";cin>>n;
                        cout<<"Introduceti cifra care va fi eliminata:";cin>>c1;
                        cout<<"Numarul obtinut este "<<elimcif(n,c1)<<endl;
                        system("pause");
                        break;
                    //dublarea aparitiilor cifrelor unui numar
                    case 6:
                        cout<<"\nIntroduceti numarul:";cin>>n;
                        cout<<"Numarul obtinut este "<<dublare(n)<<endl;
                        system("pause");
                        break;
                    //verificare daca cifrele unui numar sunt distincte
                    case 7:
                        cout<<"\nIntroduceti numarul:";cin>>n;
                        if(cifdistincte(n))cout<<"Cifrele sunt distincte.\n";
                        else cout<<"Cifrele nu sunt distincte.\n";
                        system("pause");
                        break;
                    //verificare daca un numar este palindrom
                    case 8:
                        cout<<"\nIntroduceti numarul:";cin>>n;
                        if(palindrom(n,ogl))cout<<"Numarul este palindrom.\n";
                        else cout<<"Numarul nu este palindrom. Oglinditul sau este "<<ogl<<endl;
                        system("pause");
                        break;
                }
            }while(opt1);break;
            //subprograme care prelucreaza numere
            case 2:do
            {
                meniu2();
                cin>>opt2;
                switch(opt2)
                {
                    //verificarea daca doua numere sunt prime intre ele
                    case 1:
                        cout<<"\nIntroduceti primul numar:";cin>>x;
                        cout<<"Introduceti al doilea numar:";cin>>y;
                        if(primeintreele(x,y,c))cout<<"Numerele sunt prime intre ele (cel mai mare divizor comun celor doua numere este 1).\n";
                        else cout<<"Numerele nu sunt prime intre ele. Cel mai mare divizor comun celor doua numere este "<<c<<endl;
                        system("pause");
                        break;
                    //cel mai mic multiplu comun a doua numere
                    case 2:
                        cout<<"\nIntroduceti primul numar:";cin>>x;
                        cout<<"Introduceti al doilea numar:";cin>>y;
                        cout<<"Cel mai mic multiplu comun celor doua numere este "<<cmmmc(x,y)<<endl;
                        system("pause");
                        break;
                    //verificarea daca un numar este prim
                    case 3:
                        cout<<"\nIntroduceti numarul:";cin>>x;
                        if(prim(x))cout<<"Numarul este prim.\n";
                        else {cout<<"Numarul nu este prim. Divizorii sai sunt:";divizori(x);cout<<endl;}
                        system("pause");
                        break;
                    //suma divizorilor unui numar
                    case 4:
                        cout<<"\nIntroduceti numarul:";cin>>x;
                        cout<<"Suma divizorilor sai este "<<sumdiv(x)<<endl;
                        system("pause");
                        break;
                    //descompunerea in factori primi a unui numar
                    case 5:
                        cout<<"\nIntroduceti numarul:";cin>>x;
                        descfactprimi(x);cout<<endl;
                        system("pause");
                        break;
                    //numarul de zerouri de la sfarsitul factorialului unui numar
                    case 6:
                        cout<<"\nIntroduceti numarul:";cin>>x;
                        if(nrzero(x)==1)cout<<"La sfarsitul factorialului numarului citit exista 1 zero.\n";
                        else cout<<"La sfarsitul factorialului numarului citit exista "<<nrzero(x)<<" zerouri.\n";
                        system("pause");
                        break;
                    //verificarea daca un numar apartine sirului lui Fibonacci
                    case 7:
                        cout<<"\nIntroduceti numarul:";cin>>x;
                        if(veriffibo(x))cout<<"Numarul apartine sirului lui Fibonacci.\n";
                        else cout<<"Numarul nu apartine sirului lui Fibonacci.\n";
                        system("pause");
                        break;
                }
            }while(opt2);break;
            //subprograme care prelucreaza vectori
            case 3:do
            {
                meniu3();
                cin>>opt3;
                switch(opt3)
                {
                    //citirea unui vector
                    case 1:
                        cout<<endl;
                        citirevect(v,nv);
                        cout<<"Vectorul a fost citit din fisier.\n";
                        system("pause");
                        break;
                    //afisarea unui vector
                    case 2:
                        cout<<endl;
                        if(nv==0)cout<<"Vectorul este vid.Introduceti un nou vector in fisier\n";
                        else if(nv==-1)cout<<"Cititi vectorul din fisier!\n";
                        else
                        {
                            afisarevect(v,nv);
                            cout<<endl;
                        }
                        system("pause");
                        break;
                    //afisarea elementului maxim si al celui minim dintr-un vector
                    case 3:
                        if(nv==-1)cout<<"Cititi vectorul din fisier!\n";
                        else
                        {
                            minimmaxim(v,nv,m1,m2);
                            cout<<"\nElementul maxim din vector este "<<m1<<",iar cel minim este "<<m2<<endl;
                        }
                        system("pause");
                        break;
                    //cautarea unui numar intr-un vector
                    case 4:
                        if(nv==-1)cout<<"Cititi vectorul din fisier!\n";
                        else
                        {
                            cout<<"\nIntroduceti numarul cautat in vector:";cin>>x;
                            if(caut(v,nv,x)==0)cout<<"Elementul cautat nu se afla in vector.\n";
                            else if(caut(v,nv,x)==1)cout<<"Numarul cautat este primul element din vector.\n";
                            else cout<<"Numarul cautat este al "<<caut(v,nv,x)<<"-lea element din vector.\n";
                        }
                        system("pause");
                        break;
                    //verificarea daca elementele unui vector sunt distincte
                    case 5:
                        if(nv==-1)cout<<"Cititi vectorul din fisier!\n";
                        else
                        {
                            if(verifdistinct(v,nv)==1)cout<<"\nElementele vectorului sunt distincte.\n";
                            else cout<<"\nElementele vectorului nu sunt toate distincte.\n";
                        }
                        system("pause");
                        break;
                    //ordonarea crescatoare a elementelor unui vector
                    case 6:
                        if(nv==-1)cout<<"Cititi vectorul din fisier!\n";
                        else
                        {
                            ord(v,nv);
                            cout<<"\nOrdonare efectuata.Reafisati vectorul.\n";
                        }
                        system("pause");
                        break;
                    //inserarea unui element intr-un vector pe o pozitie data
                    case 7:
                        if(nv==-1)cout<<"Cititi vectorul din fisier!\n";
                        else
                        {
                            cout<<"\nIntroduceti numarul de introdus in vector:";cin>>x;
                            cout<<"Pozitia pe care se va insera vectorul:";cin>>k;
                            insertpozk(v,nv,k,x);
                            cout<<"Element inserat.Reafisati vectorul.\n";
                        }
                        system("pause");
                        break;
                    //eliminarea unui element dintr-un vector de pe o pozitie data
                    case 8:
                        if(nv==-1)cout<<"Cititi vectorul din fisier!\n";
                        else
                        {
                            cout<<"\nPozitia de pe care se va elimina din vector:";cin>>k;
                            elimpozk(v,nv,k);
                            cout<<"Eliminare efectuata.Reafisati vectorul.\n";
                        }
                        system("pause");
                        break;
                }
            }while(opt3);break;
            //subprograme care prelucreaza matrice
            case 4:do
            {
                meniu4();
                cin>>opt4;
                switch(opt4)
                {
                    //citirea unei matrice
                    case 1:
                        citirematr(a,nm);
                        cout<<"\nMatricea a fost citita din fisier.\n";
                        system("pause");
                        break;
                    //afisarea unei matrice
                    case 2:
                        if(nm==0)cout<<"\nCititi matricea din fisier!\n";
                        else
                        {
                            cout<<endl;
                            afisarematr(a,nm);
                        }
                        system("pause");
                        break;
                    //afisarea elementului maxim de pe fiecare linie a unei matrice
                    case 3:
                        cout<<endl;
                        if(nm==0)cout<<"Cititi matricea din fisier!\n";
                        else elemmaxlin(a,nm);
                        system("pause");
                        break;
                    //suma dintr-o zona a unei matrice
                    case 4:
                        if(nm==0)cout<<"Cititi matricea din fisier!\n";
                        else
                        {
                            do
                            {
                                cout<<"\nZona din care se va face suma elementelor:\n";
                                cout<<"1.Nord\n";cout<<"2.Est\n";cout<<"3.Sud\n";cout<<"4.Vest\n";
                                cout<<"Optiunea dumneavoastra:";cin>>z;ok=1;
                                S=sumzona(a,nm,z,ok);
                            }while(!ok);
                            cout<<"Suma din zona aleasa este "<<S<<endl;
                        }
                        system("pause");
                        break;
                    //verificarea daca o matrice este simetrica fata de diagonala principala
                    case 5:
                        if(nm==0)cout<<"Cititi matricea din fisier!\n";
                        else
                        {
                            if(verifsimetrie(a,nm))cout<<"\nMatricea este simetrica fata de diagonala principala\n";
                            else cout<<"\nMatricea nu este simetrica fata de diagonala principala\n";
                        }
                        system("pause");
                        break;
                    //produsul elementelor de pe diagonala secundara a unei matrice
                    case 6:
                        if(nm==0)cout<<"Cititi matricea din fisier!\n";
                        else cout<<"\nProdusul elementelor de pe diagonala secundara este "<<proddiagsec(a,nm)<<endl;
                        system("pause");
                        break;
                    //rotirea unei matrice cu 90 de grade spre stanga
                    case 7:
                        if(nm==0)cout<<"Cititi matricea din fisier!\n";
                        else
                        {
                            rotirest(a,b,nm);copiere(a,b,nm);
                            cout<<"\nMatricea a fost rotita cu 90 de grade spre stanga.Reafisati matricea\n";
                        }
                        system("pause");
                        break;
                    //rotirea unei matrice cu 90 de grade spre dreapta
                    case 8:
                        if(nm==0)cout<<"Cititi matricea din fisier!\n";
                        else
                        {
                            rotiredr(a,b,nm);copiere(a,b,nm);
                            cout<<"\nMatricea a fost rotita cu 90 de grade spre dreapta.Reafisati matricea\n";
                        }
                        system("pause");
                        break;
                    //bordarea unei matrice cu un element dat
                    case 9:
                        if(nm==0)cout<<"Cititi matricea din fisier!\n";
                        else
                        {
                            cout<<"\nIntroduceti elementul cu care se va borda matricea:";cin>>x;
                            bordare(a,nm,x);
                            cout<<"Matricea a fost bordata.Reafisati matricea\n";
                        }
                        system("pause");
                        break;
                }
            }while(opt4);break;
            //subprograme care prelucreaza siruri de caractere
            case 5:do
            {
                meniu5();
                cin>>opt5;
                switch(opt5)
                {
                    //numarul de vocale si numarul de consoane dintr-un cuvant
                    case 1:
                        cout<<"\nIntroduceti cuvantul:";cin>>s;
                        nrvoccons(s,nrv,nrc);
                        cout<<"In cuvantul citit exista "<<nrv<<" vocale si "<<nrc<<" consoane\n";
                        system("pause");
                        break;
                    //inlocuirea vocalelor unui cuvant cu litera mare corespunzatoare
                    case 2:
                        cout<<"\nIntroduceti cuvantul:";cin>>s;
                        inlocvoc(s);
                        system("pause");
                        break;
                    //dublarea aparitiilor vocalelor intr-un cuvant
                    case 3:
                        cout<<"\nIntroduceti cuvantul:";cin>>s;
                        dublarevoc(s);
                        system("pause");
                        break;
                    //verificarea daca doua cuvinte sunt anagrame
                    case 4:
                        cout<<"\nIntroduceti primul cuvant:";cin>>s;
                        cout<<"\nIntroduceti al doilea cuvant:";cin>>s1;
                        if(verifanagrame(s,s1))cout<<"Cuvintele sunt anagrame\n";
                        else cout<<"Cuvintele nu sunt anagrame\n";
                        system("pause");
                        break;
                    //afisarea caracterelor comune a doua cuvinte
                    case 5:
                        cout<<"\nIntroduceti primul cuvant:";cin>>s;
                        cout<<"\nIntroduceti al doilea cuvant:";cin>>s1;
                        caractcom(s,s1);
                        system("pause");
                        break;
                    //verificarea daca un cuvant este subsir pentru altul
                    case 6:
                        cout<<"\nIntroduceti primul cuvant:";cin>>s;
                        cout<<"\nIntroduceti al doilea cuvant:";cin>>s1;
                        if(!verifsubsir(s,s1,ok))cout<<"Cele doua cuvinte nu sunt subsiruri\n";
                        else if(ok)cout<<"Primul cuvant este subsir pentru al doilea\n";
                        else cout<<"Al doilea cuvant este subsir pentru primul\n";
                        system("pause");
                        break;
                    //verificarea daca doua cuvinte rimeaza
                    case 7:
                        cout<<"\nIntroduceti primul cuvant:";cin>>s;
                        cout<<"\nIntroduceti al doilea cuvant:";cin>>s1;
                        if(verifrime(s,s1))cout<<"Cele doua cuvinte rimeaza\n";
                        else cout<<"Cele doua cuvinte nu rimeaza\n";
                        system("pause");
                        break;
                    //afisarea cuvintelor formate numai din vocale dintr-o propozitie
                    case 8:
                        cin.get();
                        cout<<"\nIntroduceti propozitia:";cin.getline(s,200);
                        propvoc(s);
                        cout<<endl;
                        system("pause");
                        break;
                }
            }while(opt5);break;
        }
    }while(opt);
    return 0;
}
