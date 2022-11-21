#include <stdio.h> 
int main(){
	int sum,difference,product,quotien,a,b;
	float q1;
    
	scanf("%d %d",&a,&b);
	sum=a+b;
	difference=a-b;
	product=a*b;
	quotien=a/b;
	q1=0.1*a/b*10;//转换为float类型
    
    printf("%d + %d = %d\n",a,b,sum);
    printf("%d - %d = %d\n",a,b,difference);
    printf("%d * %d = %d\n",a,b,product);
    if(a%b==0){
		printf("%d / %d = %d\n",a,b,quotien);
	}else{
		printf("%d / %d = %.2f\n",a,b,q1);
	}
    
    return 0;
}
