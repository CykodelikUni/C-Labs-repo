#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)

{

    int feet, fathoms;
    //Declarations are here
    printf("The two variables are the integers: feet and fathoms\nThey have just been declared\n");

    fathoms = 2;
    printf("fathoms (ldeclaration) is: %d (rdeclaration)\n", fathoms);
    

    feet = 6 * fathoms;
     printf("feet (ldeclaration) is: %d (rdeclaration)\n", feet);


    printf("There are %d feet in %d fathoms!\n", feet, fathoms);

    printf("Yes, I said %d feet!\n", 6 * fathoms);

    return 0;

}
