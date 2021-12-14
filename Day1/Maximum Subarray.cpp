// Kadane's Algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n =nums.size();
        int global_sum;
        int current_sum = global_sum = nums[0];
        for(int i=1;i<n;i++)
        {
            current_sum = max(nums[i], current_sum+nums[i]);
            global_sum = max(global_sum, current_sum);
        }
        return global_sum;
    }
};
