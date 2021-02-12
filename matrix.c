#include "matrix.h"
#include <stdlib.h>

char *create_matrix_char(int row) {
    return (char *)malloc(row);
}
void delete_matrix_char(char *matrix) {
    if (matrix != NULL) {
        free(matrix);
    }
}
