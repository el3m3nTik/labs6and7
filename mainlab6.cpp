#include <iostream>
#include <algorithm>
#include "simple.h"
#include "sorting.h"


int main() {
    int matrix[3][3] = {
            {3,  2,  5},
            {32, 12, 0},
            {12, 23, 22}
    };

    bool flag1, flag2 = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (simple(matrix[i][j])) {
                flag1 = false;
                break;
            } else if (matrix[i][j] == 0) {
                flag2 = false;
                break;
            }
        }
    }
    if (flag1 == 0 || flag2 == 0) {
        sorting(matrix);
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            std::cout << matrix[i][j] << " ";
        std::cout << std::endl;
    }

}