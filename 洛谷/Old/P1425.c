#include <stdio.h>
int main(void){
	//�õ���ʼʱ��
	int shour,smin,ehour,emin = 0 ;
	scanf("%d %d %d %d",&shour,&smin,&ehour,&emin);
	
	//ת��Ϊ���������м���
	int summin = shour*60 + smin;
	int summin_end = ehour*60 + emin ;
	int sumTime = summin_end - summin ; 
	
	//�õ�ʱ�ͷ�
	int thehour = sumTime/60 ; 
	int themin  = sumTime%60 ; 
	
	printf("%d %d",thehour,themin);
	
	
	
	;return 0 ;
}
