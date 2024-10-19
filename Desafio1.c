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
    int seqFib[100]; // Array para armazenar a sequ�ncia
    int length = 0;

    sequenciaFibonacci(num, seqFib, &length);

    // Verifica se o n�mero pertence � sequ�ncia
    for (int i = 0; i < length; i++) {
        if (seqFib[i] == num) {
            return 1; // O n�mero pertence � sequ�ncia
        }
    }
    return 0; // O n�mero n�o pertence � sequ�ncia
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numeroInformado;

    printf("Informe um n�mero: ");
    scanf("%d", &numeroInformado);

    if (checkFib(numeroInformado)) {
        printf("O n�mero %d pertence � sequ�ncia de Fibonacci.\n", numeroInformado);
    } else {
        printf("O n�mero %d n�o pertence � sequ�ncia de Fibonacci.\n", numeroInformado);
    }

    return 0;
}
