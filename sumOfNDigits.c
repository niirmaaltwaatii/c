#include<stdio.h>
int main()
{
    int number, sum=0, i, n, count=0, num;
    
    printf("Enter a Number: ");
    scanf("%d", &number);
    
    num = number;
    
    while(num!=0){
        num /= 10;
        count += 1;
    }
    
    for(i=0;i<count;i++){
        n = number % 10;
        number = number / 10;
        sum = sum + n;
    }

    printf("Sum: %d", sum);
    
    return 0;
}
