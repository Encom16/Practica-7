#include <stdio.h>

int main() {
    int lado1, lado2, lado3;
    char* tipo; // Usamos un puntero a char para almacenar el tipo
    
    printf("Ingrese los 3 lados del triángulo:\n");
    scanf("%d %d %d", &lado1, &lado2, &lado3);
    
    // Verificamos si es un triángulo válido
    if(lado1 + lado2 > lado3 && lado2 + lado3 > lado1 && lado1 + lado3 > lado2) {
        // Determinamos el tipo de triángulo
        if(lado1 == lado2 && lado2 == lado3) {
            tipo = "Equilátero";
        } else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            tipo = "Isósceles";
        } else {
            tipo = "Escaleno";
        }
        printf("El triángulo es %s\n", tipo);
    } else {
        printf("Los lados no forman un triángulo\n");
    }
    
    return 0;
}
