#ifndef MATRIX_UTILS_H
#define MATRIX_UTILS_H

#include <string>
using namespace std;

const int MAXM = 20;

void get_matrix(string filename, int matrix[MAXM][MAXM], int &m, int &n);
void findRowMinimums(string filename, int matrix[MAXM][MAXM], int m, int n);

#endif
