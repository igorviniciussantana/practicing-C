

/* Elaborar um programa que leia o sal�rio mensal de um funcion�rio e o percentual de
reajuste a ser atribu�do. Apresente como resultado o valor do novo sal�rio.  */

int main(){
    float salario, reajuste;

    printf("Digite seu salario\n");
    scanf("%f", &salario);

    printf("Digite a porcentagem de reajuste\n");
    scanf("%f", &reajuste);

    printf("Seu salario reajustado �:%.2f", salario * (1 + (reajuste / 100)));
    return 0;

}
