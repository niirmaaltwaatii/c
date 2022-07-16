#include<stdio.h>
int gcd(int a,int b){
    if(a==0)return b;
    if(b==0)return a;
    if(a>b){
        return gcd(a%b,b);
    } else{
        return gcd(a,b%a);
    }
};
int extended(int a,int b,int *x, int *y){
    if(b==0){
        *x=1;
        *y=0;
        return a;
        
    }
    int x1,y1;
    int d=extended(b,a%b,&x1,&y1);
    *x=y1;
    *y=x1-y1*(a/b);
    return d;
}
int main(){
    int num1,num2,i,x,y;

    printf("Enter two positive number : ");
    scanf("%d %d",&num1,&num2);
    i=gcd(num1,num2);
    printf("The gcd using Euclidean Algorithm is %d\n",i);
    printf("Using Extended Euclidean : ");
    i=extended(num1,num2,&x,&y);
    printf("g=%d\n",i);
    printf("x=%d\n",x);
    printf("y=%d\n",y);
    return 0;
}
