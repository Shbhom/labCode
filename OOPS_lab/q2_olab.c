//printing the multiplication of 2 matrix and its transpose
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[3][3],b[3][3],mul[3][3];
    printf("enter the elements of the first matrix : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j= 0; j< 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of the second matrix : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j= 0; j< 3; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j= 0; j < 3; j++)
        {
            mul[i][j]=0;
            for (int k= 0; k< 3; k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
            
        }
        
    }
    printf("multiplication matrix : \n");

    for (int i = 0; i < 3; i++)
    {
        for ( int j = 0; j< 3; j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j= 0; j< 3; j++)
        {
            mul[i][j]=mul[j][i];
        }
        
    }   
    printf("transpose of the multiplication matrix : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j= 0; j< 3; j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
