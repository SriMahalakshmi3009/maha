#include<stdio.h>

int main(){  
    
    int size;
    scanf("%d",&size);

   int arr[] = {1, 2,3,4,5};
   int n = sizeof(arr)/sizeof(arr[0]);

   int even_count=0, odd_count=0;

   for(int i=0; i<n; i++){
     if(arr[i]%2==0)
       even_count++;

     else 
       odd_count++;
   }
   printf("Even Elements count : %d \nOdd Elements count : %d", even_count, odd_count);
}
