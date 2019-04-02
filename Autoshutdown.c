#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 
int main()
{
   char ch;
   unsigned c;
 
   printf("Set the timer in minutes for auto-shut down.\nWARNING: Make sure to save your work before continuing!!\nPress 'y' to continue or 'n' to quit.\n");
   scanf("%c", &ch);
 
   switch(ch)
   {
       case 'y':
       printf("Time to shutdown: ");
       scanf("%d", &c);
       printf("\nTimer started.");
       while(c!=0)
       {
           system("cls");
           printf("Minutes to automatic shutdown: %d\n", c);
           sleep(60);
           c--;
       }
       system("C:\\WINDOWS\\System32\\shutdown -s");
       
       
       case 'n':
       exit(0);
   }
return 0;
}
