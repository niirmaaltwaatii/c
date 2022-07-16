#include <stdio.h>

int fract(int );

int main(){
	int n, r, per, com;
	printf("Enter the total number of possibility (n) :  ");
	scanf("%d", &n);
	printf("Enter the no of ways (r):  ");
	scanf("%d", &r);
	per = fract(n)/fract(n-r);
	com = fract(n)/(fract(n-r) * fract(r));
	printf("permutation = %d\n", per);
	printf("combination = %d\n", com);
	
}

int fract(int a){
	if (a ==0){
		return 1;
	}
	else
		return (a * fract(a-1));
}
