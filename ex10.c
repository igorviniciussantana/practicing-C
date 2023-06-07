/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a
percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo
que a percentagem do distribuidor seja de 12% e os impostos de 45%, preparar um
algoritmo para ler o custo de fábrica do carro e imprimir o custo ao consumidor.
 */


int main(){
    float fabrica, consumidor;

    printf("Digite o valor de fabrica do carro\n");
    scanf("%f", &fabrica);

    consumidor = (fabrica * 1.12) * 1.45;

    printf("O preço do carro para o consumidor é:%.2f", consumidor);
    return 0;

}
