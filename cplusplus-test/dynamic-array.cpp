//
// Created by hengxin on 18-1-4.
//

#include <iostream>

int main() {
    int m, n;
    std::cin >> m >> n;

    int (*two_dim_array)[n] = (int(*)[n]) malloc(sizeof(int) * m * n);

    int (*array)[n] = (int(*)[n]) malloc( sizeof(int[m][n]) );	// allocated on the heap

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << array[i][j] << std::endl;
        }
    }

    int (*array_1)[n] = new int[m][n];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << array_1[i][j] << std::endl;
        }
    }

    return 0;
}

