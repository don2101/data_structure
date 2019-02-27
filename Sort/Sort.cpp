//
// Created by student on 2019-02-27.
//

#include "Sort.h"

int* mergeSort(int *array) {
    int length = 0;
    int p = 0;

    while(array[p] != -1) {
        p++;
    }
    length = p-1;

    int* array1 = partition(array, 0, length/2);
    int* array2 = partition(array, (length/2) + 1, length);

    return merge(array1, array2, 0, length);
}

int* partition(int *array, int start, int end) {
    if(start >= end) return array;

    int* array1 = partition(array, start, (start+end)/2);
    int* array2 = partition(array, ((start+end)/2) + 1, end);

    return merge(array1, array2, start, end);
}

int* merge(int* array1, int* array2, int start, int end) {
    int* newArray = new int[end+1];

    int i = start;
    int j = ((start+end)/2) + 1;

    for(int p = start; p <= end; ++p) {
        if(i > (start+end)/2) newArray[p] = array2[j++];
        else if(j > end) newArray[p] = array1[i++];
        else if(array1[i] < array2[j]) newArray[p] = array1[i++];
        else newArray[p] = array2[j++];
    }

    return newArray;
}