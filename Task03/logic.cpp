﻿// Количество строк с большим количество положительных элементов
// [The Number of rows with a large number of positive elements]
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию(или программу), которая находит
// количество строк, в которых положительных элементов больше 
// чем всех остальных (отрицательных и нулевых).

#include "logic.h"

bool if_pos_mor_thn_others(int* row, int m) {
	int count = 0;

	for (int i = 0; i < m; i++)
	{
		if (row[i] > 0) {
			count++;
		}
	}

	return count > m - count;
}

int count_rows_with_more_positive_values(int** matrix, int n, int m) {
	if (matrix == nullptr|| n <= 0 || m <= 0)
	{
		return 0;
	}

	int count = 0;

	for (int i = 0; i < n; i++)
	{
		if (if_pos_mor_thn_others(matrix[i], m)) {
			count++;
		}
	}

	return count;
}