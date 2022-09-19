#include <stdio.h>
int main(void){
	char a = 'a' ; //用于接受的char
	scanf("%c",&a);
	//printf("%c",a); //要写%c才可以打印对应的char，Java写太久了写C已经变成来Java的形状
	
	printf("%c",a-32);//直接利用ASCII进行转化
	 
	
	;return 0 ; 
} 
