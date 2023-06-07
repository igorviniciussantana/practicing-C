/*Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre: a) o novo peso
que a pessoa terá se engordar 15% sobre o peso digitado; b) o novo peso que a
pessoa terá se emagrecer 20% sobre o peso digitado.
 */

int main(){
float peso;
printf("Digite seu peso\n");
scanf("%f", &peso);

printf("Se você engordar 15%, seu peso será:%f", peso * 1.15);
printf("\nSe você emagrecer 20%, seu peso será:%f", peso * 0.8);

return 0;

}
