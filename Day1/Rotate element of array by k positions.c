/*
Method 1:
Rotation of each element one by one.
Time complexity: O(n*d)
Auxiliary space: O(1)
*/

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
    if (rotation_type == 'A')
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



/*

Method 2:
Juggling Method: Use of Modular arithmetic
Assumption: d < n
Time complexity: O(n)
Auxiliary space: O(1)

#include <stdio.h>

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

//Function to get gcd of a and b
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

//Function to left rotate arr[] of siz n by d
void leftRotate(int arr[], int d, int n)
{
	int i, j, k, temp;
	// To handle if d >= n
	d = d % n;
	int g_c_d = gcd(d, n);
	for (i = 0; i < g_c_d; i++) {
		// move i-th values of blocks
		temp = arr[i];
		j = i;
		while (1) {
			k = j + d;
			if (k >= n)
				k = k - n;
			if (k == i)
				break;
			arr[j] = arr[k];
			j = k;
		}
		arr[j] = temp;
	}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	leftRotate(arr, 2, 7);
	printArray(arr, 7);
	getchar();
	return 0;
}

*/
