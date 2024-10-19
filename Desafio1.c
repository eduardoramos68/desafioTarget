#include <stdio.h>
#include <locale.h>

void sequenciaFibonacci(int n, int *seqFib, int *length) {
    seqFib[0] = 0;
    seqFib[1] = 1;
    *length = 2;

    while (seqFib[*length - 1] < n) {
        seqFib[*length] = seqFib[*length - 1] + seqFib[*length - 2];
        (*length)++;
    }
}

int checkFib(int num) {
    int seqFib[100]; // Array para armazenar a sequência
    int length = 0;

    sequenciaFibonacci(num, seqFib, &length);

    // Verifica se o número pertence à sequência
    for (int i = 0; i < length; i++) {
        if (seqFib[i] == num) {
            return 1; // O número pertence à sequência
        }
    }
    return 0; // O número não pertence à sequência
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numeroInformado;

    printf("Informe um número: ");
    scanf("%d", &numeroInformado);

    if (checkFib(numeroInformado)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numeroInformado);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", numeroInformado);
    }

    return 0;
}
