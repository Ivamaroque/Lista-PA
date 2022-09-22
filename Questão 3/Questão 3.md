# Questão 03
```c
p = i; => errado
q = &j;
p = &*&i;
i = (*&)j; => errado
i = *&j;
i = *&*&j;
q = *p; => errado
i = (*p)++ + *q;
```
As atribuições ilegais dentre as listadas são: 
- `p = i;` pois `p` foi declarado como um ponteiro, assim, se espera receber um endereço na memória, apesar de funcionar;
- `i = (*&)j;` ocorre um erro pelo fato dos paretênses definirem a preferência da execução do código, assim, `*&` é um erro de sintaxe
- `q = *p;` o ponteiro `p` recebe um valor `i`, assim, é o mesmo erro do `p = i`, mas irá receber o valor do ponteiro `p`