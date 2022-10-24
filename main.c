#include "includeAll.h"
#include <stdio.h>
#include <time.h>
#include <string.h>

#define MAX_LENGTH = 32;
#define inputString = "tgtgtgtgcaccg";

void printArray(int[] array);
char generateRandomString(int length);
int InsertionSort(String T, int n);
int QuickSort(String T, int n);

int main()
{
    const int MAX_LENGTH;
    const char inputString;

    int insertionSuffixArray[];
    int quickSuffixArray[];

    long insertionSortTime;
    long quickSortTime;

    printf("Input String: %s\n\n", inputString);

    //Insertion Sort
    insertionSortTime = dayoftime(insertionSortTime);
    insertionSuffixArray = InsertionSort(inputString, strlen(inputString));
    insertionSortTime = dayoftime(insertionSortTime) - insertionSortTime;
    printArray(insertionSuffixArray);

    //Quick Sort
    quickSortTime = dayoftime(quickSortTime);
    quickSuffixArray = QuickSort(inputString, strlen(inputString));
    quickSortTime = dayoftime(quickSortTime) - quickSortTime;
    printArray(quickSuffixArray);

    // Print times
    printf("\nInsertion Sort Time: %f nanoseconds\n", insertionSortTime);
    printf("Quick Sort Time: %f nanoseconds\n", quickSortTime);
    return 0;
}

// Methods

void printArray(int[] array) {
    for (int i, i <= array, i++) {
        printf(i + " ");
    }
    printf("\n");
}

static char generateRandomString(int length) {
    char alphabet = "actg";

    for (int i = 0; i < length; i++) {
        //Append a random character here
    }

    return 0;
}

int InsertionSort(String T, int n) {
    return 0;
}

int QuickSort(String T, int n) {
    return 0;
}
