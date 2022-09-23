# Questão 05

## Programa
  
  ```c
  int main(void){
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    for(i = 0 ; i <= 4 ; i++){
      printf("\ni = %d ",i);
      printf("vet[%d] = %.1f ",i, vet[i]);
      printf("*(f + %d) = %.1f ",i, *(f+i));
      printf("&vet[%d] = %X ",i, &vet[i]);
      printf("(f + %d) = %X ",i, f+i);
    }
  }
```
## Saída obtida 
   ```c
  i = 0 vet[0] = 1.1 *(f + 0) = 1.1 &vet[0] = 85F1E2F0 (f + 0) = 85F1E2F0 
  i = 1 vet[1] = 2.2 *(f + 1) = 2.2 &vet[1] = 85F1E2F4 (f + 1) = 85F1E2F4 
  i = 2 vet[2] = 3.3 *(f + 2) = 3.3 &vet[2] = 85F1E2F8 (f + 2) = 85F1E2F8 
  i = 3 vet[3] = 4.4 *(f + 3) = 4.4 &vet[3] = 85F1E2FC (f + 3) = 85F1E2FC 
  i = 4 vet[4] = 5.5 *(f + 4) = 5.5 &vet[4] = 85F1E300 (f + 4) = 85F1E300 
  ```
Debugando o código no for, temos
1. O valor do `i`, cada interação que vai aumentando +1.
2. O valor presente no vetor `vet`em cada interação (`i`), com suas casadas decimais limitadas a 1.
3. O valor presente no vetor `vet` em cada iteração (`i`) com suas casas decimiais limitadas a 1, utilizando navegação da memória por incrementação.
4. A posição da memória de cada elemento do vetor `vet`
5. A posição da memória de cada elemento de acordo com a navegação na memória por incrementação de indice `i` do loop.

O loop irá ocorrer 5 vezes.

