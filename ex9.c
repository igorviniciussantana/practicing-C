/*Preparar um algoritmo para executar a seguinte conversão: ler uma temperatura dada
na escala Celsius e imprimir a equivalente em Fahrenheit (fórmula de conversão: ºF =
9/5 x ºC + 32).
 */

int main(){
    float celsius, farenheit;

    printf("Digite a temperatura em graus Celsius para conversão\n");
    scanf("%f", &celsius);



    farenheit = (celsius * 1.8) + 32;

    printf("Sua temperatura em Farenheit é:%.1f", farenheit);
    return 0;

}
