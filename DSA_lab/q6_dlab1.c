/*WAP to arrange first half of the array in ascending order and second half of the
array in descending order. Use dynamic memory allocation and function call.*/
#include <stdio.h>
#include <stdlib.h>

void func(int array[],int h){ 
    for (int i = 0; i < h / 2; i++)
    {
        for (int j = i + 1; j < h / 2; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (int i = h / 2; i < h; i++)
    {
        for (int j = i + 1; j < h; j++)
        {

            if (array[i] < array[j])
            {
                int lol = array[i];
                array[i] = array[j];
                array[j] = lol;
            }
        }
    }
    for (int i = 0; i < h; i++)
    {
        printf("%d\n", array[i]);
    }
};

int main(int argc, char const *argv[])
{
    int n;
    printf("enter the number of elements you want in an array\n");
    scanf("%d", &n);
    printf("enter the elements\n");
    int *ptr;
    int arr[n];
    ptr = (int*)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    func(arr,n);
   
    return 0;
}
