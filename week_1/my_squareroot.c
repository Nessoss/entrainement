#include <stdlib.h>
#include <stdio.h>

int my_squareroot_synthesis(int nb)
{
    int r = 0;
    int square = 0;

    if (nb < 0) 
        return (84);
    while (square < nb) {
        r++;
        square = r * r;
    }
    if (square == nb) {
        return (r);
    }
    
    return (0);
}

int main(int ac, char **av) {
    int nb = 49;
    int res = 0;
    res = my_squareroot_synthesis(nb);
    printf("%d\n", res);
    return 0;
}
