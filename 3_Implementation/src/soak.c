/**
 * @file soak.c
 * @author Vivek
 * @brief to facilitate the user for automated soak option.
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
# include "wmcs.h"

void soak(char *result, int count){
   system("cls");
   char ch;
   printf("\n**************************************************************");
   printf("\n                      * ((Soak menu)) *                       ");
   printf("\n**************************************************************");
   printf("\nIf you want soak please press (y)YES, else (n)NO:");
   ch=getchar();
   printf("\n%c",ch);

   while(ch!='y' && ch!='n')
   {
      printf("\nInvalid answer. Type correctly:");
      ch= getchar();
      printf("\n%c",ch);
   }
   int count_next = count;
   if(ch=='y')
   {
      result[count]=ch;
      count_next = count++;
      soakTime(result, count_next);
   }
   
   Temperature(result, count_next);
 }