#include <stdio.h>
int main(void){
	//得到起始时间
	int shour,smin,ehour,emin = 0 ;
	scanf("%d %d %d %d",&shour,&smin,&ehour,&emin);
	
	//转化为分钟来进行计算
	int summin = shour*60 + smin;
	int summin_end = ehour*60 + emin ;
	int sumTime = summin_end - summin ; 
	
	//得到时和分
	int thehour = sumTime/60 ; 
	int themin  = sumTime%60 ; 
	
	printf("%d %d",thehour,themin);
	
	
	
	;return 0 ;
}
