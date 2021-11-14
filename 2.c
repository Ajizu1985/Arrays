#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
    {
   int arr[4], i;
    for(i=0; i<4; i++)
    {
    printf("Enter %d element:", i);
    scanf("%d", &arr[i]);
    }
    for(i=0; i<4; i++)
    {
    printf("arr[%0.1f]=%0.1f\t", i, pow(2, arr[i]));
    }
    return 0;
}