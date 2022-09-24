/* 15. Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria função de ordenação. Para isso, sua função deverá receber, entre outros argumentos, um ponteiro para a função de comparação. */

#include <stdio.h>
#include <stdlib.h>

int i, j;
float x;

//função de ordenação
void ordenacaoqsort(float *ordem, int t, int(*comparacao)(const void *, const void *)){
  for (i = 0 ; i < t; i++){
    for (j = 0; j < t ; j++){
      if ((comparacao(&ordem[i], &ordem[j])) < 0){
        x = ordem[i];
        ordem[i] = ordem[j];
        ordem[j] = x;
      }
    }
  }
  for (i= 0; i < t; i++){
    printf("%f ", ordem[i]);
  }
}


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

  
  ordenacaoqsort(elementos, size, ordemc); //chama a função
  free(elementos); // libera a memória
  return 0;
}