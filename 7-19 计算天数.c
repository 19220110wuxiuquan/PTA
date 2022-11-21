#include <stdio.h>
int main(){
    int day,month,yi=31,er,san=31,si=30,wu=31,liu=30,qi=31,ba=31,jiu=30,shi=31,shiyi=30,year,now;
    scanf("%d/%d/%d",&year,&month,&day);
    if((year%4==0&&year%100!=0)||year%400==0)
		er=29;
	else
		er=28;
	if(month==1) now=day;
	else if(month==2) now=day+yi;
	else if(month==3) now=day+yi+er;
	else if(month==4) now=day+yi+er+san;
	else if(month==5) now=day+yi+er+san+si;
	else if(month==6) now=day+yi+er+san+si+wu;
	else if(month==7) now=day+yi+er+san+si+wu+liu;
	else if(month==8) now=day+yi+er+san+si+wu+liu+qi;
	else if(month==9) now=day+yi+er+san+si+wu+liu+qi+ba;
	else if(month==10) now=day+yi+er+san+si+wu+liu+qi+ba+jiu;
	else if(month==11) now=day+yi+er+san+si+wu+liu+qi+ba+jiu+shi;
	else now=day+yi+er+san+si+wu+liu+qi+ba+jiu+shi+shiyi;
	printf("%d",now);
 
    return 0;
}
