/*Elaborar um programa que leia uma medida em p�s e apresente o seu valor convertido
em metros, lembrando que um p� mede 0.3048 metros
 */


int main(){
    float pes, metros;

    printf("Digite o valor em pes\n");
    scanf("%f", &pes);

    metros = pes * 0.3048;

    printf("O resultado em metros �:%.2f", metros); printf(" metros");
    return 0;

}

