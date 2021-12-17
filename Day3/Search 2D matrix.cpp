class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        if(n==1)
        {
            int l=0, r=m-1;
            while(l<=r)
            {
                int mid=l+(r-l)/2;
                if(target==matrix[mid][0])
                    return true;
                else if(target>matrix[mid][0])
                    l=mid+1;
                else
                    r=mid-1;
            }
            return false;
        }
        else if(m==1)
        {
            int l=0, r=n-1;
            while(l<=r)
            {
                int mid=l+(r-l)/2;
                if(target==matrix[0][mid])
                    return true;
                else if(target>matrix[0][mid])
                    l=mid+1;
                else
                    r=mid-1;
            }
            return false;
        }
        int l=0, r=m-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(target==matrix[mid][0])
                return true;
            else if(target<matrix[mid][0])
                r=mid-1;
            else if(mid+1==m)
            {
                int l1=1,r1=n-1;
                while(l1<=r1)
                {
                    int mid1=l1+(r1-l1)/2;
                    if(target==matrix[mid][mid1])
                        return true;
                    else if(target>matrix[mid][mid1])
                        l1=mid1+1;
                    else
                        r1=mid1-1;
                }
                return false;
            }
            else if(target<matrix[mid+1][0])
            {
                int l1=1,r1=n-1;
                while(l1<=r1)
                {
                    int mid1=l1+(r1-l1)/2;
                    if(target==matrix[mid][mid1])
                        return true;
                    else if(target>matrix[mid][mid1])
                        l1=mid1+1;
                    else
                        r1=mid1-1;
                }
                return false;
            }
            else
                l=mid+1;
        }
        return false;
    }
};
