/**
 * @file Temperature.c
 * @author Vivek
 * @brief to allow user to have option for water temperature for washing or soaking cycles.
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */
# include "wmcs.h"

void Temperature(char *result, int count){
    system("cls");
    char ch;
    printf("\n**************************************************************");
    printf("\n                   * ((Temperature menu)) *                   ");
    printf("\n**************************************************************");
    printf("\nEnter (h) for hot water option in operation");
    printf("\nEnter (c) for cold water option in operation");
    ch=getchar();
    printf("\n%c",ch);

    while(ch!='h' && ch!='c')
    {
        printf("\nInvalid command. Type correctly:");
        ch=getchar();
        printf("\n%c",ch);
    }
    result[count]=ch;
    int count_next = count++;
    inputlog(result, count_next);
}