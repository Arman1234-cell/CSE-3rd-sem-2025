#include <stdio.h>
int main() {
    int n, i, j, sum = 0;
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", (*(arr+i)+j)); // or &arr[i][j]
        }
    }

    for (i = 0; i < n; i++) {
        sum += *(*(arr+i)+i);  // or arr[i][i]
    }

    printf("Sum of main diagonal elements = %d\n", sum);
    return 0;
}
