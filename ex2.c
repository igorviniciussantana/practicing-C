/*Receba o preço de um produto, aplique um desconto de 10% nesse preço e mostre o
novo preço. */

#include <stdlib.h>
#include <stdio.h>

int main(){

  float preco,desconto;
  printf("Digite o preço\n");
  scanf("%f", &preco);
  desconto = preco * 0.9;
  printf("O valor com desconto é : %.2f", desconto);
  return 0;
}
