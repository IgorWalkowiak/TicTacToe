#ifndef TICTACTOE_H_INCLUDED
#define TICTACTOE_H_INCLUDED


enum pole {puste, kolko, krzyzyk=5};

class TicTacToe
{

public:
TicTacToe(void);


private:
int wiersz, kolumna;
pole coTeraz;
pole tab[3][3];
void wyswietlaniePlanszy(void);
void wpisywanieDanych(void);
void core(void);

};

#endif // TICTACTOE_H_INCLUDED
