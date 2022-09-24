/*14. Reimplemente o programa da questão anterior utilizando a função qsort() do C. Comente o seu código, explicando o que faz cada uma das linhas.*/

#include <stdio.h>
#include <stdlib.h>

int i, j;
float x;


//função para organizar em ordem crescente
  int ordemc(const void *x, const void *y){
  if(*(int*)x > *(int*)y){
    return 1;
  } else if(*(int*)x < *(int*)y){
    return -1;
  } else{
    return 0;
  }
}



int main(){
  float *elementos;
  int size;

  //pega a quantidade de elementos do usuario
  printf("Quantos elementos para ordenar? ");
  scanf("%d", &size);

  elementos = malloc(size * sizeof(float));

// pega os valores dos elementos do usuario
  for (i=0; i < size; i++){
    printf("Digite o valor %i: ", i+1);
    scanf("%f", &elementos[i]);
  }

  qsort(elementos, size, sizeof(float), ordemc);
  
  for (i= 0;i<size;i++){
    printf("%f ", elementos[i]);
  }
  
  free(elementos); // libera a memória
  return 0;
}