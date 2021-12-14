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
