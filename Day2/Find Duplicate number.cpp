/*
The solution uses tortoise hare method to find the Duplicate in the array
Time complexity: O(n)
Auxiliary Space: O(1)
*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0]; 
        do {
            slow = nums[slow]; 
            fast = nums[nums[fast]]; 
        } while(slow != fast); 
        
        fast = nums[0]; 
        while(slow != fast) {
            slow = nums[slow]; 
            fast = nums[fast]; 
        }
        return slow;
    }
};
