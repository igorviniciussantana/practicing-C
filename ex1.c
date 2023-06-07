/*Receba dois números, calcule e mostre a divisão do primeiro número pelo segundo.
Sabe-se que o segundo número não pode ser zero, mas não se preocupe em testar se
o segundo número é zero. */

#include <stdlib.h>
#include <stdio.h>

int main(){

    int numero1, numero2, result;
    printf("Digite 2 numeros\n");
    scanf("%d%d", &numero1, &numero2);
    result = numero1 / numero2;
    printf("Resultado = %d", result);
    return 0;
}
