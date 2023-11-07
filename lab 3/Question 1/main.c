#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    swap( &num1, &num2 );
    printf("Swap Value, Num1: %d Num2: %d", num1, num2);
    return 0;
}
