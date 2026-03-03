#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int data[] = {10, 25, 30, 45, 50, 65, 90};
    int n = sizeof(data) / sizeof(data[0]);
    int target;
    printf("Enter the target value: ");  
    scanf("%d", &target);

    int index = linearSearch(data, n, target);
    printf("%d", index);

    return 0;
}