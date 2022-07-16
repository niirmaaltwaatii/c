#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int *setA,*setB;
int ctr,octr,ictr,sizeA,sizeB;
void unionsets(){
    int *unions=(int *)malloc((sizeA+sizeB)*sizeof(int));
    ctr=0;
    for(octr=0;octr<sizeA;octr++)
    unions[ctr++]=setA[octr];
    for(octr=0;octr<sizeB;octr++)
    {
        int flag=0;
        for(ictr=0;ictr<sizeA;ictr++)
        {
            if(setA[ictr]==setB[octr])
            flag=1;
        }
        if(flag==0)
        unions[ctr++]=setB[octr];
    }
    printf("\nA Union B is \n");
    for(octr=0;octr<ctr;octr++)
    printf("%d\t",unions[octr]);
    free(unions);
    
}
void intersection()
{
    int size;
    if(sizeA>=sizeB)
    size=sizeB;
    else
    size=sizeA;
    ctr=0;
    int *intersection=(int *)malloc(size*sizeof(int));
    for(octr=0;octr<sizeA;octr++)
    {
        for(ictr=0;ictr<sizeB;ictr++)
        {
            if(setA[octr]==setB[ictr])
            intersection[ctr++]=setB[ictr];
        }
    }
    printf("\nA Intersection B is \n");
    if(ctr==0){
    printf("NULL");
    return;
    }
    for(octr=0;octr<ctr;octr++)
    printf("%d\t",intersection[octr]);
    free(intersection);
    
}
void difference()
{
    int *BdiffA=(int *)malloc(sizeB*sizeof(int));
    ctr=0;
    for(octr=0;octr<sizeB;octr++)
    {
        int flag=0;
        for(ictr=0;ictr<sizeA;ictr++)
        {
            if(setA[ictr]==setB[octr])
            flag=1;
        }
        if(flag==0)
        BdiffA[ctr++]=setB[octr];
    }
    printf("\nB - A is \n");
    if(ctr==0)
    {    printf("NULL");
    return;
    }
    for(octr=0;octr<ctr;octr++)
    printf("%d\t",BdiffA[octr]);
    free(BdiffA);
    
}
void CardinalProduct()
{
    int **cardinalProduct=(int **)malloc(sizeA*sizeB*sizeof(int));
    for(ctr=0;ctr<sizeA*sizeB;ctr++)
    cardinalProduct[ctr]=(int *)malloc(2*sizeof(int));
    ictr=0;
    for(ctr=0;ctr<sizeA*sizeB;ctr++)
    {
        cardinalProduct[ctr][0]=setA[ctr/sizeB];
        cardinalProduct[ctr][1]=setB[ctr%sizeB];
    }
    printf("\nA*B is \n");
    for(ctr=0;ctr<sizeA*sizeB;ctr++)
    printf("(%d,%d)\t",cardinalProduct[ctr][0],cardinalProduct[ctr][1]);
    for(ctr=0;ctr<sizeA*sizeB;ctr++)
    free(cardinalProduct[ctr]);
    free(cardinalProduct);
}
int main(){
printf("Enter the size for set A\n");
scanf("%d",&sizeA);
printf("Enter the size for set B\n");
scanf("%d",&sizeB);
setA=(int *)malloc(sizeA*sizeof(int));
setB=(int *)malloc(sizeB*sizeof(int));
printf("Enter the elements of set A\n");
for(ctr=0;ctr<sizeA;ctr++)
scanf("%d",&setA[ctr]);
printf("Enter the elements of set B\n");
for(ctr=0;ctr<sizeB;ctr++)
scanf("%d",&setB[ctr]);
unionsets();
intersection();
difference();
CardinalProduct();
free(setA);
free(setB);
getch();
}
