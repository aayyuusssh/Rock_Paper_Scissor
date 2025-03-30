#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{   
    int rnumb;
    srand(time(0));
    rnumb = rand()%100 + 1 ;

    char ch;
    printf("\nEnter 'r' for ROCK , 'p' for PAPER , 's' for SCISSOR : ");
    scanf("%c",&ch);
    
    if(ch=='r' || ch=='p' || ch=='s'){
        if(rnumb<33){
            printf("\nComp choose ROCK and you choose ");
            if(ch=='r'){
                printf("ROCK !! So its a TIE...\n ");
            }
            else if(ch=='p'){
                printf("PAPER !! So you WON...\n ");
            }
            else{
                printf("SCISSOR !! So you LOOSE...\n ");
            }
        }
        
        if(rnumb>33 && rnumb<66){
            printf("Comp choose PAPER and you choose ");
            if(ch=='r'){
                printf("ROCK !! So you LOOSE...\n ");
            }
            else if(ch=='p'){
                printf("PAPER !! So its a TIE...\n ");
            }
            else{
                printf("SCISSOR !! So you WON...\n ");
            }
        }

        if(rnumb>66){
            printf("Comp choose SCISSOR and you choose ");
            if(ch=='r'){
                printf("ROCK !! So you WON...\n ");
            }
            else if(ch=='p'){
                printf("PAPER !! So you LOOSE...\n ");
            }
            else{
                printf("SCISSOR !! So its a TIE...\n ");
            }
        }
    
    }
    else{
        printf("You Entered wrong Word");
    }

    return 0;
}    