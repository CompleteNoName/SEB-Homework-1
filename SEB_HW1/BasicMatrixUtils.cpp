#include <cstdlib>
#include <iostream>
#include "BasicMatrixUtils.h"

using namespace std;

int randomInt(int rangeStart, int rangeEnd)
{
	return rangeStart + rand() % (rangeEnd - rangeStart + 1);
}

void printMatrix(int matrix[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}

void fillMatrix(int matrix[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			matrix[i][j] = randomInt(LOWER_RANDOM_BOUND, UPPER_RANDOM_BOUND);
		}
	}
}