class Solution {
public:

   
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int m=numsDivide.size();
        int num=0,num1=numsDivide[0];
        for(int i=1;i<m;i++)
        {
            num1=__gcd(num1,numsDivide[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(num1%nums[i]==0)
            {
                break;
            }
            else
            {
                num++;
            }
        }
        return ( num==n)?-1:num;
    }
};