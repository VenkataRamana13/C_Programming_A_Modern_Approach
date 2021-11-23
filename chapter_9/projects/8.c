#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define die_number 6

int roll_dice(void);
//bool play_game_1st_roll(void);
bool play_game(void);

int main(){
    int wins = 0, losses = 0, num_games = 0; 
    char play_again = 'Y';
    //bool 1st_round;
    //1st_round = play_game_1st_roll();

    srand(time(NULL));
    
    while (play_again == 'y' || play_again == 'Y'){
        num_games++;
	    if (play_game()){
	        printf("You win!\n\nPlay again?");
	        scanf(" %c",play_again);
            wins++;
	    }
	    else {
	        printf("You lose!\n\nPlay again?");
	        scanf(" %c", play_again);
            losses++;
	    }
        
        if (play_again == 'n' || play_again == 'N'){
            printf("\nWins: %d\tLosses: %d\n", wins, losses);
            break;
        }    

    }
}

int roll_dice(void){
    int dice_1, dice_2;
    dice_1 = rand() % die_number + 1;
    dice_2 = rand() % die_number + 1;
    return dice_1 + dice_2;
}

bool play_game(void){
    int point=0;
    int value = roll_dice();
    if (value == 7 || value == 11){
        printf("You rolled %d\n", value);
        return true;}
    else if (value == 2 || value == 3 || value == 12){
        printf("You rolled %d\n", value);
        return false;}
    else {
        point = value; 
        printf("You rolled %d\n", value);
        printf("Your point is %d\n", value);
        while(true)
        {

            value = roll_dice();
            if(value == 7) {
                printf("You rolled %d\n", value);
                return false;
            }
            else if (value == point){
                printf("You rolled %d\n", value);
                return true;
            }
            else
                printf("You rolled %d\n", value);
        }
    }
}
/*
bool play_game(void){
    int value_2 = roll_dice();
    if (value_2 == 7 || value_2 == 11 || value_2 == n){
        printf("You rolled %d\n", value_2);
        return true;}
    else if (value_2 == 2 || value_2 == 3 || value_2 == 12){
        printf("You rolled %d\n", value_2);
        return false;}
    else 
        printf("You rolled %d\n", value_2);
        return play_game(n);
}
*/
