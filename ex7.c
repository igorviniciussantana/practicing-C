/*Faça um algoritmo que calcule e mostre a área de um quadrado. Dica: sabe-se que:
Área = Lado * Lado
 */

int main(){
    float lado, area;

    printf("Digite o lado do seu quadrado\n");
    scanf("%f", &lado);

    area = lado * lado;

    printf("A área do seu quadrado é:%.f", area);
    return 0;

}
