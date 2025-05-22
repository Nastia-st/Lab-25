#include <stdio.h>
#include <limits.h>

int main() {
    system("chcp 65001");
    int A[] = {13, -5, 0, 7, -2, 4, -8};
    int N = sizeof(A) / sizeof(A[0]);
    int min_positive = INT_MAX;
    printf("Початковий масив: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    for (int i = 0; i < N; i++) {
        if (A[i] > 0 && A[i] < min_positive) {
            min_positive = A[i];
        }
    }
    if (min_positive == INT_MAX) {
        printf("У масиві немає позитивних елементів.\n");
        return 1;
    }
    for (int i = 0; i < N; i++) {
        if (A[i] < 0) {
            A[i] = min_positive;
        }
    }
    printf("Оновлений масив: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}