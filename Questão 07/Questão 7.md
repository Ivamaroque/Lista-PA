# Questão 07

## Programa
  ```c
  int mat[4], *p, x;
  p = mat + 1;
  p = mat++;
  p = ++mat;
  x = (*mat)++;
  ```
1. `p = mat + 1;` irá armazenar no  `p`  a posição do `mat[1]`, que no caso é a segunda posição.
2. `p = mat++;` irá tentar somar +1  a posição do `mat`, porém nesse contexto não é possível de realizar essa execução.
3. `p = ++mat;` mesma coisa da 2.
4. `x = (*mat)++;` irá pegar o valor da primeira posição de `mat` somará +1 a ela.

## Diferenças
  - `var++` retorna o valor de`var`, e soma após a execução.
  - `++var` incrementa o valor de `var` e retorna esse valor incrementado.