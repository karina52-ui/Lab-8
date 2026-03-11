#include <iostream>
using namespace std;

const int MAX = 50;
const int MAX_M = 20;

void inputArray(int arr[], int& n)
{
    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void taskArray97()
{
    int arr[MAX];
    int n;

    inputArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n;)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n - 1; k++)
                    arr[k] = arr[k + 1];
                n--;
            }
            else
                j++;
        }
    }

    cout << "Array after removing duplicates:\n";
    printArray(arr, n);
}

void inputMatrix(int matr[MAX_M][MAX_M], int& m, int& n)
{
    cout << "Enter number of rows: ";
    cin >> m;

    cout << "Enter number of columns: ";
    cin >> n;

    cout << "Enter matrix elements:\n";

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matr[i][j];
}

void printMatrix(int matr[MAX_M][MAX_M], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << matr[i][j] << "\t";
        cout << endl;
    }
}

void taskMatrix23()
{
    int matr[MAX_M][MAX_M];
    int m, n;

    inputMatrix(matr, m, n);

    cout << "Matrix:\n";
    printMatrix(matr, m, n);

    cout << "\nMinimum elements of each row:\n";

    for (int i = 0; i < m; i++)
    {
        int min = matr[i][0];

        for (int j = 1; j < n; j++)
            if (matr[i][j] < min)
                min = matr[i][j];

        cout << "Row " << i + 1 << ": " << min << endl;
    }
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[minIndex])
                minIndex = j;

        swap(arr[i], arr[minIndex]);
    }
}

void taskSort()
{
    int arr[MAX];
    int n;

    inputArray(arr, n);

    selectionSort(arr, n);

    cout << "Sorted array:\n";
    printArray(arr, n);
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1 - Array97 (remove duplicates)\n";
        cout << "2 - Matrix23 (row minimums)\n";
        cout << "3 - Sorting (variant 14)\n";
        cout << "0 - Exit\n";
        cout << "Your choice: ";

        cin >> choice;

        switch (choice)
        {
        case 1:
            taskArray97();
            break;

        case 2:
            taskMatrix23();
            break;

        case 3:
            taskSort();
            break;

        case 0:
            cout << "Program finished\n";
            break;

        default:
            cout << "Wrong choice\n";
        }

    } while (choice != 0);

    return 0;
}
