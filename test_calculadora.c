#include <stdio.h>
#include <assert.h>

#include "function_multiplicar.c"
#include "function_dividir.c"

int main() {

    assert(multiplique(2,0) == 0);
    assert(multiplique(3,6) == 18);
    assert(multiplique(42,64) == 2688);

    assert(divida(14,2) == 7);
    assert(divida(99,3) == 33);
    assert(divida(144,12) == 12);

    printf("Feito por Allyson Rodolfo (https://github.com/TravaChipzzxk)\n");
    return 0;
}
