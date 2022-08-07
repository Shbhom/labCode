#include<stdio.h>

int fab(int i);

int main(int argc, char const *argv[])
{
    printf("the fibonacci series of 5 is %d",fab(5));
    return 0;
}

int fab(int i){
    if (i==0)
    {
        return 0;
    }
    else if (i==1)
    {
        return 1;
    }
    
    int fabNm1= fab(i-1);
    int fabNm2= fab(i-2);
    int fabN=fabNm1+fabNm2;
    return fabN;
}
