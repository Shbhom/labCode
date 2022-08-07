#include <stdio.h>
int main()
{
    int i, j, b ,k, a[5];
    printf("Enter the numbers \n");
    for (i = 0; i < 5; ++i){
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; ++i) 
    {
        for (j = i + 1; j < 5; ++j)
        {
            if (a[i] > a[j]) 
            {
                b =  a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
/*for (int i = 0; i < 5; i++)
{
    printf("%d",a[i]);
}*/
printf("enter the value of k : ");
scanf("%d",&k);

printf("smallest Kth value of the array is: %d\n",a[k-1]);
printf("largest Kth value of the array is :%d\n",a[5-k]);
