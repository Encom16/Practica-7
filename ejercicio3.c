#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char contrasena[100];
    char confirmacion[100];
    bool valido;

    printf("Ingrese su contraseña:\n");
    fgets(contrasena, sizeof(contrasena), stdin);
    contrasena[strcspn(contrasena, "\n")] = 0; // Eliminar salto de línea

    printf("Confirme su contraseña:\n");
    fgets(confirmacion, sizeof(confirmacion), stdin);
    confirmacion[strcspn(confirmacion, "\n")] = 0;

    valido = (strcmp(contrasena, confirmacion) == 0 && strlen(contrasena) >= 8);

    if (valido) {
        printf("Contraseña válida\n");
    } else {
        printf("Contraseña inválida\n");
    }

    return 0;
}
