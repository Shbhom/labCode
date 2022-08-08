/*In a one dimensional array find out all the elements, which is the summation of
its immediate previous contiguous elements and those previous elements including
that element are either in ascending or descending order.*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("enter the number of elements you want in an array\n");
    scanf("%d", &n);
    printf("enter the elements\n");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x, y, z;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == arr[j + 1] && arr[j] > arr[i] && arr[j + 1] > arr[j])
            {
                x = arr[i];
                y = arr[j];
                z = arr[j + 1];
            }
        }
    }
    printf("%d is summation of %d and %d", z, x, y);

    return 0;
}
