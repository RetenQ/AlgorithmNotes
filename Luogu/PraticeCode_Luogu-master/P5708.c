#include <stdio.h>
#include <math.h>

int main (void){
	double a,b,c ; 
	scanf("%lf %lf %lf",&a,&b,&c);
	double p = 0.5*(a+b+c);
	double final = p*(p-a)*(p-b)*(p-c);
	printf("%.1f",sqrt(final))
	
	
	; return 0 ; 
}
