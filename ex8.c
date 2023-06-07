/*Faça um algoritmo que calcule e mostre a área de um losango. Dica: sabe-se que: Área
= (diagonal maior * diagonal menor) /2
 */

int main(){
    float diagonalMaior, diagonalMenor, area;

    printf("Digite a diagonal maior do seu losango\n");
    scanf("%f", &diagonalMaior);

    printf("Digite a diagonal menor do seu losango\n");
    scanf("%f", &diagonalMenor);


    area = (diagonalMaior * diagonalMenor) / 2;

    printf("A área do seu losango é:%f", area);
    return 0;

}
