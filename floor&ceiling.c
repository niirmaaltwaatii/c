#include <stdio.h>
int ceiling(float a);
int floorc(float num);
int main() {
    float n;
    printf("Enter a Number : ");
    scanf("%f",&n);
    printf("Floor : %d",floorc(n));
    printf("\nCeiling : %d",ceiling(n));
    return 0;
}
int ceiling(float num){
    return (int) num + 1;
}
int floorc(float num){
    return (int) num;
}
