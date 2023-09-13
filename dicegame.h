#ifndef DICEGAME_H
#define DICEGAME_H

int getRandomNumber(int min, int max);

enum ROUNDTYPE{BONUS, DOUBLE, REGULAR};

enum ROUNDTYPE getRoundType( );

int getRoundPoints(enum ROUNDTYPE roundType);

void printPlayerPoints(int p1, int p2);

void printRoundInfo(enum ROUNDTYPE t, int dice, int points); 

#endif
