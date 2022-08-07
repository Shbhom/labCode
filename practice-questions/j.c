#include <stdio.h>

void segarr(int b[], int h);

int main(int argc, char const *argv[])
{
    int n;

    printf("enter the number of elements you want in the array: ");
    scanf("%d", &n);

    int a[n];

    printf("enter the numbers into the array :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    segarr(a[n], n);

    return 0;
}
void segarr(int b[], int h)
{
 int i=0;
 int j=h-1;
 while (i<j)
 {
    while(b[i]%2!=0){
        i++;
    }
    while (b[j]%2==0)
    {
        j--;
    }
    int temp;
    temp=b[i];
    b[i]=b[j];
    b[j]=temp;
    i++;
    j--;
    
 }

 for (int i = 0; i < h; i++)
 {
    printf("%d\t", b[i]);
 }
 
 
}