/* two_func.c -- a program using two functions in one file */

#include <stdio.h>

void butler(char *me);      /* ISO/ANSI C function prototyping */

int main(void)
{
    char name[40] ;
    printf("introduce yourself please\n");
    
    scanf("%39s", name);

    printf("I will summon the butler function.\n");

    butler(name);

    printf("Yes. Bring me some tea and writeable CD-ROMS.\n");



    return 0;

}



void butler(char *me)          /* start of function definition */

{

    printf("You rang, sir? ah this must be %s\n", me);
   

}