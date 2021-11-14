#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
  int arr[5], i;

    for(i=0; i<5; i++)
    {
    printf("Enter %d element:", i);
    scanf("%d", &arr[i]);
    }
    for(i=0; i<5; i++)
    {
    printf("arr[%d]=%d\t", i, arr[i]);
    }
    return 0;
}