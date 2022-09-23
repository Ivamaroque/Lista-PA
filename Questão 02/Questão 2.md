# Questão 02

Supondo que `i` ocupa o endereço `2825fd7c` na memória a execução de:

```c
  int i=5, *p;
  p = &i;
  printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
```
resultaria em: `2825fd7c 7 5 15 9`. 

Sendo: 

|   Saída  |                                 Significado                                                         |
|:--------:|:----------------------------------------------------------------------------------------------------|
| **2825fd7c** | o valor de `p` que é a posição na memória  `i`                |
| **7**    | a soma de `p`, que aponta o valor que está no endereço `i` somando 5+2      |
| **5**    | a forma como isso foi feito já foi explicado em uma questão anterior |
| **15**   | multiplicação de 3 com o valor que de `p` que aponta pra `i`                             |
| **9**    | a soma do valor de `p`, somando 5+4     |