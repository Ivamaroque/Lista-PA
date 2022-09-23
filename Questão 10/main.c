#include <stdio.h>

int main(){
  char Xchar[4];
  int Xint[4];
  float Xfloat[4];
  double Xdouble[4];

  printf("Tamanhos dos tipos:\n");
    printf(" - Char: %d.", sizeof(char));
    printf("\n - Int: %d;.", sizeof(int));
    printf("\n - Float: %d.", sizeof(float));
    printf("\n - Double: %d. \n", sizeof(double));
  
  printf("Para x+1:\n");
    printf(" - x como char:\n\tInicial: %ld; x+1 = %ld; diferença de %d.\n", Xchar, Xchar+1, 1*sizeof(char));
    printf(" - x como int:\n\tInicial: %ld; x+1 = %ld; diferença de %d.\n", Xint, Xint+1, 1*sizeof(int));
    printf(" - x como float:\n\tInicial: %ld; x+1 = %ld; diferença de %d.\n", Xfloat, Xfloat+1, 1*sizeof(float));
    printf(" - x como double:\n\tInicial: %ld; x+1 = %ld; diferença de %d.\n", Xdouble, Xdouble+1, 1*sizeof(double));
  printf("Para x+2:\n");
      printf( " - x como char:\n\tInicial: %ld; x+2 = %ld; diferença de %d.\n", Xchar, Xchar+2, 2*sizeof(char));
      printf(" - x como int:\n\tInicial: %ld; x+2 = %ld; diferença de %d.\n", Xint, Xint+2, 2*sizeof(int));
      printf(" - x como float:\n\tInicial: %ld; x+2 = %ld; diferença de %d.\n", Xfloat, Xfloat+2, 2*sizeof(float));
      printf(" - x como double:\n\tInicial: %ld; x+2 = %ld; diferença de %d.\n", Xdouble, Xdouble+2, 2*sizeof(double));
  printf("Para x+3:\n");
      printf(" - x como char:\n\tInicial: %ld; x+3 = %ld; diferença de %d.\n", Xchar, Xchar+3, 3*sizeof(char));
      printf(" - x como int:\n\tInicial: %ld; x+3 = %ld; diferença de %d.\n", Xint, Xint+3, 3*sizeof(int));
      printf(" - x como float:\n\tInicial: %ld; x+3 = %ld; diferença de %d.\n", Xfloat, Xfloat+3, 3*sizeof(float));
      printf(" - x como double:\n\tInicial: %ld; x+3 = %ld; diferença de %d.\n", Xdouble, Xdouble+3, 3*sizeof(double));
}