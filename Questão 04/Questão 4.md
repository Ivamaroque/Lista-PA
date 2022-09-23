# Questão 04

Declaração das variàveis utilizadas:
```c
int   valor;
int   *p1;
float temp;
float *p2;
char  aux;
char  *nome = "Ponteiros";
char  *p3;
int   idade;
int   vetor[3];
int   *p4;
int   *p5;
```

# Execuções

## (a)

```c
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);
  // saida: 20
```
Sim, foi obtido o valor esperado

## (b)
 
```c
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("(b) %.1f \n", temp);
  // saida: 29.0
```
Sim, foi obtido o valor esperado

## (c)
 
```c
  p3 = &nome[0];
  aux = *p3;
  printf("(c) %c \n", aux);
  // saida: P
```
Sim, foi obtido o valor esperado, já que `p3` obteve o endereço do vetor `nome`, na posição 0, e depois o valor desse endereço

## (d)
 
```c
  p3 = &nome[4];
  aux = *p3;
  printf("(d) %c \n", aux);
  // saida: e
```
Sim, foi obtido o valor esperado, já que `p3` obteve o endereço do vetor `nome`, na posição 4, e depois o valor desse endereço.

## (e)
 
```c
  p3 = nome;
  printf("(e) %c \n", *p3);
  // saida: P
```
Não, não foi obtido o valor esperado, já que ele pegou apenas a primeira posição do vetor nome.

## (f)
 
```c
  p3 = p3 + 4;
  printf("(f) %c \n", *p3);
  // saida: e
```
Sim, foi obtido o valor esperado.

## (g)
 
```c
  p3--;
  printf("(g) %c \n", *p3);
  // saida: t
```
Sim, foi obtido o valor esperado.
## (h)
 
```c
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("(h) %d \n", idade);
  // saida: 31
```
Sim, foi obtido o valor esperado.

## (i)
 
```c
  p5 = p4 + 1;
  idade = *p5;
  printf("(i) %d \n", idade);
  // saida: 45
```
Sim, foi obtido o valor esperado.

## (j)
 
```c
  p4 = p5 + 1;
  idade = *p4;
  printf("(j) %d \n", idade);
  // saida: 27
```
Sim, foi obtido o valor esperado.

## (l)
 
```c
  p4 = p4 - 2;
  idade = *p4;
  printf("(l) %d \n", idade);
  // saida: 31
```
Sim, foi obtido o valor esperado.

## (m)
 
```c
  p5 = &vetor[2] - 1;
  printf("(m) %d \n", *p5);
  // saida: 45
```
Sim, foi obtido o valor esperado.

## (n)
 
```c
  p5++;
  printf("(n) %d \n", *p5);
  // saida: 27
```
Sim, foi obtido o valor esperado;