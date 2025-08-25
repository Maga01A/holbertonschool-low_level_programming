#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Ghost", 4.75, "Jon Snow");
    printf("My name is %s, and I am %.2f :) - Woof!\n", my_dog.name, my_dog.age);

    return 0;
}

