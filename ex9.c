/*Preparar um algoritmo para executar a seguinte convers�o: ler uma temperatura dada
na escala Celsius e imprimir a equivalente em Fahrenheit (f�rmula de convers�o: �F =
9/5 x �C + 32).
 */

int main(){
    float celsius, farenheit;

    printf("Digite a temperatura em graus Celsius para convers�o\n");
    scanf("%f", &celsius);



    farenheit = (celsius * 1.8) + 32;

    printf("Sua temperatura em Farenheit �:%.1f", farenheit);
    return 0;

}
