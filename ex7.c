/*Fa�a um algoritmo que calcule e mostre a �rea de um quadrado. Dica: sabe-se que:
�rea = Lado * Lado
 */

int main(){
    float lado, area;

    printf("Digite o lado do seu quadrado\n");
    scanf("%f", &lado);

    area = lado * lado;

    printf("A �rea do seu quadrado �:%.f", area);
    return 0;

}
