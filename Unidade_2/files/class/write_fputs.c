//using fputs
#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("arquivo.txt", "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    fputs("Hello World!", file);
    fclose(file);

    return 0;
}
