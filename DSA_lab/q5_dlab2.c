// WAP that will sum the surrounding elements of a given index in the matrix.
#include <stdio.h>

int main()
{
    int n, count = 1;
    printf("enter the size of the sq-matrix :\n");
    scanf("%d", &n);
    int a[n][n];
    int k;
    printf("enter the index of the element :\n");
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = count++;
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (k == a[i][j])
            {
                if(i+1<n){
                    sum+=a[i+1][j];
                    if(j+1<n)
                        sum+=a[i+1][j+1];
                    if(j-1>=0)
                        sum+=a[i+1][j-1];
                }
                if(i-1>=0){
                    sum+=a[i-1][j];
                    if(j+1<n)
                        sum+=a[i-1][j+1];
                    if(j-1>=0)
                        sum+=a[i-1][j-1];
                }
                if(j+1<n)
                    sum+=a[i][j+1];
                if(j-1>=0)
                    sum+=a[i][j-1];
            }
        }
    }
    printf("%d\t", sum);

    return 0;
}
