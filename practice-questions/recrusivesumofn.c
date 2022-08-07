#include<stdio.h>

int sum(int i);

int main(int argc, char const *argv[])
{
    int a;
    printf("the sum is : %d\n",sum(1000));
    return 0;
}

int sum(int i){
    if (i==1)
    {
        return 1;
    }
    
    int sumN1=sum(i-1);
    int sumN=sumN1 + i;
    return sumN;
}

