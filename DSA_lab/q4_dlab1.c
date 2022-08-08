#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[3][3]= {{1,2,3,},{4,5,6},{7,8,9}};
    int count0=0,trace=0,b=0,sum=0;
   
    //counting the number of zeros 
    for (int i = 0; i < 3; i++)
    {
        for (int j= 0; j < 3; j++)
        {
            
            if (a[i][j]==0)
            {
                count0++;
            }
        }
        
    }
    printf("%d\n",count0);
    
    //printing the diagnol elements
    for (int i = 0; i < 3; i++)
    {
        for (int j= 0; j < 3; j++)
        {
            if (i==j)
            {
                printf("%d\n",a[i][j]);
            }
            
        }
    }
    //sum of the elements above the diagnol
    for (int i = 0; i < 3; i++)
    {
        for (int j= 0; j < 3; j++)
        {
            if (i==j)
            {
                trace+=a[i][j];
            }
            else if (i<j)
            {
                b+=a[i][j];
            }
        }
    }
    //sum=b-trace;
    printf("the sum of the elements above the diagnol is %d\n",b);

    //row major order
    for (int i = 0; i < 3; i++)
    {
        for (int j= 0; j < 3; j++)
        {
            printf("%d",a[i][j]);
        }
    }
    printf("\n");
    //column major order
     for (int i = 0; i < 3; i++)
    {
        for (int j= 0; j < 3; j++)
        {
            printf("%d",a[j][i]);

        }
    }
    return 0;
}

