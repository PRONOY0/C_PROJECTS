#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int main()
{
    int n,player_input,coin;
    char name[34];

    printf("Enter how many rounds you want to play\n");
    scanf("%d",&n);


    printf("Enter your name\n");
    scanf("%s",name);


    for (int i = 0; i < n; i++)
    {
        printf("The first turn will be decided by the head-tail toss\n");
        printf("To choose head press 0\n");
        printf("To choose tail press 1\n");
        int choice = scanf("%d",&coin);
         
        int player_luck = generateRandomNumber(2);

        int computer = generateRandomNumber(2);

        if (choice==player_luck)
        {
            printf("%s Turn:\n",name);
            printf("Press 1 to choose Rock\n");
            printf("Press 2 to choose Scissors\n");
            printf("Press 3 to choose Paper\n");
            scanf("%d",&player_input);
            
            if (player_input==1)
            {
                //! ******************************************************* !//
                printf("Rock\n");
                //! ******************************************************* !//


                int computer_turn = generateRandomNumber(4);



                if (computer_turn==1)
                {
                    printf("Rock\n");
                    printf("Draw\n");
                }


                else if (computer_turn==2)
                {
                    printf("Scissors\n");
                    printf("%s has won this round\n",name);
                }


                else
                {
                    int score_computer00 = 1;
                    printf("Paper\n");
                    printf("Computer has won this round\n");
                }
            }

            else if (player_input==2)
            {
                //! ******************************************************* !//   
                printf("Scissors\n");
                //! ******************************************************* !//   


                int computer_turn01 = generateRandomNumber(4);
                 
                if (computer_turn01==1)
                {
                    printf("Rock\n");
                    printf("Computer has won this round\n");
                }


                else if (computer_turn01==2)
                {
                    printf("Scissors\n");
                    printf("Draw\n");
                }


                else
                {
                    printf("Paper\n");
                    printf("%s has won this round\n",name);
                }

            }
            
            else if(player_input==3)
            {

                //! ******************************************************* !//
                printf("Paper\n");
                //! ******************************************************* !//


                int computer_turn02 = generateRandomNumber(4);
                 
                if (computer_turn02==1)
                {
                    printf("Rock\n");
                    printf("%s has won this round\n",name);
                }


                else if (computer_turn02==2)
                {
                    printf("Scissors\n");
                    printf("Computer has won this round\n");
                }


                else
                {
                    printf("Paper\n");
                    printf("Draw\n");
                }
            }

        }
        
        else if (choice!=player_luck)
        {
            printf("Computers turn\n");
            int computer_first_turn=generateRandomNumber(4);
            
            if (computer_first_turn==1 || computer_first_turn==0)
            {   
                printf("%s Turn:\n",name);
                printf("Press 1 to choose Rock\n");
                printf("Press 2 to choose Scissors\n");
                printf("Press 3 to choose Paper\n");
                scanf("%d",&player_input);


                if (player_input==1)
                {
                    printf("Computer:-Rock\n");
                    printf("Player:-Rock\n");
                    printf("Draw\n");
                }
                else if (player_input==2)
                {
                    printf("Computer:-Rock\n");
                    printf("Player:-Scissors\n");
                    printf("Computer has won this round\n");
                }
                else if(player_input==3)
                {
                    printf("Computer:-Rock\n");
                    printf("Player:-Paper\n");
                    printf("%s has won this round\n",name);
                }
            }

            else if (computer_first_turn==2 || computer_first_turn==0)
            {   
                // printf("Scissors\n");
                printf("%s Turn:\n",name);
                printf("Press 1 to choose Rock\n");
                printf("Press 2 to choose Scissors\n");
                printf("Press 3 to choose Paper\n");
                scanf("%d",&player_input);


                if (player_input==1)
                {
                    printf("Computer:-Scissors\n");
                    printf("Player:-Rock\n");
                    printf("%s has won this round\n",name);
                }
                else if (player_input==2)
                {
                    printf("Computer:-Scissors\n");
                    printf("Player:-Scissors\n");
                    printf("Draw\n");
                }
                else if(player_input==3)
                {
                    printf("Computer:-Scissors\n");
                    printf("Player:-Paper\n");
                    printf("Computer has won this round\n");
                }
            }

            else if (computer_first_turn==3 || computer_first_turn==0)
            {   
                // printf("Paper\n");
                printf("%s Turn:\n",name);
                printf("Press 1 to choose Rock\n");
                printf("Press 2 to choose Scissors\n");
                printf("Press 3 to choose Paper\n");
                scanf("%d",&player_input);


                if (player_input==1)
                {
                    printf("Computer:-Paper\n");
                    printf("Player:-Paper\n");
                    printf("Computer has won this round\n");
                }
                else if (player_input==2)
                {
                    printf("Computer:-Paper\n");
                    printf("Player:-Scissors\n");
                    printf("%s has won this round\n",name);
                }
                else if(player_input==3)
                {
                    printf("Computer:-Paper\n");
                    printf("Player:-Paper\n");
                    printf("Draw\n");
                }
            }
        }
        
        else
        {
            printf("Please choose those options which are mentioned\n");
        }
    }


    printf("Match has ended\n");

    return 0;
}