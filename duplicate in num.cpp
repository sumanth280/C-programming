#include <stdio.h>

void removeDuplicates(int arr[], int n)
{
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; ) {
            if (arr[j] == arr[i]) {
                for (k = j; k < n; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
            }
            else {
                j++;
            }
        }
    }
}

int main()
{
    int arr[20],n;
    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

