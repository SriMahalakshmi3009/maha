#include<stdio.h>
#include<string.h>
int main()
{
    int x;
    int factorial=1;
    scanf("%d",&x);
    while(x>=1){
        factorial *=x;
     x--;
    }
    printf("factorial:%d",factorial);
    return 0;
}