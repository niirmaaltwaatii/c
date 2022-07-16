#include<stdio.h>
int main(){
	int data[3],i;
	float p[3], px[3], spx=0, xm[i], var=0;
	printf("Enter 3 Datas :\n");
	for(i = 0; i < 3; i++){
		printf("Enter data of x%d: ", i);
		scanf("%d", &data[i]);
		printf("Enter probabilty of x%d: ", i);
		scanf("%f", &p[i]);
		printf("\n");
	}
	for(i = 0; i < 3; i++){
		px[i] = data[i] * p[i];
		spx += px[i];
	}
	for( i = 0; i <3; i++){
		xm[i] = data[i] - spx;
		xm[i] *= xm[i];
		var += xm[i] * p[i];
	}
	
	printf("Expected mean E(x) = %.3f\n", spx);
	printf("variance 6^2 = %.3f", var);
}
