/*Elaborar um programa que apresente o valor da conversão em dólar (U$) de um valor
lido em real (R$). O programa deve solicitar o valor da cotação do dólar e também a
quantidade de reais disponível com o usuário. */

int main(){
    float reais, cotacao, dolar;

    printf("Digite o valor em reais\n");
    scanf("%f", &reais);

    printf("Digite a cotacao do dolar\n");
    scanf("%f", &cotacao);

    dolar = reais * cotacao;

    printf("O resultado em em dólar é:%.2f", dolar);
    return 0;

}
