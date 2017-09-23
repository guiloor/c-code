#include "algorithms.h"


#define UP         direction_[0]
#define UP_RIGHT   direction[1]
#define RIGHT      direction[2]
#define RIGHT_DOWN direction[3]
#define DOWN       direction[4]
#define DOWN_LEFT  direction[5]
#define LEFT       direction[6]
#define LEFT_UP    direction[7]
//caballo
#define UP_C         direction_c[0]
#define UP_RIGHT_C   direction_c[1]
#define RIGHT_C      direction_c[2]
#define RIGHT_DOWN_C direction_c[3]
#define DOWN_C       direction_c[4]
#define DOWN_LEFT_C  direction_c[5]
#define LEFT_C       direction_c[6]
#define LEFT_UP_C    direction_c[7]


struct TVector direction[] = {
    {0, -1}, {1, -1}, {1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}
};


struct TVector direction_c[]= {

  {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {2, 1}, {1, 2}, {1 , -2}, {2, -1}

};


struct TVector *pawn_mv[] = { &DOWN, NULL };
struct TVector *rook_mv[] = { &RIGHT, &LEFT, &UP, &DOWN, NULL };
struct TVector *knight_mv[] = { NULL };
struct TVector *bishop_mv[] = { &UP_RIGHT, &LEFT_UP, &RIGHT_DOWN, &DOWN_LEFT, NULL };
struct TVector *queen_mv[] = {&UP, &UP_RIGHT, &RIGHT, &RIGHT_DOWN, &DOWN, &DOWN_LEFT, &LEFT, &LEFT_UP, NULL};

struct TVector **movements[] = {
    pawn_mv, rook_mv, knight_mv, bishop_mv
    };

struct Piece set[] = {
   {pawn,   'P', {"♙", "♟"}, "Peón"},
   {rook,   'T', {"♖", "♜"}, "Torre"},
   {knight, 'C', {"♘", "♞"}, "Caballo"},
   {bishop, 'A', {"♗", "♝"}, "Alfil"},
   {queen,  'Q', {"♕", "♛"}, "Reina"},
   {king,   'K', {"♔", "♚"}, "Rey"},
   {nop,    ' ', {" ", " "}, "Espacio"}
};


int
is_empty (int row, int col, char board[SIZE][SIZE])
{
  return board[row][col] == ' ';
}

int
check_direction (int row, int col, struct TVector dir, char board[SIZE][SIZE])
{
  int offs;
  struct TVector cell = { col, row };
  ADD (cell, dir);

  for (offs = 0; IN_LIMITS (cell.x) && IN_LIMITS (cell.y); ADD (cell, dir))
    if (!is_empty (cell.y, cell.x, board))
      {
	print_possibility (cell.y, cell.x, board);
	return 1;
      }
  return 0;
}

int
check (int row, int col, char board[SIZE][SIZE], enum TPiece piece)
{
  int i;

  prepare_win (OUT_LIN);
  printf (BOLD_ON
	  "\tCOMPROBANDO EL %s\n" "\t====================\n\n" BOLD_OFF, set[piece].name);

  for (i=0; movements[piece][i] != NULL; i++)
      check_direction(row, col, *movements[piece][i], board);
}

