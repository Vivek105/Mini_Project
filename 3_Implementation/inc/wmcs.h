/**
 * @file wmcs.h
 * @author Vivek
 * @brief contains all the headers required.
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __WMCS_H__
#define __WMCS_H__

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
//# include <stdio_ext.h> //not supported by the vcode command line
# include <time.h>
//# include <conio.h> //not supported by the linux command line
# include <unistd.h>
//# include <dos.h> //not supported by the linux command line

int main(void);
void start();
void mainmenu();
void Loadsize(int);
int System_checks(char*, int, int, int, int, int);
void WashMenu(char*, int);
void soak(char*, int);
void soakTime(char*, int);
void Temperature(char*, int);
void inputlog(char*, int);
void processlog(char*, int, int, int, int, int);
static char result[4];
static int times = 0, count = 0;

#endif  /* #define __WMCS_H__ */
