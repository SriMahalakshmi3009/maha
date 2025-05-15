#include<stdio.h>
#include<string.h>
int main(){
     int x;
     int flag=0;
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        if(x%i==0)
         flag ++;
    }
    if(flag==2)printf("prime number");
    else 
        printf("not prime number");
}