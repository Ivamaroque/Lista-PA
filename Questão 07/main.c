#include <stdio.h>

int main(void){
  int mat[4] = {2, 4, 6, 8}, *p, x;
  p = mat + 1;
  // Comentado para não bugar o código
  /*p = mat++;
   p = ++mat;*/
  x = (*mat)++;
  return 0;
}