/*Fa�a um algoritmo que receba o peso de uma pessoa, calcule e mostre: a) o novo peso
que a pessoa ter� se engordar 15% sobre o peso digitado; b) o novo peso que a
pessoa ter� se emagrecer 20% sobre o peso digitado.
 */

int main(){
float peso;
printf("Digite seu peso\n");
scanf("%f", &peso);

printf("Se voc� engordar 15%, seu peso ser�:%f", peso * 1.15);
printf("\nSe voc� emagrecer 20%, seu peso ser�:%f", peso * 0.8);

return 0;

}
