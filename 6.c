#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
    {
    int n=10, F[n], A=4, B=5, sum, k; 
    F[0] = A;
    F[1] = B; 
    F[2] = F[0]+F[1];
    printf("F[0]=%d\n", F[0]);
    printf("F[1]=%d\n", F[1]);
    printf("F[2]=%d\n", F[2]);
    for(int k=3; k<n; k++){
        F[k]= F[k-1]*2;
    printf("F[%d]=%d\n", k, F[k]);
    }
    return 0;
}