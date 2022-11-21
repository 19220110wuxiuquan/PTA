//其实就是10进制转16进制...
#include <stdio.h>
int main(){
    int f,t,ge,shi;
    scanf("%d",&f);
    ge=f%16;
    shi=f/16;
    t=shi*10+ge;
    printf("%d",t);
    return 0;
}
