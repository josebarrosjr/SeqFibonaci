#include <stdio.h>

int contarA(const char *str) {
    int count = 0;
    while (*str) {
        // verificar caractere a ou A
        if (*str == 'a' || *str == 'A') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    //string previamente definida
    const char *str = "Esta e uma string de exemplo para contar as letras A.";

    int quantidade = contarA(str);

    if (quantidade > 0) {
        printf("A letra 'a/A' ocorre %d vezes na string.\n", quantidade);
    } else {
        printf("A letra 'a/A' nao ocorre na string.\n");
    }

    return 0;
}
