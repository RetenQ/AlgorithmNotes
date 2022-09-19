#include <stdio.h>
#include <math.h>
int main (void){
	int type = 0 ;
	scanf("%d",&type);
//	printf("%d",type);
	
	switch (type) {
		case 1:
			printf("I love Luogu!");
			break;
		case 2:
			printf("6");
			printf(" ");
			printf("4");
			
			break;
			
		case 3:
			printf("3");
			printf("\n");			
			printf("12");			
			printf("\n");
			printf("2");					
			break ; 			
		
		case 4:
			printf("166.667");
			break ; 
			
		case 5:
			printf("%d",(260+220)/(12+20));	
			break ; 
			
		case 6 :
			printf("%f",sqrt(6*6+9*9));
			break ; 
			
		case 7 : 
			printf("%d\n",100+10);
			
			printf("%d\n",100+10-20);
			
			printf("%d\n",0);
			
		case 8 : 
			printf("31.41693\n");
			
			printf("78.539825\n");
			
			printf("523.59883\n");
			
		case 9 :
			printf("22");
			break;
			
		case 10 :
			printf("9");
			break;
			
		case 11 : 
			//
			printf("%f",100/3.0);
			break;
			
		case 12 :
			//
			printf("13\nR");
			break ; 
			
		case 13:
			//
			printf("16");
			break ; 
			
		case 14:
			printf("50");
			break;
						
		default:
			//TODO
			break;
	}
	
	;return 0 ;
}
