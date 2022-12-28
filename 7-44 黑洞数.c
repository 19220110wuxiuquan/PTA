#include <stdio.h>
int main() 
{
    int x,a,b,c,t,i=0;
    int max,min;
    scanf("%d",&x);
    do{
    a=x/100;
    b=x%100/10;
    c=x%10;
    if(a<b){
        t=a;
        a=b;
        b=t;
    }
    if(a<c){
        t=a;
        a=c;
        c=t;
    }
    if(b<c){
        t=b;
        b=c;
        c=t;
    }
    max=a*100+b*10+c;
    min=c*100+b*10+a;
    x=max-min;
    i++;
    printf("%d: %d - %d = %d\n",i,max,min,x);
    }while(x!=495);
return 0;
}
