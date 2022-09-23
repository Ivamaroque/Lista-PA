# Questão 11
## Programa
```c
#include <stdio.h>

int main() {
  float aloha[10], coisas[10][5], *pf, value = 2.2;
  int i = 3;aloha[2] = value;
  scanf("%f", &aloha);
  //aloha = value"; Invalido
  printf("%f", aloha);
  coisas[4][4] = aloha[3];
  //coisas[5] = aloha;
  //pf = value;
  pf = aloha;
}
```
- `aloha[2] = value;` Válido, o terceiro elemento do vetor `aloha` recebe o valor float do `value`.
- `scanf("%f", &aloha);` Válido, irá armazenar o valor digitado pelo usuário na primeira posição do vetor.
- `aloha = value";` Inválido, por dois motivos:
  - Erro de sintaxe ´"`.
  - `aloha` é um vetor.
- `printf("%f", aloha);` Válido, entretanto irá retornar NaN, por possuir posições sem conteúdo;
- `coisas[4][4] = aloha[3];` Válido, armazena na matriz de `coisas` na quinta coluna e na quinta linha, o valor da quarta posição do vetor `aloha` ;
- `coisas[5] = aloha;` Inválido, por dois motivos:
  - A matriz `coisas` precisa da sua linha e coluna.
  - O vetor `aloha` precisa passar uma posição pra funcionar, nesse caso.
- `pf = value;` Inválido, como `pf`é um ponteiro, se espera receber um endereço e não um valor.
- `pf = aloha;` Válido, pf receberá o endereço do primeiro elemento do vetor aloha.