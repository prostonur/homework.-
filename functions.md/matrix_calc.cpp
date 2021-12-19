#include "matrix.h"
#include <ctime>
int main() {
    srand(time(NULL));

    size_t size = 3;
    double** matrix = create_matrix(size, size);
    for (size_t i = 0; i < size; ++i) {
        for (size_t j = 0; j < size; ++j)
            matrix[i][j] = rand() % 10;
    }
    print_matrix(matrix, size, size);
    double** reverse = reverse_matrix(matrix,size);
    print_matrix(reverse, size, size);
    delete_matrix(matrix, size, size);
    delete_matrix(reverse, size, size);

