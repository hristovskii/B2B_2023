/*
 Од стандарден влез се читаат соодветно низа со M елементи и низа со N елементи,
 ваша задача е да ги споите двете низи во трета сортирана низа по растечки редослед.

Објаснување: Се внесува најпрвин должината на првата низа М, па потоа се чита првата низа,
 потоа се внесува должината на втората низа N, па втората низа.

Напомена: Елементите во двете низи кои се внесуваат се сортирани.
 Максималната должина на низите е 100.

For example:

Input	        Result
5               1 2 4 5 6 8 9 10 15
1 4 6 9 15
4
2 5 8 10

 */

#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], mergeArray[MAX_SIZE * 2];
    int size1, size2, mergeSize;
    int index1, index2, mergeIndex;
    int i;

    scanf("%d", &size1);

    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &size2);

    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }


    mergeSize = size1 + size2;

    index1 = 0;
    index2 = 0;
    for (mergeIndex = 0; mergeIndex < mergeSize; mergeIndex++) {
        if (index1 >= size1 || index2 >= size2) {
            break;
        }


        if (arr1[index1] < arr2[index2]) {
            mergeArray[mergeIndex] = arr1[index1];
            index1++;
        } else {
            mergeArray[mergeIndex] = arr2[index2];
            index2++;
        }
    }

    while (index1 < size1) {
        mergeArray[mergeIndex] = arr1[index1];
        mergeIndex++;
        index1++;
    }
    while (index2 < size2) {
        mergeArray[mergeIndex] = arr2[index2];
        mergeIndex++;
        index2++;
    }

    for (i = 0; i < mergeSize; i++) {
        printf("%d ", mergeArray[i]);
    }

    return 0;
}
