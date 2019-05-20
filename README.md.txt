Esta es la segunda parte de Hundir La Flota.

El programa, para poder jugar, tiene que cargar un fichero, que contiene los datos de la partida.
Este fichero se genera con la primera parte del programa. El fichero tiene que llamarse "HLF.txt"
y tiene que estar en la mismo directorio que el ejecutable.

Ya se adjunta un fichero de prueba para la valoraci�n del proyecto, pero se podr� crear una partida diferente, y jugar sobre ella.
El fichero de prueba "HLF.txt" tiene 5 barcos colocados, de esta manera, para los 2 jugadores:

    A   B   C   D   E   F   G   H   I   J
-------------------------------------------
 1| O | O | O | O | O |   |   |   |   |   |
-------------------------------------------
 2| O | O | O | O | O |   |   |   |   |   |
-------------------------------------------
 3|   |   | O | O | O |   |   |   |   |   |
-------------------------------------------
 4|   |   |   | O | O |   |   |   |   |   |
-------------------------------------------
 5|   |   |   |   | O |   |   |   |   |   |
-------------------------------------------
 6|   |   |   |   |   |   |   |   |   |   |
-------------------------------------------
 7|   |   |   |   |   |   |   |   |   |   |
-------------------------------------------
 8|   |   |   |   |   |   |   |   |   |   |
-------------------------------------------
 9|   |   |   |   |   |   |   |   |   |   |
-------------------------------------------
10|   |   |   |   |   |   |   |   |   |   |

Al jugar, se tiene que meter la letra y el numero de la casilla a bombardear, por turnos. Si se acierta,
el pr�ximo turno aparecer� una letra "O" en la casilla. Si no se acierta aparecer� una "X".

La partida acaba cuando se consigue bombardear todas las posiciones de los barcos.

Si el primer jugador bombardea todas las casillas, aparecer� que ha ganado, pero el jugador 2
tendr� otro turno, para poder empatar. Si consigue empatar, aparecer� su mensaje de victoria tambi�n.

Las l�neas de c�digo de la base de datos est�n comentadas. Est�n en estas clases y metodos:
DB.h (entero)
DB.cpp (entero)
main.cpp (dos l�neas) (insignificante)
interacci�n.cpp (m�todo hacerMovimiento)