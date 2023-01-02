class Solution {
public:
    void data(vector<int>&v1, vector<vector<int>>&v2, int idx, int sum, int n, int k)
    {
        if(sum==n && k==0)
        {
            v2.push_back(v1);
        }
        if(sum>n)
        {
            return ;
        }
        for(int i=idx;i<10;i++)
        {
            v1.push_back(i);
            data(v1, v2, i+1, sum+i, n, k-1);
            v1.pop_back();

        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>v1;
        vector<vector<int>>v2;
        data(v1,v2,1,0,n,k);
        return v2;
    }
};