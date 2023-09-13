#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "dicegame.h"

int getRandomNumber(int min, int max){
return (min + (rand() % (max+1 - min)));    //call function and return random number

}

enum ROUNDTYPE getRoundType(){
 int rNum = getRandomNumber(1,10); 
  if (rNum==1 || rNum==2){ 
      return BONUS;
  }
   if (rNum==3 || rNum==4 || rNum==5){
      return DOUBLE;
  } 
  else{
      return REGULAR;
  }
}

int getRoundPoints(enum ROUNDTYPE roundtype){
int rNum = getRandomNumber(1,10);
rNum*=10; 
if(roundtype==0){
    rNum=200; 
    
} 
else if(roundtype==1){
    rNum*=2;
}
 else {
     rNum=rNum;
 }
 return rNum;
    
}

void printPlayerPoints (int p1, int p2){ //printf's for points
    
    printf("P1\t: %d\n", p1); 
    printf("P2\t: %d\n", p2);
}
void printRoundInfo(enum ROUNDTYPE t, int dice, int points){ //printf's for results 
  
  if(t==0){
      printf("TYPE\t: BONUS\n");
      printf("DICE\t: %d\n",dice);
      printf("POINTS\t: %d\n",points);
  }
  else if (t==1){
      printf("TYPE\t: DOUBLE\n");
      printf("DICE\t: %d\n",dice);
      printf("POINTS\t: %d\n", points);
  }
   else{
      printf("TYPE\t: REGULAR\n");
      printf("DICE\t: %d\n",dice);
      printf("POINTS\t: %d\n", points);
  }
}
  
