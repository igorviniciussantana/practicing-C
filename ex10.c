/*O custo ao consumidor de um carro novo � a soma do custo de f�brica com a
percentagem do distribuidor e dos impostos (aplicados ao custo de f�brica). Supondo
que a percentagem do distribuidor seja de 12% e os impostos de 45%, preparar um
algoritmo para ler o custo de f�brica do carro e imprimir o custo ao consumidor.
 */


int main(){
    float fabrica, consumidor;

    printf("Digite o valor de fabrica do carro\n");
    scanf("%f", &fabrica);

    consumidor = (fabrica * 1.12) * 1.45;

    printf("O pre�o do carro para o consumidor �:%.2f", consumidor);
    return 0;

}
