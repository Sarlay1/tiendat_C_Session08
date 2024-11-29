#include <stdio.h>

int main() {
   
    int array[] = {5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]); 

   
    printf("Cac phan tu trong mang tu cuoi ve dau:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

