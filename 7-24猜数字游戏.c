#include <stdio.h>  
int main()  
{  	int r,N,x,n=0;
	scanf("%d %d",&r,&N);
	while(1){
		scanf("%d",&x);
		if(x<0){
			n--;
			 break;
		}
		n++;
		if(x>r)printf("Too big\n");
		else if(x<r)printf("Too small\n");
		else break;
	}
	if(n<0||n>N)printf("Game Over");
	else if(n==1)printf("Bingo!");
	else if(n<=3)printf("Lucky You!");
	else if(n<=N)printf("Good Guess!");
    return 0;  
} 
