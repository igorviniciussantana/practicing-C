/*Faça um algoritmo que calcule e mostre a área de um trapézio. Dica: sabe-se que: Área
= ((base maior + base menor) * altura) /2
 */



int main(){
    float baseMaior, baseMenor, altura, area;

    printf("Digite a base maior do seu trapézio\n");
    scanf("%f", &baseMaior);

    printf("Digite a base menor do seu trapézio\n");
    scanf("%f", &baseMenor);

    printf("Digite a altura do seu trapézio\n");
    scanf("%f", &altura);

    area = ((baseMaior + baseMenor) * altura) / 2;

    printf("A área do seu trapézio é:%f", area);
    return 0;

}
