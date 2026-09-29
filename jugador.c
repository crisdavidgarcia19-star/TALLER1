#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "jugador.h"

void leerJugador(Jugador *jugador) {
    char entrada[100];
    int valido = 0;

    do {
        printf("Ingrese las 3 iniciales del jugador: ");
        scanf("%99s", entrada);

        if (strlen(entrada) == 3 &&
            isalpha((unsigned char)entrada[0]) &&
            isalpha((unsigned char)entrada[1]) &&
            isalpha((unsigned char)entrada[2])) {

            jugador->nombre[0] = (char)toupper((unsigned char)entrada[0]);
            jugador->nombre[1] = (char)toupper((unsigned char)entrada[1]);
            jugador->nombre[2] = (char)toupper((unsigned char)entrada[2]);
            jugador->nombre[3] = '\0';
            valido = 1;
        } else {
            printf("Error: debe ingresar exactamente 3 letras.\n");
        }
    } while (!valido);

    do {
        printf("Ingrese el puntaje: ");
        if (scanf("%d", &jugador->puntaje) != 1) {
            printf("Error: ingrese un numero entero.\n");
            while (getchar() != '\n');
            jugador->puntaje = -1;
        }

        if (jugador->puntaje < 0) {
            printf("Error: el puntaje no puede ser negativo.\n");
        }
    } while (jugador->puntaje < 0);
}

void mostrarJugador(const Jugador *jugador) {
    printf("%s - %d puntos\n", jugador->nombre, jugador->puntaje);
}
