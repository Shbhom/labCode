#include<stdio.h>

int main(int argc, char const *argv[])
{
    char a="";
    printf("enter the charcter you wanted to check\n");
    scanf("%c",&a);
    int d=1;
    int p = printf("%d\n",a<=57&&a>=48);
    if (p>=48&&p<=57)
    {
        printf("the character inputed is a digit\n");
    }
    else{
        printf("not a digit\n");
    }
    return 0;
}
