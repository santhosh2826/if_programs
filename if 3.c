#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if (a<b && a<c)
    {
printf("the smallest number is %d ",a);
    }
    else if(b<c)
    {
        printf("the smallest number is %d",b);
    }
    else{
        printf("the smallest number is %d",c);
    }
}