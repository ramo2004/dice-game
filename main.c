#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "dicegame.h"
#include <stdbool.h>



int main(){
    
    int rounds;
    int p1points;
    int p2points;
    int points;
    
    printf("Enter the number of rounds: ");
    
    scanf("%d", &rounds);
    
    printPlayerPoints(p1points,p2points);
    
    srand(time(0));
    
    
    
    int turn = 1; 
    // if 1, player 1 turn 
    
    // if turn is true, then players1 turn, else its player2 turn. 
    
    for(int i=0; i<rounds;i++){
        
        printf("\nROUND %d\n--------\n", i+1);
        printf("Player\t: %d\n", turn);
        enum ROUNDTYPE type; 
        type=getRoundType();
        
        int dice=getRandomNumber(1,6);
        
        if(turn==1){
            
            if(dice%2==1){
                points=getRoundPoints(type);
                p1points+= points;
            }
            else {
                points=getRoundPoints(type);
                p1points-= points;
                turn=2;
            }
                
        }
        
        else{
            if(dice%2==0){
                points=getRoundPoints(type);
                p2points+= points;
            }
            else {
                points=getRoundPoints(type);
                p2points-= points;
                turn=1;
            }
            
        }
       
         printRoundInfo(type, dice, points);
         printPlayerPoints (p1points, p2points);
    }
    
    if(p1points>p2points){
        printf("\nGAME OVER!!\nP1 Won");
    }
    else {
        printf("\nGAME OVER!! \nP2 Won");
        
    }
    
    return 0;
}
