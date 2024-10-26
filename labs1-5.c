#include <stdio.h>

int add (int a,int b){
 return a+b;
}
int subtract(int a, int b){
    return a-b;
}
int multiply (int a, int b){
    return a*b;
}
int main(void)
{
 int big, small, nuffin;
    big = 20;
    small = 5;
    nuffin = 0;
    

    printf("big + small = %d\n", add(big,small) );
    printf("small - big = %d\n",subtract(small,big));
    printf("big * 0 = %d\n", multiply(big,nuffin));
    printf("big * small - 0 = %d\n",(multiply(big,small))-0);
    printf("big + 0 * small / 5 = %d", (big+0*small/5)); //checking bodmas

     return 0;
}
