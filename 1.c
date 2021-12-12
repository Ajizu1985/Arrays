#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
  int arr[5], i;

    for(i=0; i<5; i++)
    {
    printf("Enter %d element:", i+1);
    scanf("%d", &arr[i]);
    }
    for(i=0; i<5; i++)
    {
    if(arr[i]%2==1){
    printf("arr[%d]=%d\t", i, arr[i]);
    }
    }
    return 0;
}
