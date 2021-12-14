//Counting Sort Algorithm
//Solution with O(n) time complexity, requiring only two passes.

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        if(1==n)
            return;
        int arr[3]={0,0,0};
        int i=0;
        for(;i<n;i++)
            arr[nums[i]]++;
        i=0;
        while(arr[0])
        {
            nums[i]=0;
            i++;
            arr[0]--;
        }
        while(arr[1])
        {
            nums[i]=1;
            i++;
            arr[1]--;
        }
        while(arr[2])
        {
            nums[i]=2;
            i++;
            arr[2]--;
        }
    }
};


/*
Solution 2: Dutch National Flag Algorithm
i.e. 3-pointer Algoirthm
Requires No extra space (except 3 pointer memory), and only one pass.
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo = 0;
        int mid = 0; 
        int hi = nums.size() - 1;

        while (mid <= hi) { 
            switch (nums[mid]) { 

            // If the element is 0 
            case 0: 
                swap(nums[lo++], nums[mid++]); 
                break; 

            // If the element is 1 . 
            case 1: 
                mid++; 
                break; 

            // If the element is 2 
            case 2: 
                swap(nums[mid], nums[hi--]); 
                break; 
            }
        }
         
    }
};
