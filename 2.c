#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
  int arr[5], i, A=3, res;

    for(i=0; i<5; i++)
    {
    res = pow (A, i);
    printf("Power of %d = %d\n", A, res);
    }
    return 0;
}
