#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    //printf("%x",a);
    int x = a/16;
    int y = a%16;
    printf("%d\n",x*10+y);

    return 0;
}
