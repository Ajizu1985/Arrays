#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
    {
   int arr[4], i, A=2, D=4;
    for(i=0; i<4; i++)
    {
    printf("Enter %d element:", i);
    scanf("%d", &arr[i]);
    }
    for(i=0; i<4; i++)
    {
    printf("arr[%d]=%d\t", i, (i*D + A));
    }
    return 0;
}