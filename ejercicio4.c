#include <stdio.h>
#include <string.h>

int main() {
    int puntos;
    char nivel[20];

    printf("Ingrese sus puntos de experiencia: ");
    scanf("%d", &puntos);

    if (puntos < 100) {
        strcpy(nivel, "Novato");
    } else if (puntos < 500) {
        strcpy(nivel, "Intermedio");
    } else if (puntos < 1000) {
        strcpy(nivel, "Avanzado");
    } else {
        strcpy(nivel, "Experto");
    }

    printf("Su nivel es: %s\n", nivel);

    return 0;
}
