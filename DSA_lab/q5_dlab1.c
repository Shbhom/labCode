#include<stdio.h>

void segarr(int b[],int h);


int main(int argc, char const *argv[])
{
    int a[20],n;
    printf("enter the number of elements you want in the array: ");
    scanf("%d",&n);
    printf("enter the numbers into the array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    segarr(a,n);
    
    return 0;
}
void segarr(int b[],int h){
    int c[h];
    int j=0;
    for (int i = 0; i < h; i++)
    {
        if(b[i]%2!=0){
            c[j]=b[i];
            j++;
        }
    }
    for (int i = 0; i < h; i++)
    {
        if (b[i]%2==0)
        {
            c[j]=b[i];
            j++;
        }
    }
    for (int i = 0; i < j; i++)
    {
        printf("%d ",c[i]);
    }
    
    printf("\n");
}
