/*Receba dois n�meros, calcule e mostre a divis�o do primeiro n�mero pelo segundo.
Sabe-se que o segundo n�mero n�o pode ser zero, mas n�o se preocupe em testar se
o segundo n�mero � zero. */

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
