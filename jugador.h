#ifndef JUGADOR_H
#define JUGADOR_H

typedef struct {
    char nombre[4];
    int puntaje;
} Jugador;

void leerJugador(Jugador *jugador);
void mostrarJugador(const Jugador *jugador);

#endif
