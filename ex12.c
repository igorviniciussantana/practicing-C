/*Elaborar um programa que apresente o valor da convers�o em d�lar (U$) de um valor
lido em real (R$). O programa deve solicitar o valor da cota��o do d�lar e tamb�m a
quantidade de reais dispon�vel com o usu�rio. */

int main(){
    float reais, cotacao, dolar;

    printf("Digite o valor em reais\n");
    scanf("%f", &reais);

    printf("Digite a cotacao do dolar\n");
    scanf("%f", &cotacao);

    dolar = reais * cotacao;

    printf("O resultado em em d�lar �:%.2f", dolar);
    return 0;

}
