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
  printf("\nElementos ordenados:\n  ");
  print_elements(elements, n);

  free(elements);
}