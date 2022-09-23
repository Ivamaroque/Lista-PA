# Questão 08

## Programa 1

  ```c
  int main(){
    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){
      printf("%d ",*(vet+i));
    }
  }
  ```
Irá percorrer o todo o vetor `vet` através do for, e irá imprimir seus valores para cada posição do vetor.
- Saida:
```c
  4 9 13
```
## Programa 22

  ```c
  int main(){
    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){
      printf("%X ",vet+i);
    }
  }
  ```
```c
  53162BF0 53162BF4 53162BF8
```

Irá percorrer todo o vetor `vet` através do for, e irá imprimir a posição de cada elemento do vetor.