#ifndef FUNCTIONS
#define FUNCTIONS

int TitForTat(int ID, int n, int SC[2], int *H); //しっぺ返し戦法 弘中
int roma(int ID, int n, int SC[2], int *H);
int tatsuki(int ID, int n, int SC[2], int *H); //直近10試合の相手の手の割合をみて,多い方の真似をする. 野口
int Feld(int ID, int n, int SC[2], int *H); //しっぺ返し・改 (確率で裏切る。確率は初期値0%から1試合ごとに0.1%増え、最大で50%) 野口

#endif