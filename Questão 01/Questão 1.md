# Questão 01

## Expressão 1: 

```c
p == &i; // => Verdadeiro.
```
Como `p` foi populado com o endereço de`i`, a comparação é verdadeira

## Expressão 2: 


```c
*p - *q; // => 5 - 3 = -2
```
Subtração do valores armazenados no endereço de `p` e `q`
## Expressão 3: 

```c
**&p; // => 3
```
 |  Variavel  |                                Conteudo                                                  |
|:-----:|:---|
|  **i** | 3 |
| **p** | A |
- `&p` vai pegar o endereço de `p`
- `*&p`vai pegar o conteudo, que no caso é o endereço de i do endereço de `p`
- `**&p` vai retornar o conteudo do endereço de A, que não caso é 3

## Expressão 4: 

```c
3-*p/(*q) + 7; // =>  10
```
`*p/*q` vai retornar 0, pois ao dividir 3/4, convertendo para inteiro ignorar os valores após a vírgula