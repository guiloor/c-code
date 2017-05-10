#ifndef __ALGORITHMS_H__
#define __ALGORITHMS_H__

#include <stdio.h>
#include "general.h"
#include "io.h"

#define ADD(accu, inc) accu.x += inc.x, accu.y += inc.y

struct TVector {
    int x;
    int y;
};

#ifdef __cplusplus
extern "C"
{
#endif

	int check_direction(int row, int col, struct TVector dir, char board[SIZE][SIZE]); //añadimos las cordenadas de direecion para que en algorithms.c el vector direction lo pueda leer
	int check_position(int row, int col, struct TVector dir, char board[SIZE][SIZE]); //añadimos las codenadas de posicion para que en algorithms.c el vector direction lo pueda leer
	int is_empty (int row, int col, char board[SIZE][SIZE]);
	int check (int row, int col, char board[SIZE][SIZE], enum TPiece piece);
	
#ifdef __cplusplus
}
#endif

#endif
