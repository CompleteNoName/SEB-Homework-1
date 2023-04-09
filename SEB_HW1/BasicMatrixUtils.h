#pragma once
#include <cstdlib>
#include <iostream>

const int ROWS = 7;
const int COLS = 7;
const int LOWER_RANDOM_BOUND = -14;
const int UPPER_RANDOM_BOUND = 12;

int randomInt(int, int);
void printMatrix(int[ROWS][COLS]);
void fillMatrix(int matrix[ROWS][COLS]);
void negativeInMatrix(int matrix[ROWS][COLS]);
void positiveInNull(int matrix[ROWS][COLS]);