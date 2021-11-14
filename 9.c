#include <stdio.h>
#include <math.h>

int main ()
    {
  int arr[10]={1, 6, 5, 8, 9, 12, 16, 15, 16, 19}, i, counter;
    for(i=10; i>0; i--)
        { 
            if (arr[i]%2==0) {
    printf("[%d]=%d\n", i, arr[i]);  
    counter++;}
   }  
    printf("Amount=%d\n", counter);
    return 0;
    }
