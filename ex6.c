/*Fa�a um algoritmo que calcule e mostre a �rea de um trap�zio. Dica: sabe-se que: �rea
= ((base maior + base menor) * altura) /2
 */



int main(){
    float baseMaior, baseMenor, altura, area;

    printf("Digite a base maior do seu trap�zio\n");
    scanf("%f", &baseMaior);

    printf("Digite a base menor do seu trap�zio\n");
    scanf("%f", &baseMenor);

    printf("Digite a altura do seu trap�zio\n");
    scanf("%f", &altura);

    area = ((baseMaior + baseMenor) * altura) / 2;

    printf("A �rea do seu trap�zio �:%f", area);
    return 0;

}
