//Merge sorted arrays
#include <stdio.h>

int main()
{
    int arr1[10], arr2[10], arr3[20];
    int n1, n2, i;
    int index_first = 0, index_second = 0, index = 0;

    printf("Enter number of elements in array1 (max 10): ");
    scanf("%d", &n1);

    if(n1 > 10 || n1 < 0)
        return 1;

    printf("Enter sorted elements of array1:\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter number of elements in array2 (max 10): ");
    scanf("%d", &n2);

    if(n2 > 10 || n2 < 0)
        return 1;

    printf("Enter sorted elements of array2:\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    while(index_first < n1 && index_second < n2)
    {
        if(arr1[index_first] < arr2[index_second])
            arr3[index++] = arr1[index_first++];
        else
            arr3[index++] = arr2[index_second++];
    }

    while(index_first < n1)
        arr3[index++] = arr1[index_first++];

    while(index_second < n2)
        arr3[index++] = arr2[index_second++];

    printf("\nMerged array:\n");
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", arr3[i]);

    return 0;
}