#include <iostream>
#include <vector>

using namespace::std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int n=prices.size();
        int min=prices[0];
        for(int i=1;i<n;i++)
        {
            if(min>prices[i])
            {
                min = prices[i];
            }
            else if(prices[i]>min)
            {
                int c_profit =prices[i]-min;
                if(profit<c_profit)
                {
                    profit =c_profit;
                }
            }
        }
        return profit;
    }
};
