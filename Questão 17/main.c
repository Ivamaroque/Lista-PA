/*
17. Escreva uma função em c que escreva em um vetor a soma dos elementos correspondentes de
outros dois vetores (os tamanhos dos vetores devem ser fornecidos pelo usuário). Por exemplo,
se o primeiro vetor contiver os elementos 1, 3, 0 e -2, e o segundo vetor contiver os elementos 3, 5, -3 e 1, o vetor de soma terá valores resultantes iguais a 4, 8, -3 e -1. A função deve receber 4 argumentos: os nomes dos três vetores e o número de elementos presentes em cada vetor.
*/  

#include <stdio.h>
#include <stdlib.h>

//função para somar os vetores
void somavetor(int* v1, int* v2, int* resultado, int n) {
    for (int i = 0; i < n; i++) {
        resultado[i] = v1[i] + v2[i];
    }
}

int main() {
    int n = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int* v1 = malloc(n*sizeof(int));
    int* v2 = malloc(n*sizeof(int));
    int* resultado = malloc(n*sizeof(int));

  //pega os dados do usuário
    for (int i = 0; i < n; i++) {
        printf("Digite o valor do %d do primeiro vetor: ", i + 1);
        scanf("%d", v1 + i);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("Digite o valor do %d do segundo vetor: ", i + 1);
        scanf("%d", v2 + i);
    }
    printf("\n");

  //puxa a função
    somavetor(v1, v2, resultado, n);

  //imprime o resultado
    printf("v1 + v2 =   ");
    for (int i = 0; i < n; i++) {
       printf("%d   ", resultado[i]);
    }

  //libera a memória
    free(v1);
    free(v2);
    free(resultado); 

    return 0;
}