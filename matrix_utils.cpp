#include "matrix_utils.h"
#include <fstream>
#include <iostream>

using namespace std;

// Read matrix
void get_matrix(string filename, int matrix[MAXM][MAXM], int &m, int &n)
{
    ifstream fin(filename);

    fin >> m >> n;

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            fin >> matrix[i][j];

    fin.close();
}

// Find minimum in each row and append to file
void findRowMinimums(string filename, int matrix[MAXM][MAXM], int m, int n)
{
    ofstream fout(filename, ios::app);

    fout << "\nMinimums in rows:\n";

    for(int i=0;i<m;i++)
    {
        int min = matrix[i][0];

        for(int j=1;j<n;j++)
            if(matrix[i][j] < min)
                min = matrix[i][j];

        fout << "Row " << i+1 << ": " << min << endl;
    }

    fout.close();
}
