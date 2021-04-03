#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    
    int a,b,c,delta,parteuno,partedue,duepera;
    float risultato,risultatouno,risultatodue,risultatotre,risultatoquattro;
    string continua;
    cout<<"<<<<<<<<<<MENU>>>>>>>>>>"<<endl;
        
    //Inizio del programma e risoluzione dell'equazione di secondo grado in input
    start:
    cout<<"Programma che calcola ax2+bx+c=0"<<endl;
    cout<<"Inserisci a: ";
    cin>>a;
    cout<<"Inserisci b: ";
    cin>>b;
    cout<<"Inserisci c: ";
    cin>>c;
    parteuno=b*b;
    partedue=(-4*a)*c;
    duepera=2*a;
    delta=parteuno+partedue;
    
        if (delta<0)
        {
            cout<<"Equazione impossibile"<<endl;
        }
        
        if (delta==0)
        {
            risultatotre=(-b+(sqrt(delta)));
            risultato=risultatotre/duepera;
            cout<<"Il risultato e': "<<risultato<<endl;
        }
        
        if (delta>0)
        {
            risultatotre=(-b+(sqrt(delta)));
            risultatoquattro=(-b-(sqrt(delta)));
            risultatouno=risultatotre/duepera;
            risultatodue=risultatoquattro/duepera;
            cout<<"X1 e': "<<risultatodue<<endl;
            cout<<"X2 e': "<<risultatouno<<endl;
        }
        
    //Decidere se continuare o interrompere
    scegli:
    cout<<"Vuoi continuare (sì o no): ";
    cin>>continua;
    
    //Il programma continua iniziando da "start:"
    if (continua=="sì")
    {
        cout<<"\nIl programma inizia di nuovo..."<<endl<<endl;
        goto start;
    }
    
    //Il programma termina
    if (continua =="no")
    {
        cout <<"\nIl programma termina..."<<endl;
        exit(0);
    }
    
    //se l'utente sbaglia ad inserire dei valori
    if ((continua!="sì") || (continua!="no"))
    {
        goto scegli;
    }
}
