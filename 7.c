#include <stdio.h>
#include <math.h>

int main ()
    {
  int arr[10]={1, 3, 5, 7, 9, 11, 13, 15, 17, 19}, i;
    for(i=10; i>=0; i--)
        {  
    printf("arr[%d]=%d\n", i, arr[i]); 
   }  
  
    return 0;
    }