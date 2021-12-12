#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
    {
    int n=10, F[n]; 
    F[0] = 1;
    F[1] = 1; 
    printf("F[0]=%d\n", F[0]);
    printf("F[1]=%d\n", F[1]);
    for(int k=2; k<n; k++){
    F[k] = F[k-1] + F[k-2];
    printf("F[%d]=%d\n", k, F[k]);
    }
    return 0;
}
