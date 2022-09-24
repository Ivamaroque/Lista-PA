// Na questão 13 o tempo foi de 0.000444 ms, da 14 foi 0.000027 ms e da 15 foi de 0.000014 ms.

/*13 */
/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i, j;
float x;


//função para organizar em ordem crescente
void ordemc(float *elemento, int size){
  for (i=0; i < size; i++){
    for (j=0; j < size; j++){
      if (elemento[i] < elemento[j]){
        x = elemento[i];
        elemento[i] = elemento[j];
        elemento[j] = x;
      }
    }
  }

  // imprime o vetor em ordem crescente
  for (i= 0; i < size ;i++){
    printf("%f ", elemento[i]);
  }
}



int main(){
  float *elementos;
  int size;

  clock_t tempo;
  
  //pega a quantidade de elementos do usuario
  printf("Quantos elementos para ordenar? ");
  scanf("%d", &size);

  elementos = malloc(size * sizeof(float));

// pega os valores dos elementos do usuario
   tempo = clock();
  for (i=0; i < size ;i++){
    printf("Digite o valor %i: ", i+1);
    scanf("%f", &elementos[i]);
  }
  ordemc(elementos, size);
  tempo = clock() - tempo;
  printf("\nO tempo do algoritmo foi de: %f ms\n", ((float)tempo)/CLOCKS_PER_SEC);
  
  free(elementos); // libera a memória
  return 0;
}

*///O tempo do algoritmo foi de: 0.000444 ms


//------------------------------------------------------------------------------------
/* 14 */
/*
#include <time.h>
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

  clock_t tempo;

  //pega a quantidade de elementos do usuario
  printf("Quantos elementos para ordenar? ");
  scanf("%d", &size);

  elementos = malloc(size * sizeof(float));

// pega os valores dos elementos do usuario
  for (i=0; i < size; i++){
    printf("Digite o valor %i: ", i+1);
    scanf("%f", &elementos[i]);
  }
  
 tempo = clock();
  qsort(elementos, size, sizeof(float), ordemc);
  
  for (i= 0;i<size;i++){
    printf("%f ", elementos[i]);
  }
tempo = clock() - tempo;
  printf("\nO tempo do algoritmo foi de: %f ms\n", ((float)tempo)/CLOCKS_PER_SEC);
  
  free(elementos); // libera a memória
  return 0;
}
*/ //O tempo do algoritmo foi de: 0.000027 ms


//-----------------------------------------------------------------------------------------
/*14*/
  /*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
  clock_t tempo;
  
  //pega a quantidade de elementos do usuario
  printf("Quantos elementos para ordenar? ");
  scanf("%d", &size);

  elementos = malloc(size * sizeof(float));

// pega os valores dos elementos do usuario
  for (i=0; i < size; i++){
    printf("Digite o valor %i: ", i+1);
    scanf("%f", &elementos[i]);
  }

  tempo = clock();
  ordenacaoqsort(elementos, size, ordemc); //chama a função
  tempo = clock() - tempo;
  printf("\nO tempo do algoritmo foi de: %f ms\n", ((float)tempo)/CLOCKS_PER_SEC);
  
  free(elementos); // libera a memória
  return 0;
}
*/
//O tempo do algoritmo foi de: 0.000014 ms
