/*
Method 1: Transversing from back side:
Time complexity: O(m+n)
Auxiliary Space: O(1)
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1, j=n-1, mer=m+n-1;
        while(i>=0 &&j>=0)
        {
            if(nums1[i]>nums2[j])
            {
                nums1[mer]=nums1[i];
                i--;
                mer--;
            }
            else
            {
                nums1[mer]=nums2[j];
                j--;
                mer--;
            }
        }
        while(j>=0)
        {
            nums1[mer]=nums2[j];
            mer--;
            j--;
        }
    }
};

/*
Method 2: Gap Method
Time complexity: O((m+n)lg(m+n))
Auxiliary Space: O(1)
 
// Function to find next gap.
int nextGap(int gap)
{
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}
 
void merge(int* arr1, int* arr2, int n, int m)
{
    int i, j, gap = n + m;
    for (gap = nextGap(gap);
         gap > 0; gap = nextGap(gap))
    {
        // comparing elements in the first array.
        for (i = 0; i + gap < n; i++)
            if (arr1[i] > arr1[i + gap])
                swap(arr1[i], arr1[i + gap]);
 
        // comparing elements in both arrays.
        for (j = gap > n ? gap - n : 0;
             i < n && j < m;
             i++, j++)
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);
 
        if (j < m) {
            // comparing elements in the second array.
            for (j = 0; j + gap < m; j++)
                if (arr2[j] > arr2[j + gap])
                    swap(arr2[j], arr2[j + gap]);
        }
    }
}

Method 3: Insertion sort
Compare the elements of two arrays and then swap until the swapped element reaches its correct position.
Time complexity: O(m*n)
Auxiliary Space: O(1)

*/
