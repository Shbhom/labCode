#include<stdio.h>

struct sparse
{
    int row,col,val;
};
void readmat(sparse sp[])
{
    printf("enter total number number of rows ,column of matrix and total
    of nonzero values in this\n");             
    scanf("%d %d %d",&sp[0].row,&sp[0].col,&sp[0].val);
    printf("now start entering the values by specifying index 
    position\n");
    for(int i=1;i<=sp[0].val;i++)
        scanf("%d %d %d",&sp[i].row,&sp[i].col,&sp[i].val);
}
:
