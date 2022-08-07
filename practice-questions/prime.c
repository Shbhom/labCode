#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,count;
    count=0;
    printf("enter the number you wanna check : ");
    scanf("%d",&num);
    for(int i=1;i<=(num+1);i++){
        if (num%i==0){
            count++;
        }
    }
    if (count==2){
        printf("the number is prime");
    }
    else{
        printf("the number is not a prime");
    }
    return 0;
}