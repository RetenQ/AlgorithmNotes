#include <stdio.h>
int main (void){
	int yuan = 0 ;
	int jiao = 0 ; 
	
	scanf("%d %d",&yuan,&jiao);
	jiao = yuan*10 + jiao ; 
	printf("%d",jiao/19);
	
	; return 0 ; 
}
