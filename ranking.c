#include <stdio.h>
#include "ranking.h"

void inicializarRanking(Ranking *ranking) {
    /* Puntajes iniciales de ejemplo para representar
       una tabla historica existente. */
    ranking->jugadores[0].nombre[0] = 'A';
    ranking->jugadores[0].nombre[1] = 'A';
    ranking->jugadores[0].nombre[2] = 'A';
    ranking->jugadores[0].nombre[3] = '\0';
    ranking->jugadores[0].puntaje = 1000;

    ranking->jugadores[1].nombre[0] = 'B';
    ranking->jugadores[1].nombre[1] = 'B';
    ranking->jugadores[1].nombre[2] = 'B';
    ranking->jugadores[1].nombre[3] = '\0';
    ranking->jugadores[1].puntaje = 700;

    ranking->jugadores[2].nombre[0] = 'C';
    ranking->jugadores[2].nombre[1] = 'C';
    ranking->jugadores[2].nombre[2] = 'C';
    ranking->jugadores[2].nombre[3] = '\0';
    ranking->jugadores[2].puntaje = 500;
}

void actualizarRanking(Ranking *ranking, Jugador nuevo) {
    int posicion = -1;

    for (int i = 0; i < TAM_RANKING; i++) {
        if (nuevo.puntaje > ranking->jugadores[i].puntaje) {
            posicion = i;
            break;
        }
    }

    if (posicion == -1) {
        printf("\nEl puntaje de %s no entra al Top 3.\n",
               nuevo.nombre);
        return;
    }

    for (int i = TAM_RANKING - 1; i > posicion; i--) {
        ranking->jugadores[i] = ranking->jugadores[i - 1];
    }

    ranking->jugadores[posicion] = nuevo;

    printf("\nEl jugador %s entro al Top 3.\n", nuevo.nombre);
}

void mostrarRanking(const Ranking *ranking) {
    printf("\n========== TOP 3 ==========\n");

    for (int i = 0; i < TAM_RANKING; i++) {
        printf("%d. %s - %d puntos\n",
               i + 1,
               ranking->jugadores[i].nombre,
               ranking->jugadores[i].puntaje);
    }

    printf("===========================\n");
}
