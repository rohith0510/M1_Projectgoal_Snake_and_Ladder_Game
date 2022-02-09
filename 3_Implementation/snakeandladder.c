/**
 * @file snakeandladder.c
 * @author your name (you@domain.com)
 * @brief in this  snake and ladder game we can play more than two players
 * @version 0.1
 * @date 2022-02-09
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<stdio.h>
#include<stdlib.h>
int random(){
    int rem;
    R:rem=rand()%7;
    if (rem==0)
       goto R;
    else
       return rem;

}
 void Displaychart(int currentpos,char player[4])
 {
     int i,j,t,c,sft=0,diceres,pos1,pos2;
     if(currentpos==100){
         printf("*******congratulations *******\n\n\n player %s wins\n",player);
         scanf("*%s");
         exit(0);
     }
     for(i=10;i>0;i--){
         t=i-1;
         if((sft%2)==0){
             c=0;
             for(j=10;j>=1;j--){
                 diceres=(i*j)+(t*c++);
                 if(currentpos==diceres){
                     printf("%s\t",player);
                 }
                 else
                 printf("%d\t",diceres);

             }
             sft++;
         }
         else{
             c=9;
             for(j=1;j<=10;j++){
                 diceres=(i*j)+(t*c--);
                 if(currentpos==diceres)
                     printf("%s\t",player);
                 else
                     printf("%d\t",diceres);

                 }
                 sft++;
    
             }
             printf("\n\n");
         }

    printf("---------------------------------------------\n");
    
     }
 
 void main(){

     int i,dice,current_pos1=0,current_pos2=0;
     char ch;
     while(1){
         printf("        ***  SNAKE AND LADDER GAME  ***\n \t \tCoded By rohith\n");
         printf("Snakes: -25 t0 9,\t 65 t0 40,\t 99 t0 1.\nLadder:- 13 t0 42,\t 60 t0 83,\t 70 to 93.\n");
         printf("choose your option\n");
         printf("1. Player 1 plays\n");
         printf("2. Player 2 plays\n");
         printf("3.Exit\n");
         scanf("%s",&ch);

         switch(ch)
         {

             case '1':dice=random();
             system("cls");
                      printf("\t\t\tdice = %d\n\n",dice);
                    if(dice==6)
                    printf("dice=6: you have one more chance to play.\n");
                    current_pos1=dice+current_pos1;
                    if(current_pos1<101)
                    {
                         if(current_pos1==99)
                         {
                             Displaychart(1,"$P1$");//there is a snake

                         }
                         if(current_pos1==65)
                         {
                             Displaychart(40,"$P1$");//there is a snake

                         }
                         
                         if(current_pos1==25)
                         {
                             Displaychart(9,"$P1$");//there is a snake

                         }
                         if(current_pos1==70)
                         {
                             Displaychart(93,"$P1$");// there is a Ladder


                         }
                         if(current_pos1==60)
                         {
                             Displaychart(83,"$P1$");//there is a Ladder

                         }
                         if(current_pos1==13)
                         {
                             Displaychart(42,"$P1$"); //there is a ladder
                         }
                         else{
                             Displaychart(current_pos1,"$P1$");
                         }

                    }
                    else{
                        current_pos1-dice;
                        printf("Range  exceeded of palyer 1.\n");
                        Displaychart(current_pos1,"$P1$");
                    }
                    printf("Player 2 position is%d\n",current_pos2);

                    break;
            case '2':dice=random();
            system("cls");
                  printf("\t\t\tdice=%d\n\n",dice);
                  current_pos2=dice+current_pos2;
                  if(current_pos2<101){
                      if(current_pos2==99)
                      {
                          Displaychart(1,"$P2$");
                      }
                      if(current_pos2==65) //there is a snake
                      {
                          Displaychart(40,"$P2$");
                      }
                      if(current_pos2==25)//there is a snake
                      {
                          Displaychart(9,"$P2$");

                      }
                      if(current_pos2==70)//there is ladder
                      {
                          Displaychart(93,"$P2$");
                      }
                      if(current_pos2==60)//there is ladder
                      {
                          Displaychart(83,"$P2$");
                          
                      }
                      if(current_pos2==13)//there is ladder
                      {
                          Displaychart(42,"$P2$");
                      }
                      else{
                          Displaychart(current_pos2,"$P2$");
                      }
                  }  
                  else{
                      current_pos2=current_pos2-dice;
                      printf("Range exceeded of Player 2. \n");
                      Displaychart(current_pos2,"$P2$");
                  } 
                  printf("Player 1 position is %d]\n",current_pos1);
             break;
            case '3': exit(0);
               break;
            default:
                printf("Incorrect choice. Try Again\n");             

        }
     }
 }