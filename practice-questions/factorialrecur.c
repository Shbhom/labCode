#include<stdio.h>

int fac(int i);

int main(int argc, char const *argv[])
{
    printf("the factorial is : %d", fac(5));
    return 0;
}

int fac(int i){
    if (i==0)
    {
        return 1;
    }
    int mul1=fac(i-1);
    int mul=mul1*i;
    return mul;
}
