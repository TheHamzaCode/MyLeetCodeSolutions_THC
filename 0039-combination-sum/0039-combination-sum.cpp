class Solution {
public:
    void recsum(int i, int n, int target, vector<int> &ds, vector<vector<int>> &ans,vector<int>& candidates)
    {
        if(i==n){
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }

        if(candidates[i]<=target)
        {
            ds.push_back(candidates[i]);
            recsum(i,n,target-candidates[i],ds,ans,candidates);
            ds.pop_back();
        }
        recsum(i+1,n,target,ds,ans,candidates);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> ans;
        recsum(0,candidates.size(),target,ds, ans, candidates);
        return ans;
    }
};