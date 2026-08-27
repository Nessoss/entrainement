#include <stdio.h>
#include <stdlib.h>

int my_factrec_synth(int nb) {
    if (nb < 0 || nb > 12)
        return 84;
    if (nb == 0)
        return 1;
    return nb * my_factrec_synth( nb - 1);
}
int main(int ac, char **av) {
    int nb = 5;
    int res = 0;
    res = my_factrec_synth(nb);
    printf("%d", res);
    printf("\n");
    return 0;
}
