#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
    {
   double arr[20];
   int i;
    for(i=1; i<20; i++)
        {    
    arr[i]= arr[i-2] + arr[i-1];
    printf("arr[%d]=%d\n", i, arr[i]);
    }
    
    return 0;

    }