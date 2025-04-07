#include <stdio.h>

int main() {
    int mes, año, dias;

    // Solicitar mes y año al usuario
    printf("Ingrese mes (1-12) y año: ");
    scanf("%d %d", &mes, &año);

    // Determinar los días según el mes
    switch(mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dias = 31;
            break;
        case 4: case 6: case 9: case 11:
            dias = 30;
            break;
        case 2:
            if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
                dias = 29;  // Año bisiesto
            } else {
                dias = 28;  // Año no bisiesto
            }
            break;
        default:
            printf("Mes inválido\n");
            dias = 0; // Mes inválido
    }

    // Mostrar los días si el mes es válido
    if (dias > 0) {
        printf("El mes tiene %d días\n", dias);
    }

    return 0;
}
