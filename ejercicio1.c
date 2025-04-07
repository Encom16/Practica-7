#include <stdio.h>

int main() {
    float salario, impuesto;
    
    // Solicitar al usuario que ingrese su salario anual
    printf("Ingrese su salario anual: ");
    scanf("%f", &salario);
    
    // Calcular el impuesto según las diferentes escalas
    if (salario <= 10000) {
        // 5% de impuesto para salarios hasta $10,000
        impuesto = salario * 0.05;
    } 
    else if (salario <= 50000) {
        // 5% sobre los primeros $10,000 + 15% sobre el excedente
        impuesto = 10000 * 0.05 + (salario - 10000) * 0.15;
    } 
    else {
        // 5% sobre $10,000 + 15% sobre $40,000 + 25% sobre el excedente
        impuesto = 10000 * 0.05 + 40000 * 0.15 + (salario - 50000) * 0.25;
    }
    
    // Mostrar el resultado
    printf("Impuesto a pagar: $%.2f\n", impuesto);
    
    return 0;
}
