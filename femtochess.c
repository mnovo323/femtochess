// vim: set tabstop=8 shiftwidth=8 expandtab:
/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- FEMTOCHESS -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- */
/* Copyright (C) Michael Novotny                                              */
/* MIT License                                                                */
/* 14 June 2024                                                               */
/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= */
#include "stdio.h"
#include "stdint.h" // for uint_fast8_t

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

int main()
{
        printf("Hello, world!\n");
        return 0;
}
