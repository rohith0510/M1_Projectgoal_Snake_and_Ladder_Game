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

int random()
{
    int rem;
    R:rem=rand()%7;
    if (rem==0)
       goto R;
    else
       return rem;

}
void displaychart(int currentpos,char player[4])
{
    int i,j,t,c,sft=0,diceres,pos1,pos2;
    
	    if(currentpos==100)
		{
		    printf("*******congratulations *******\n\n\n player %s wins\n",player);
            scanf("*%s");
            exit(0);
		}
    for(i=10;i>0;i--)
	{
         t=i-1;
         if((sft%2)==0)
		 {
             c=0;
             for(j=10;j>=1;j--)
			 {
                 diceres=(i*j)+(t*c++);
                 if(currentpos==diceres)
				 {
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
 
void main()
{

     int i,dice,current_pos1=0,current_pos2=0;
     char ch;
     while(1)
	 {
         printf("        ***  SNAKE AND LADDER GAME  ***\n \t \tCoded By rohith\n");
         printf("Snake 99 to 78      ladder 71 to 91\n");
         printf("Snake 96 to 75      ladder 63 to 81\n");
         printf("Snake 93 to 73      ladder 28 to 84\n");
         printf("Snake 87 to 24      ladder 51 to 67\n");
         printf("Snake 59 to 37      ladder 40 to 59\n");
         printf("Snake 62 to 19      ladder 20 to 38\n");
         printf("Snake 64 to 60      ladder 09 to 31\n");
         printf("Snake 54 to 34      ladder 04 to 14\n");
         printf("Snake 17 to 07      ladder 02 to 36\n");
         printf("The player who reach 100 first will be winner\n");
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
                             displaychart(78,"$P1$");//there is a snake

                         }
                         if(current_pos1==96)
                         {
                             displaychart(75,"$P1$");//there is a snake

                         }
                         
                         if(current_pos1==93)
                         {
                             displaychart(73,"$P1$");//there is a snake

                         }
                         if(current_pos1==87)
                         {
                             displaychart(24,"$P1$");//there is a snake


                         }
                         if(current_pos1==59)
                         {
                             displaychart(37,"$P1$");//there is a snake

                         }
                         if(current_pos1==62)
                         {
                             displaychart(19,"$P1$");//there is a snake
                             
                         }
                         if(current_pos1==64)
                         {
                             displaychart(60,"$P1$");//there is a snake
                             
                         }
                         if(current_pos1==54)
                         {
                             displaychart(34,"$P1$");//there is a snake
                             
                         }
                         if(current_pos1==17)
                         {
                             displaychart(07,"$P1$");//there is a snake
                             
                         }
                         if(current_pos1==71)
                         {
                             displaychart(91,"$P1$");//there is ladder
                             
                         }
                         if(current_pos1==63)
                         {
                             displaychart(81,"$P1$");//there is ladder
                             
                         }
                         if(current_pos1==28)
                         {
                             displaychart(84,"$P1$");//there is ladder
                             
                         }
                         if(current_pos1==51)
                         {
                             displaychart(67,"$P1$");//there is ladder
                             
                         }
                         if(current_pos1==40)
                         {
                             displaychart(59,"$P1$");//there is ladder
                             
                         }
                         if(current_pos1==20)
                         {
                             displaychart(38,"$P1$");//there is ladder
                             
                         }
                         if(current_pos1== 9)
                         {
                             displaychart(31,"$P1$");//there is ladder
                             
                         }
                         if(current_pos1==04)
                         {
                             displaychart(14,"$P1$");//there is ladder
                             
                         }
                         if(current_pos1==02)
                         {
                             displaychart(36,"$P1$");//there is ladder
                             
                         }
                         else{
                             displaychart(current_pos1,"$P1$");
                         }

                    }
                    else{
                        current_pos1=current_pos1-dice;
                        printf("Range  exceeded of palyer 1.\n");
                        displaychart(current_pos1,"$P1$");
                    }
                    printf("Player 2 position is%d\n",current_pos2);

                break;
            case '2':dice=random();
            system("cls");
                  printf("\t\t\tdice=%d\n\n",dice);
                  current_pos2=dice+current_pos2;
                  if(current_pos2<101){
                      if(current_pos1==99)
                         {
                             displaychart(78,"$P2$");//there is a snake

                         }
                         if(current_pos1==96)
                         {
                             displaychart(75,"$P2$");//there is a snake

                         }
                         
                         if(current_pos1==93)
                         {
                             displaychart(73,"$P2$");//there is a snake

                         }
                         if(current_pos1==87)
                         {
                             displaychart(24,"$P2$");//there is a snake


                         }
                         if(current_pos1==59)
                         {
                             displaychart(37,"$P2$");//there is a snake

                         }
                         if(current_pos1==62)
                         {
                             displaychart(19,"$P2$");//there is a snake
                             
                         }
                         if(current_pos1==64)
                         {
                             displaychart(60,"$P2$");//there is a snake
                             
                         }
                         if(current_pos1==54)
                         {
                             displaychart(34,"$P2$");//there is a snake
                             
                         }
                         if(current_pos1==17)
                         {
                             displaychart(07,"$P2$");//there is a snake
                             
                         }
                         if(current_pos1==71)
                         {
                             displaychart(91,"$P2$");//there is ladder
                             
                         }
                         if(current_pos1==63)
                         {
                             displaychart(81,"$P2$");//there is ladder
                             
                         }
                         if(current_pos1==28)
             #include<stdio.h>
#include<stdlib.h>            {
                             displaychart(84,"$P2$");//there is ladder
                             
                         }
                         if(current_pos1==51)
                         {
                             displaychart(67,"$P2$");//there is ladder
                             
                         }
                         if(current_pos1==40)
                         {
                             displaychart(59,"$P2$");//there is ladder
                             
                         }
                         if(current_pos1==20)
                         {
                             displaychart(38,"$P2$");//there is ladder
                             
                         }
                         if(current_pos1==9)
                         {
                             displaychart(31,"$P2$");//there is ladder
                             
                         }
                         if(current_pos1==04)
                         {
                             displaychart(14,"$P2$");//there is ladder
                             
                         }
                         if(current_pos1==02)
                         {
                             displaychart(36,"$P2$");//there is ladder
                             
                         }
                      else{
                          displaychart(current_pos2,"$P2$");
                      }
                  }  
                  else{
                      current_pos2=current_pos2-dice;
                      printf("Range exceeded of Player 2. \n");
                      displaychart(current_pos2,"$P2$");
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
 