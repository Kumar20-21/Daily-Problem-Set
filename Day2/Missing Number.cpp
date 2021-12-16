/*
Method 1: sum of 1 to n and then subtracting the numbers in an array, one by one, the left number is the answer
Time complexity: O(N)
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long int n=(long int)nums.size();
        int m =n;
        if(0==n%2)
            n=(n/2)*(n+1);
        else
            n=((n+1)/2)*n;
        for(int i=0;i<m;i++)
        {
            n=n-nums[i];
        }
        return n;
    }
};


/*
Method 2: XORing numbers from zero to n twice. Since aXORa=0

Time Complexity: O(N)
Auxiliary Space: O(1)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = nums.size();
        int i=0;
        
        for(int num:nums){
            result ^= num;
            result ^= i;
            i++;
        }
        
        return result;
    }
}
*/
