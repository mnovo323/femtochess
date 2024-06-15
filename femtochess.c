// vim: set tabstop=8 shiftwidth=8 expandtab:
/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- FEMTOCHESS -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- */
/* Copyright (C) Michael Novotny                                              */
/* MIT License                                                                */
/* 14 June 2024                                                               */
/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= */
#include "stdio.h"
#include "stdint.h" // for uint_fast8_t
#include "inttypes.h" // for PRIuFAST8 and PRIuFAST32
#define PIECE_VALUE(color, piece) piece_values[piece | color << 3]

/* -=-=-=-=-=-=-=-=-=-=-=-=-= BOARD REPRESENTATION -=-=-=-=-=-=-=-=-=-=-=-=-= */
/* The basis of this board representation is a 10x12 mailbox.                 */
/* I am using uint_fast8_t in an attempt to make this more optimized.         */
/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- PIECE MAP -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= */
/* 7 = off the board                                                          */
/* 0 = empty square                                                           */
/*                                                                            */
/* 1  = black pawn                                                            */
/* 3  = black knight                                                          */
/* 4  = black bishop                                                          */
/* 5  = black rook                                                            */
/* 6  = black queen                                                           */
/* 2  = black king                                                            */
/*                                                                            */
/* 9  = white pawn                                                            */
/* 11 = white knight (m'lady)                                                 */
/* 12 = white bishop                                                          */
/* 13 = white rook                                                            */
/* 14 = white queen                                                           */
/* 10 = white king                                                            */
/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= */

enum { EMPTY, PAWN, KING, KNIGHT, BISHOP, ROOK, QUEEN, OFFBOARD };
enum { BLACK, WHITE };

uint_fast8_t board[120] = {
        7,  7,  7,  7,  7,  7,  7,  7,  7,  7,
        7,  7,  7,  7,  7,  7,  7,  7,  7,  7,
        7,  5,  3,  4,  6,  2,  4,  3,  5,  7,
        7,  1,  1,  1,  1,  1,  1,  1,  1,  7,
        7,  0,  0,  0,  0,  0,  0,  0,  0,  7,
        7,  0,  0,  0,  0,  0,  0,  0,  0,  7,
        7,  0,  0,  0,  0,  0,  0,  0,  0,  7,
        7,  0,  0,  0,  0,  0,  0,  0,  0,  7,
        7,  9,  9,  9,  9,  9,  9,  9,  9,  7,
        7, 13, 11, 12, 14, 10, 12, 11, 13,  7,
        7,  7,  7,  7,  7,  7,  7,  7,  7,  7,
        7,  7,  7,  7,  7,  7,  7,  7,  7,  7
};

/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-= PIECE VALUES -=-=-=-=-=-=-=-=-=-=-=-=-=-=-= */
/* Pawn = 100                                                                 */
/* Knight = 300                                                               */
/* Bishop = 300                                                               */
/* Rook = 500                                                                 */
/* Queen = 900                                                                */
/* King = 2000                                                                */
/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= */

uint_fast32_t piece_values[15] = {
        0, 100, 2000, 300, 300, 500, 900, 0, 0, 100, 2000, 300, 300, 500, 900
};

int main()
{
        printf("Hello, world!\n");
        printf("The value of a black king is: %"PRIuFAST32"\n", PIECE_VALUE(BLACK, KING));
        return 0;
}
