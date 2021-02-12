#ifndef math_h
#define math_h

#include <stdio.h>
int sum(int a, int b);
int matrix_sum(int **matrix, int row, int col);
int matrix_sum1(int *matrix, int row, int col);

int **create_matrix(int row, int col);
void delete_matrix(int **matrix, int row);

int *create_matrix1(int row, int col);
void delete_matrix1(int *matrix);
void delete_matrix_char(char *matrix);
char *create_matrix_char(int row);
#endif 