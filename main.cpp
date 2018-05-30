#include <iostream>
#include <fstream>
#include <windows.h>
#include <stdlib.h>
using namespace std;
struct tabel
{
char nume[20];
string simbol;
unsigned numar_atomic;
float masa;
char culoare[20];
char clasificare[20];
}atom[100];
#include "sort.cpp"
ifstream f("citire.txt");
unsigned i,n;
void citire();
void afisare(unsigned i);
void afisare_tabel();
void afisare_element(string element);
void culoare();
int main()
{
    citire();
    while(1)
    {
        system("cls");
        afisare_tabel();
        string element,s1;
        char s[101];
        cout<<"Ce doriti sa stiti?"<<endl;
        cin.get(s,101);
        s1="Informatii despre un element";
        if(s==s1)
        {
            cout<<endl<<"Care este acel element?"<<endl;
            cin>>element;
                afisare_element(element);
        }
        if(s!=s1)
            cout<<"Nu exista aceasta optiune,va rog introduceti alta"<<endl;
        cin.get();
        system("pause");
    }
    f.close();
    return 0;
}
void culoare(unsigned colour)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),colour);
}
void citire()
{
    n=0;
    while(f)
    {
        f>>atom[n].nume;
        f>>atom[n].simbol;
        f>>atom[n].numar_atomic;
        f>>atom[n].masa;
        f>>atom[n].culoare;
        f>>atom[n].clasificare;
        n++;
    }
    n--;
}
void afisare(unsigned i)
{
        cout<<atom[i].nume<<endl;
        cout<<atom[i].simbol<<endl;
        cout<<atom[i].numar_atomic<<endl;
        cout<<atom[i].masa<<endl;
        cout<<atom[i].culoare<<endl;
        cout<<atom[i].clasificare<<endl;
        cout<<endl;
}
void afisare_element(string element)
{
    for(i=0;i<7;i++)
        if(element==atom[i].simbol)
        {
            culoare(atom[i].numar_atomic);
            afisare(i);
            culoare(7);
        }
}
void afisare_tabel()
{
    culoare(10);
    cout<<"____________________________________________________________________________"<<endl;
    culoare(7);
    cout<<"|   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16  17  18 |"<<endl;
    cout<<"|                                                                          |"<<endl;
    culoare(4);
    cout<<"|1  H                                                                   He |"<<endl;
    culoare(3);
    cout<<"|                                                                          |"<<endl;
    cout<<"|2  Li  Be                                          B   C   N   O   F   Ne |"<<endl;
    culoare(5);
    cout<<"|                                                                          |"<<endl;
    cout<<"|3  Na  Mg                                          Al  Si  P   S   Cl  Ar |"<<endl;
    culoare(6);
    cout<<"|                                                                          |"<<endl;
    cout<<"|4  K   Ca  Sc  Ti  V   Cr  Mn  Fe  Co  Ni  Cu  Zn  Ga  Ge  As  Se  Br  Kr |"<<endl;
    culoare(7);
    cout<<"|                                                                          |"<<endl;
    cout<<"|5  Rb  Sr  Y   Zr  Nb  Mo  Tc  Ru  Rh  Pd  Ag  Cd  In  Sn  Sb  Te  I   Xe |"<<endl;
    culoare(8);
    cout<<"|                                                                          |"<<endl;
    cout<<"|6  Cs  Ba  *   Hf  Ta  W   Re  Os  Ir  Pt  Au  Hg  Tl  Pb  Bi  Po  At  Rn |"<<endl;
    culoare(9);
    cout<<"|                                                                          |"<<endl;
    cout<<"|7  Fr  Ra  **  Rf  Db  Sg  Bh  Hs  Mt  Ds  Rg  Cn  Nh  Fl  Mc  Lv  Ts  Og |"<<endl;
    culoare(10);
    cout<<"|__________________________________________________________________________|"<<endl;
    cout<<"|                                                                          |"<<endl;
    cout<<"|                                                                          |"<<endl;
    culoare(4);
    cout<<"| Lantanide*   La  Ce  Pr  Nd  Pm  Sm  Eu  Gd  Tb  Dy  Ho  Er  Tm  Yb  Lu  |"<<endl;
    culoare(1);
    cout<<"|                                                                          |"<<endl;
    cout<<"|  Actinide**  Ac  Th  Pa  U   Np  Pu  Am  Cm  Bk  Cf  Es  Fm  Md  No  Lr  |"<<endl;
    culoare(7);
    cout<<"|__________________________________________________________________________|"<<endl;
culoare(7);
}
