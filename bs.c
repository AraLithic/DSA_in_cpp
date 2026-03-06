#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int n, target;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1) return 1;

    int data[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    printf("Enter the value to search for: ");
    scanf("%d", &target);

    qsort(data, n, sizeof(int), compare);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }

    int index = binarySearch(data, 0, n - 1, target);

    if (index != -1) {
        printf("\nElement found at sorted index: %d\n", index);
    } else {
        printf("\nElement not found.\n");
    }

    return 0;
}