#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int INDICE = 12, SOMA = 0, K = 1;

    while(K < INDICE) {
        K = K +1;
        SOMA = SOMA + K;
    }

    printf("Soma: %d\n", SOMA);

    return 0;
}
