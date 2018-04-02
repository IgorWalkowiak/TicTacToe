#include "TicTacToe.h"
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>

using namespace std;

TicTacToe::TicTacToe()
{
    tab[0][0]=puste; tab[0][1]=puste;tab[0][2]=puste;tab[1][0]=puste;tab[1][1]=puste;tab[1][2]=puste;tab[2][0]=puste;tab[2][1]=puste;tab[2][2]=puste; //xD
    srand(time(NULL));
    if(rand()%2) coTeraz=krzyzyk; else coTeraz=kolko;

    core();

    wyswietlaniePlanszy();
    cout<<endl<<endl<<endl<<"GRATULACJE! Wygral gracz ktory sterowal: ";
    if(coTeraz==kolko) cout<< "krzyzykiem! ";
    else cout<<"kolkiem! ";
}

void TicTacToe::core(void)
{
    while(1)
    {

    wyswietlaniePlanszy();

    cout<<endl<<endl<<endl<<"TERAZ: ";
    if(coTeraz==kolko)cout<<"kolko"<<endl;
    else cout<<"krzyzyk"<<endl;

    wpisywanieDanych();

      if(coTeraz==kolko) {    tab[wiersz][kolumna]=kolko;     coTeraz=krzyzyk;}
        else             {    tab[wiersz][kolumna]=krzyzyk;   coTeraz=kolko;}



        if((tab[0][0]+tab[1][0]+tab[2][0])==3 || (tab[0][0]+tab[1][0]+tab[2][0])==15)break;
        if((tab[0][1]+tab[1][1]+tab[2][1])==3 || (tab[0][1]+tab[1][1]+tab[2][1])==15)break;
        if((tab[0][2]+tab[1][2]+tab[2][2])==3 || (tab[0][2]+tab[1][2]+tab[2][2])==15)break;
        if((tab[0][0]+tab[0][1]+tab[0][2])==3 || (tab[0][0]+tab[0][1]+tab[0][2])==15)break;
        if((tab[1][0]+tab[1][1]+tab[1][2])==3 || (tab[1][0]+tab[1][1]+tab[1][2])==15)break;
        if((tab[2][0]+tab[2][1]+tab[2][2])==3 || (tab[2][0]+tab[2][1]+tab[2][2])==15)break;
        if((tab[0][0]+tab[1][1]+tab[2][2])==3 || (tab[0][0]+tab[1][1]+tab[2][2])==15)break;
        if((tab[0][2]+tab[1][1]+tab[2][0])==3 || (tab[0][2]+tab[1][1]+tab[2][0])==15)break;

        system( "cls" );

    }
}

void TicTacToe::wyswietlaniePlanszy(void)
{
            cout<<"   1  2  3"<<endl;
            for(int i=0;i<3;i++)
            {
            cout<<i+1<<" ";
                for(int j=0;j<3;j++)
                {
                    cout<<"[";
                    switch(tab[i][j])
                    {
                    case puste  :cout<<" "; break;
                    case kolko  :cout<<"O"; break;
                    case krzyzyk:cout<<"X"; break;
                    }
                    cout<<"]";
                }
                cout<<endl;
            }

}

void TicTacToe::wpisywanieDanych(void)
{
while(1)
{
    cout<<"Podaj numer wierszu gdzie chcesz umiescic swoj znak: ";
    cin>>wiersz;

    while(1)
        {
            if(wiersz==1 || wiersz==2 || wiersz==3){ wiersz--; break;}
            else
            {
                cout<<"Takiego wiersza nie widze. Wpisz jeszcze raz";
                cin>>wiersz;
            }
        }

    cout<<"Podaj numer kolumny gdzie chcesz umiescic swoj znak: ";
    cin>>kolumna;

    while(1)
        {
        if(kolumna==1 || kolumna==2 || kolumna==3){ kolumna--; break;}
        else
            {
                cout<<"Takiej kolumny nie widze. Wpisz jeszcze raz";
                cin>>kolumna;
            }
        }
        if(tab[wiersz][kolumna]==puste)break;
        else cout<<"To pole jest zajete... WPISZ JESZCZE RAZ."<<endl<<endl<<endl;
}
}


