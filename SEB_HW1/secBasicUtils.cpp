#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "BasicMatrixUtils.h"

using namespace std;

void negativeInMatrix(int matrix[ROWS][COLS])
{
	int k = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if ((i == j) and (matrix[i][j] < 0))
			{
				k += 1;
			}
		}
	}
	cout << "� ������� �� ������� ��������� " << k << " ���������." << endl;
}

void positiveInNull(int matrix[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if ((matrix[i][j] > 0) and (i + j < ROWS - 1))
			{
				matrix[i][j] = 0;
			}
		}
	}
}