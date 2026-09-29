#include <stdio.h>
#include "jugador.h"
#include "ranking.h"

int main(void) {
    Ranking ranking;
    Jugador jugador;
    int opcion;

    inicializarRanking(&ranking);

    do {
        printf("\n===== GTA VI - RANKING ARCADE =====\n");
        printf("1. Registrar jugador\n");
        printf("2. Mostrar Top 3\n");
        printf("3. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                leerJugador(&jugador);
                actualizarRanking(&ranking, jugador);
                mostrarRanking(&ranking);
                break;

            case 2:
                mostrarRanking(&ranking);
                break;

            case 3:
                printf("\nPrograma finalizado.\n");
                break;

            default:
                printf("\nOpcion no valida.\n");
        }

    } while (opcion != 3);

    return 0;
}
