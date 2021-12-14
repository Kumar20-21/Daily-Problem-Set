#include <stdio.h>

int main()
{
    int rotate, n;
    char rotation_type;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of array:\n");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the type of rotation (A/C) and positions:\n");
    scanf(" %c", &rotation_type);
    scanf("%d", &rotate);
    if (0 == rotate % n)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        return 0;
    }
    if (rotation_type == 'C')
    {
        rotate = n - rotate;
    }
    for (int i = 0; i < rotate; i++)
    {
        int temp = arr[0];
        for (int j = 1; j < n; j++)
        {
            arr[j - 1] = arr[j];
        }
        arr[n - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}