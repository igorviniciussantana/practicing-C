/*Um funcion�rio recebe todo m�s um sal�rio fixo mais 4% de comiss�o sobre as suas
vendas. Fa�a um algoritmo que receba o sal�rio fixo de um funcion�rio e o valor de
suas vendas, calcule e mostre a comiss�o e o sal�rio final do funcion�rio.  */


int main(){
float salario, vendas, comissao;
printf("Digite seu sal�rio\n");
scanf("%f", &salario);
printf("Digite suas vendas\n");
scanf("%f", &vendas);

comissao = vendas * 0.04;
printf("Seu sal�rio �%f%f", salario + comissao);
return 0;

}
