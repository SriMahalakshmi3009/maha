#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    char ans[]=(x%2==0)?"odd":"even";
    printf("%d",ans);
    return 0;
}