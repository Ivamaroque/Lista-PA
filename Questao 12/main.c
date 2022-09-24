/* 12. O que é um ponteiro para uma função? Pesquise na Internet referências sobre o assunto e escreva um pequeno programa exemplificando o uso deste recurso. */
/*
O uso de ponteiros para funções serve para definir qual função será executada sem a necessidade de escrever o nome da função inteira naquele ponto do código. No geral, a função é feita em outra parte do código e fazemos o ponteiro apontar para a função desejada.
*/

#include <stdio.h>

void troca(int *a,int *b){
 int aux = 0;

 aux = *a;
 *a = *b;
 *b = aux;

}

int main(){

   int a = 5, b = 2;

   troca(&a,&b);

   printf("a = %d e b =%d", a, b);
  
  return 0;

}