#include <stdio.h>

int main() {
    float monto, descuento;
    int esClienteFrecuente;

    // Solicitar monto de compra
    printf("Ingrese monto de compra: ");
    scanf("%f", &monto);

    // Preguntar si es cliente frecuente
    printf("¿Es cliente frecuente? (1=Sí, 0=No): ");
    scanf("%d", &esClienteFrecuente);

    // Aplicar el descuento según el monto y si es cliente frecuente
    if (monto > 1000) {
        if (esClienteFrecuente) {
            descuento = 0.25;  // 25% de descuento para clientes frecuentes
        } else {
            descuento = 0.15;  // 15% de descuento para clientes no frecuentes
        }
    } else if (monto > 500) {
        descuento = 0.05;  // 5% de descuento para compras entre 501 y 1000
    } else {
        descuento = 0;  // Sin descuento si el monto es menor o igual a 500
    }

    // Mostrar descuento y total a pagar
    printf("Descuento aplicado: %.2f%%\n", descuento * 100);
    printf("Total a pagar: $%.2f\n", monto * (1 - descuento));

    return 0;
}
