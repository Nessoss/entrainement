#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int a = 0;
    int print = 0;

    if (ac != 2)
        return 84;
    a = atoi(av[1]);
    if(a % 3 == 0){
        printf("fizz");
        print++;
    }
    if (a % 5 == 0) {
        printf("buzz\n");
        print++;
    }
    if (print == 0)
        printf("%s\n",av[1]);
    printf("\n");
    return 0;
}