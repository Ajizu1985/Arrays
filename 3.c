#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
    {
   int n=10, arr[n], i, A=2, D=4;

    for(i=0; i<n; i++){
    printf("arr[%d]=%d\t", i, (i*D + A));
    }
    return 0;
}