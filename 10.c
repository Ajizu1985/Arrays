#include <stdio.h>
#include <math.h>

int main ()
    {
  int arr[10]={1, 6, 5, 8, 10, 12, 16, 15, 16, 19}, i, counter;
    for(i=0; i<10; i++)
        { 
            if (arr[i]%2==0) {
    printf("Even element: [%d]=%d\n", i, arr[i]);  
}
   }  

     for(i=9; i>=0; i--)
        { 
            if (!(arr[i]%2==0)) {
    printf("Odd element:[%d]=%d\n", i, arr[i]);  
}
   }  
    return 0;
    }
