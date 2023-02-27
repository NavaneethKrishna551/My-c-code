#include <stdio.h>
#include <stdlib.h>



int main()
{

    char name[20];
    char lastname[10];
    int age;

    printf("Type your name: ");
    scanf("%s" , name);

    printf("Type your last name: ");
    scanf("%s" , lastname);

    printf("Type your age: ");
    scanf("%d" , &age);

    printf("You are: %s %s And you are %d Years old" , name , lastname , age);

    return 0;
}
