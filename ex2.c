/*Receba o pre�o de um produto, aplique um desconto de 10% nesse pre�o e mostre o
novo pre�o. */

#include <stdlib.h>
#include <stdio.h>

int main(){

float preco,desconto;
printf("Digite o pre�o\n");
scanf("%f", &preco);
desconto = preco * 0.9;
printf("O valor com desconto � : %f", desconto);
return 0;
}
