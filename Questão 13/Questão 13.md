# Questao 13

## Programa

```c
#include <stdio.h>
#include <stdlib.h>

void print_elements(float *elements, int n){
  printf("[");
  for (int i = 0; i < n; i++) {
    if(i < n-1){
      printf("%.2f, ", elements[i]);
    }else{
      printf("%.2f]\n", elements[i]);
    }
  }
}
void order_elements(float *elements, int n){
  float aux;
  for (int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++){
      if(elements[i] < elements[j]){
        aux = elements[i];
        elements[i] = elements[j];
        elements[j] = aux;
      }
    }
  }
}

int main() {
  float * elements;
  int n;
  printf("\nInsira o valor de n: ");
  scanf("%d", &n);

  elements = malloc(n * sizeof(float));
  printf("\n");
  for (int i = 0; i < n; i++) {
    printf("\tValor do %i° elemento: ", i+1);
    scanf("%f", &elements[i]);
  }
  order_elements(elements, n);
  printf("\nElementos ordenados:\n  ");
  print_elements(elements, n);

  free(elements);
}
```

## Console
```
Insira o valor de n: 5

    Valor do 1° elemento: 23.5
    Valor do 2° elemento: 76.4
    Valor do 3° elemento: 11.29
    Valor do 4° elemento: 98.54
    Valor do 5° elemento: 67.14

Elementos ordenados:
  [11.29, 23.50, 67.14, 76.40, 98.54]
```

