Autoshut is basically a timed shutdown of your PC/laptop, based on your input. (minutes)
It's written in C. 
Here's the code:

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 
int main()
{
   char ch;  /*ch is basically the 'y' or 'n', which is used to navigate through the "menu".*/ 
   unsigned c; /*c is your input. (minutes)*/
 
   printf("Set the timer in minutes for auto-shut down.\nWARNING: Make sure to save your work before continuing!!\nPress 'y' to continue or 'n' to quit.\n");
   scanf("%c", &ch); /* input "y", if you wish to continue with autoshutdown or "n" to quit the program.*\
 
   switch(ch)
   {
       case 'y':
       printf("Time to shutdown: ");
       scanf("%d", &c);  /* Enter time(minutes) until shutdown here. */
       printf("\nTimer started.");
       while(c!=0)    /* The main loop. Refreshes everytime a minute passes by, until it reaches 0, when it commences automatic shutdown of your computer.*/
       {
           clrscr();
           printf("Minutes to automatic shutdown: %d\n", c);
           sleep(60);                                           /*sleep(60) - "Pause" for sixty seconds before "c" (minutes) decrement.*/
           c--;
       }
       system("C:\\WINDOWS\\System32\\shutdown -s");           /* speaks for itself, the main shutdown .exe located in the Windows folder.*/
       
       
       case 'n':                                              /* If inputing 'n', quits the program */.
       exit(0);
   }
