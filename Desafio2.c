#include <stdio.h>
#include <string.h>
#include <locale.h>

int contA(const char *str) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }

    return count;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    char stringInformada[100]; // Array para armazenar a string

    printf("Informe uma string: ");
    fgets(stringInformada, sizeof(stringInformada), stdin);

    int quantA = contA(stringInformada);

    if (quantA > 0) {
        printf("A letra 'a' aparece %d vez(es) na string.\n", quantA);
    } else {
        printf("A letra 'a' não está presente na string.\n");
    }

    return 0;
}
