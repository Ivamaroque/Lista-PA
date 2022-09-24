#include <stdio.h>
#include <stdlib.h>

void linha_coluna(int *nl, int *nc){
  printf("\tQntd. de linhas: ");
  scanf("%d", &*nl);
  printf("\tQntd. de colunas: ");
  scanf("%d", &*nc);
}

void inserir_matriz(int **matriz, int nl, int nc, char nm){
  int i, j;
  for(i = 0; i < nl; i++){
    for(j = 0; j < nc; j++){
      int aux;
      printf("\tDigite um valor para %c%d%d: ",nm, i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
}

void print_matriz(int **matriz, int nl, int nc){
  int i, j;
  for(i = 0; i < nl; i++){
    printf("\t");
    for(j = 0; j < nc; j++){
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

void validar_vetor(int nc_a, int * nl_b, int * nc_b){
  if(!(nc_a == *nl_b)){
    printf("\n\nERRO! O número de colunas de A é diferente do número de linhas da matriz B.\n");
    printf("Programa será encerrado!");
    exit(0);
  }
}

int **alocar_vetor(int nl, int nc){
  int **matriz = malloc(nl * sizeof(int *));
  matriz[0] = malloc(nc * nl * sizeof(int));
  for(int i = 1; i < nl; i++){
    matriz[i] = matriz[i - 1] + nc;
  }
  return matriz;
}

void matriz_produto(int **matriz_a, int **matriz_b, int **matriz_c, int nl_a, int nc_a, int nl_b, int nc_b){
  int sum;
  for(int i = 0; i < nl_a; i++) {
    for(int j = 0; j < nc_b; j++) {
      matriz_c[i][j] = 0;
      for(int k = 0; k < nl_b; k++) {
        sum += matriz_a[i][k] * matriz_b[k][j];
      }
      matriz_c[i][j] = sum;
      sum = 0;
    }
  }
}

int main(){
  system("clear");
  int **matriz_a, **matriz_b, **matriz_c;
  int nl_a, nc_a, nl_b, nc_b;
  int igual = 1;
  char nm;
  printf("Dimensões da matriz A: \n");
  linha_coluna(&nl_a, &nc_a);
  nm = 'A';
  matriz_a = alocar_vetor(nl_a, nc_a);

  printf("\nDados da matriz A.\n\n");
  inserir_matriz(matriz_a, nl_a, nc_a,nm);
  printf("\nMatriz A: \n");
  print_matriz(matriz_a, nl_a, nc_a);

  printf("\nDimensões da matriz B: \n");
  linha_coluna(&nl_b, &nc_b);
  nm = 'B';

  validar_vetor(nc_a, &nl_b, &nc_b);
  matriz_b = alocar_vetor(nl_b, nc_b);
  printf("\nDados da matriz B.\n\n");
  inserir_matriz(matriz_b, nl_b, nc_b,nm);
  printf("\nMatriz B: \n");
  print_matriz(matriz_b, nl_b, nc_b);
  
  matriz_c = alocar_vetor(nl_a, nc_b);
    
  matriz_produto(matriz_a, matriz_b, matriz_c, nl_a, nc_a, nl_b, nc_b);
  printf("\nA matriz C resultante de AxB é:\n\n");
  print_matriz(matriz_c, nl_a, nc_b);
  free(matriz_a[0]);
  free(matriz_a);
  free(matriz_b[0]);
  free(matriz_b);
  free(matriz_c[0]);
  free(matriz_c);
  return 0;
}