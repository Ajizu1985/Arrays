#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
    {
   int arr[4], i, A=2, D=4, t;
    for(i=0; i<4; i++)
    {
    t = (A * pow(D, i));
    printf("arr[%d]=%d\t", i, t);
    }
    return 0;
}