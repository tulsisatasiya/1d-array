#include <stdio.h>
int main() {
    int a[] = {2, 3, 4, 9, 9, 5};
    int size;

    size = sizeof(a) / sizeof(a[0]);

    printf("The length of the array is %d \n", size);
    return 0;
}
