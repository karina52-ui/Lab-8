#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

#include <string>
using namespace std;

const int MAX = 20;

void get_mas(string filename, int arr[MAX], int &n);
void show_mas(string filename, const int arr[MAX], const int n);

void removeDuplicatesKeepLast(int arr[MAX], int &n);
void bubbleSortDesc(int arr[MAX], int n);

#endif
