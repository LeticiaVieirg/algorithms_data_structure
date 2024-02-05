//using fprintf
#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("arquivo.txt", "w");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    fprintf(fp, "Hello World!"); // Escreve a string "Hello World!" no arquivo apontado por fp
    fclose(fp);

    return 0;
}
