


/* Elaborar um programa que leia dois n�meros. Calcule e mostre o resultado das 4
opera��es b�sicas entre os dois n�meros (adi��o, subtra��o, multiplica��o e divis�o).  */

int main(){
    float numero1, numero2;

    printf("Digite o primeiro numero\n");
    scanf("%f", &numero1);

    printf("Digite o segundo numero\n");
    scanf("%f", &numero2);

    printf("Soma:%.3f", numero1 + numero2);
    printf("\nSubtracao:%.3f", numero1 - numero2);
    printf("\nMultiplicacao:%.3f", numero1 * numero2);
    printf("\nDivisao:%.3f", numero1 / numero2);
    return 0;

}
