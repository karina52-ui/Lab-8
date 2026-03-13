#include <iostream>
#include <string>
#include "array_utils.h"
#include "matrix_utils.h"

using namespace std;

// Task 1 – Array97
void task_array()
{
    string inFile, outFile;

    cout << "Enter input array file: ";
    cin >> inFile;

    cout << "Enter output file: ";
    cin >> outFile;

    int arr[MAX];
    int n;

    get_mas(inFile, arr, n);
    removeDuplicatesKeepLast(arr, n);
    show_mas(outFile, arr, n);

    cout << "Array processed and saved.\n";
}

// Task 2 – Matrix23
void task_matrix()
{
    string file;

    cout << "Enter matrix file: ";
    cin >> file;

    int matrix[MAXM][MAXM];
    int m,n;

    get_matrix(file, matrix, m, n);
    findRowMinimums(file, matrix, m, n);

    cout << "Row minimums added to file.\n";
}

// Task 3 – Bubble sort (descending)
void task_sort()
{
    string inFile,outFile;

    cout << "Enter array file: ";
    cin >> inFile;

    cout << "Enter output file: ";
    cin >> outFile;

    int arr[MAX];
    int n;

    get_mas(inFile, arr, n);
    bubbleSortDesc(arr, n);
    show_mas(outFile, arr, n);

    cout << "Array sorted.\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1 - Array97\n";
        cout << "2 - Matrix23\n";
        cout << "3 - Bubble sort\n";
        cout << "0 - Exit\n";

        cin >> choice;

        switch(choice)
        {
            case 1: task_array(); break;
            case 2: task_matrix(); break;
            case 3: task_sort(); break;
        }

    } while(choice != 0);

    return 0;
}
