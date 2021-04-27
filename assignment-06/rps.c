/*
* Project name: rps
--------------------------------------------
    ID:9931098
    Name:ابراهیم صدیقی
    Mail:isedighi06@gmail.com
--------------------------------------------
*/
#include <stdio.h>
#include <windows.h>
#include <time.h>

int main() {
	int goal;
	int player_choice, bot_choice;
	int player_score = 0, bot_score = 0;

	printf("Enter the Goal:\n");
	scanf("%d", &goal);

	while (player_score < goal && bot_score < goal) {
		// print the scores at the top of the window
		printf("Your score : %d\t\tBot score : %d\n\n", player_score, bot_score);

		// get player choice
		printf("Press 1 for Rock, Press 2 for Paper, Press 3 for Scissors\n");
		scanf("%d", &player_choice);

		// make a random choice for the computer
		srand(time(NULL));
		bot_choice = rand() % 3 + 1 ;

		switch (player_choice) {
         case 1://r
           switch(bot_choice){
            case 1://r
                   printf("draw") ;
                   break ;
            case 2://p
                   bot_score++ ;
                   printf("bot winner") ;
                   break ;
            case 3://s
		           player_score++ ;
		           printf("player winner") ;
		           break ;
          }
          break ;
         case 2://p
           switch(bot_choice){
             case 1://r
                   player_score++ ;
	               printf("player winner") ;
	               break ;
             case 2://p
                   printf("draw") ;
                   break ;
             case 3://s
                   bot_score++ ;
                   printf("bot winner") ;
                   break ;

          }
		  break ;
         case 3://s
          switch(bot_choice){
                case 1://r
                       bot_score++ ;
                       printf("bot winner") ;
                       break ;
	            case 2://p
		               player_score++ ;
		               printf("player winner") ;
		               break ;

                case 3://s
                       printf("draw") ;
                       break ;
          }
          break ;
     }

		Sleep(2000);
		system("cls");
	}

	// print final result
	printf("Your score : %d\t\tBot score : %d\n\n", player_score, bot_score);


	if(player_score== bot_score){
        printf("draw") ;
	}
	if(player_score< bot_score){
        printf("bot winner") ;
	}
	if(player_score> bot_score){
        printf("player winner") ;
	}
    // Check who is the winner and congrats him/her/it!!
	// Write your code here
}
