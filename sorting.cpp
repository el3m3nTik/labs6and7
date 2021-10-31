#include <iostream>
#include <algorithm>
#include "sorting.h"

using namespace std;

void sorting(int matrix[SIZE][SIZE]) {
	int temp[SIZE * SIZE], s = 0;

	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++, s++)
			temp[s] = matrix[i][j];

	sort(temp ,temp + s, greater<>());

	s = 0;
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++, s++)
			matrix[i][j] = temp[s];
}