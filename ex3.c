/*Um funcionário recebe todo mês um salário fixo mais 4% de comissão sobre as suas
vendas. Faça um algoritmo que receba o salário fixo de um funcionário e o valor de
suas vendas, calcule e mostre a comissão e o salário final do funcionário.  */


int main(){
float salario, vendas, comissao;
printf("Digite seu salário\n");
scanf("%f", &salario);
printf("Digite suas vendas\n");
scanf("%f", &vendas);

comissao = vendas * 0.04;
printf("Seu salário é%f%f", salario + comissao);
return 0;

}
