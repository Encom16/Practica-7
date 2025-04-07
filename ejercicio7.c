#include <stdio.h>

int main() {
    float distancia, tiempo, costo, prioridad;
    int perecedero, riesgo;
    char rutaOptima[50];

    // Solicitar los datos de entrada
    printf("Distancia (km): ");
    scanf("%f", &distancia);
    printf("Tiempo estimado (hrs): ");
    scanf("%f", &tiempo);
    printf("Costo operativo: ");
    scanf("%f", &costo);
    printf("¿Carga perecedera? (1=Sí, 0=No): ");
    scanf("%d", &perecedero);
    printf("¿Material de riesgo? (1=Sí, 0=No): ");
    scanf("%d", &riesgo);
    // Matriz de decisiones
    if (riesgo) {
        // Si es material de riesgo, evitar zonas pobladas
        sprintf(rutaOptima, "RUTA SEGURA (Evitar zonas pobladas)");
    } else {
        if (perecedero && tiempo > 6) {
            // Si la carga es perecedera y el tiempo es mayor a 6 horas
            sprintf(rutaOptima, "RUTA RÁPIDA (Priorizar tiempo sobre costo)");
        } else {
            if ((costo / distancia) > 2.5 && !perecedero) {
                // Si la relación costo/distancia es mayor que 2.5 y no es perecedero
                sprintf(rutaOptima, "RUTA ECONÓMICA (Minimizar costos)");
            } else {
                if (distancia < 50 && tiempo < 1.5) {
                    // Si la distancia es menor a 50 km y el tiempo es menor a 1.5 horas
                    sprintf(rutaOptima, "RUTA DIRECTA");
                } else {
                    // Cálculo de índice de optimización
                    if (perecedero) {
                        prioridad = tiempo * 0.7;
                    } else {
                        prioridad = tiempo * 0.3;
                    }

                    prioridad = prioridad + (costo * 0.4) - (distancia * 0.1);

                    if (prioridad < 2.5) {
                        sprintf(rutaOptima, "RUTA BALANCEADA");
                    } else {
                        sprintf(rutaOptima, "RUTA PERSONALIZADA - Análisis adicional");
                    }
                }
            }
        }
    }

    // Mostrar la solución óptima
    printf("Solución óptima: %s\n", rutaOptima);

    return 0;
}
