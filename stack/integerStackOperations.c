#include <stdio.h>
#include <stdlib.h>
#define max 10
int stack[max],top = -1;
void push(int n){
	if(top < max){
		top = top + 1;
		stack[top] = n;
	}else{
		printf("\nStack Overflow!\n");
	}
}

void pop(){
	if(top<0)
		printf("\nStack Underflow !\n");
	else
		top -= 1;
}

void show(){
	int i;
	printf("Stack : ");
	for(i=0;i<top+1;i++){
		printf("%d ",stack[i]);
	}
	printf("\n");
}

int main(){
	int n,inp;
	while(1){
		printf("\nStack operations :\n");
		printf("1. Push\n2. Pop\n3. Show\n0. Exit\n");
		printf("[input]=> ");
		scanf("%d",&inp);
		if(inp==0){
			exit(0);
		}else if(inp==1){
			printf("Enter a number : ");
			scanf("%d",&n);
			push(n);
		}
		else if(inp==2){
			pop();
		}else if(inp==3){
			show();
		}else{
			printf("heh !");
		}
	}
}
