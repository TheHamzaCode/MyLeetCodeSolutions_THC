class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int currSum=0;
        int res=INT_MAX;
        for(int high=0; high<n; high++){
            currSum+=nums[high];
            while(currSum>=target){
                int len=high-low+1;
                res=min(res, len);
                currSum=currSum-nums[low];
                low++;
            } 
        }
        if (res==INT_MAX) res=0;
        return res;
    }
};