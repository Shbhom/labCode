#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("enter the numbers in order of a,b and c:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("the avg of the three terms added is %f\n",(a+b+c)/3.0);
    return 0;
}
