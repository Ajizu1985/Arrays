#include <stdio.h>
#include <math.h>

int main ()
    {
  int arr[10]={1, 6, 5, 8, 10, 12, 16, 15, 16, 19}, i, K=2;
    for(i=0; i<10; i+=K){
    printf("[%d]=%d\n", i, arr[i]);  
   }  
    return 0;
    }