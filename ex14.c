

/* Elaborar um programa que leia o salário mensal de um funcionário e o percentual de
reajuste a ser atribuído. Apresente como resultado o valor do novo salário.  */

int main(){
    float salario, reajuste;

    printf("Digite seu salario\n");
    scanf("%f", &salario);

    printf("Digite a porcentagem de reajuste\n");
    scanf("%f", &reajuste);

    printf("Seu salario reajustado é:%.2f", salario * (1 + (reajuste / 100)));
    return 0;

}
