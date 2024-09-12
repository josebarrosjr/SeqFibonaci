#include <stdio.h>

//Sequencia Fibonacci

int pertenceFibonacci(int num) {
       if (num == 0 || num == 1) {
        return 1;
    }

    int a = 0, b = 1, c = a + b;
    
    while (c <= num) {
        if (c == num) {
            return 1; //pertence a sequencia
        }
        
        a = b;
        b = c;
        c = a + b;
    }

    return 0; //não pertence
}

int main() {
    int numero;

    //entrada de dados
    printf("Digite um numero para verificar se pertence a sequencia de Fibonacci: ");
    scanf("%d", &numero);

    //verificação
    if (pertenceFibonacci(numero)) {
        printf("O numero %d pertence a sequencia de Fibonacci.\n", numero);
    } else {
        printf("O numero %d nao pertence a sequencia de Fibonacci.\n", numero);
    }

    return 0;
}
