#include <stdio.h>

int main(void)

{

    int dogs, cats;



    printf("How many dogs do you have?\n");

    scanf("%d", &dogs);
    
    printf("So you have %d dog(s)!\nWhat about cats?\n", dogs);

    scanf("%d", &cats);

    printf("is %d a lot of pets?\n", cats+dogs);

    return 0;

}