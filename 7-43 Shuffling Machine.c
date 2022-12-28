#include<stdio.h>
 
int main(int argc,char const *argv[])
{
	char *cards[54]={
		"S1","S2","S3","S4","S5","S6","S7","S8","S9","S10","S11","S12","S13",
		"H1","H2","H3","H4","H5","H6","H7","H8","H9","H10","H11","H12","H13",
		"C1","C2","C3","C4","C5","C6","C7","C8","C9","C10","C11","C12","C13",
		"D1","D2","D3","D4","D5","D6","D7","D8","D9","D10","D11","D12","D13",
		"J1","J2"	};			
	//定义扑克牌默认顺序 
	
	char *cards1[54];			
	//建立新二维字符串来记录洗后卡牌顺序 
	
	int cnt,i,k;
	scanf("%d",&cnt);	//洗牌次数 
	int num[54];		//建立数组以记录规定的洗牌顺序 
	for(i=0;i<54;i++){
		scanf("%d",&num[i]);
	}
	
	for(k=0;k<cnt;k++){
		for(i=0;i<54;i++){
			cards1[num[i]-1]=cards[i];
		}	//洗牌，移动卡片位置 
		
		for(i=0;i<54;i++){
			cards[i]=cards1[i];
		}	//将新卡牌顺序作为下次循环前的默认顺序 
		
	}
	for(i=0;i<54;i++){
		printf("%s",cards1[i]); 
		if(i<53){
			printf(" "); 
		} //输出洗完牌后第1到第54张牌是什么；结尾不输出空格。 
	}
	return 0;
}
