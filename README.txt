TALLER 1 - PROGRAMACION MODULAR

Universidad del Pacifico
Ingenieria de Sistemas
Asignatura: Estructuras de Datos

Archivos:
- jugador.h
- jugador.c
- ranking.h
- ranking.c
- juego.c

Compilacion:
gcc -c jugador.c -o jugador.o
gcc -c ranking.c -o ranking.o
gcc -c juego.c -o juego.o
gcc jugador.o ranking.o juego.o -o gta_ranking.exe

Ejecucion:
Windows:
.\gta_ranking.exe

Linux/macOS:
./gta_ranking
