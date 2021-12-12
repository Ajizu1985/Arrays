#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
    {
    float A=1, D=2;
    int n=10, arr[n], i; 
    for(i=0; i<n; i++){
    printf("arr[%d]=%f\n", i, (D*i + A));
    }
    return 0;
}
