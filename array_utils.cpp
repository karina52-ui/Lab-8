#include "array_utils.h"
#include <fstream>
#include <iostream>

using namespace std;

// Read array from file
void get_mas(string filename, int arr[MAX], int &n)
{
    ifstream fin(filename);

    fin >> n;

    for(int i=0;i<n;i++)
        fin >> arr[i];

    fin.close();
}

// Write array to file
void show_mas(string filename, const int arr[MAX], const int n)
{
    ofstream fout(filename);

    fout << n << endl;

    for(int i=0;i<n;i++)
        fout << arr[i] << " ";

    fout.close();
}

// Array97 – keep only last occurrences
void removeDuplicatesKeepLast(int arr[MAX], int &n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=i;k<n-1;k++)
                    arr[k]=arr[k+1];

                n--;
                i--;
                break;
            }
        }
    }
}

// Bubble sort descending
void bubbleSortDesc(int arr[MAX], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j] < arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
