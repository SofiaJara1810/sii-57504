# Juego de tenis
Práctica de Sistemas Informáticos Industriales: juego de tenis en C++ con OpenGL y GLUT, para dos jugadores en el 
mismo teclado.

Autora: Sofía Jara Quiñones

## Funcionalidades
- Movimiento de las raquetas con las teclas w/s (jugador izquierdo) y o/l (jugador derecho)
- Movimiento de la esfera y rebotes
- Comunicación por tubería con nombre (FIFO): el juego avisa al programa logger cada vez que un jugador marca un 
  punto.
- El juego y el logger terminan cuando un jugador llega a 3 puntos.

## Compilación
cd workspace
mkdir build
cd build
cmake .. 
make
./logger
./tenis

## Enunciado de las prácticas
https://github.com/raquelcedazo/sistemas-informaticos-industriales/wiki
