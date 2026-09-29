#ifndef RANKING_H
#define RANKING_H

#include "jugador.h"

#define TAM_RANKING 3

typedef struct {
    Jugador jugadores[TAM_RANKING];
} Ranking;

void inicializarRanking(Ranking *ranking);
void actualizarRanking(Ranking *ranking, Jugador nuevo);
void mostrarRanking(const Ranking *ranking);

#endif
