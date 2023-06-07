


/* Elaborar um programa que leia dois números. Calcule e mostre o resultado das 4
operações básicas entre os dois números (adição, subtração, multiplicação e divisão).  */

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
