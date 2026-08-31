class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_set<int> set;
        long currSum=0, maxSum=0;
        int left;
        for(int right=0;right<nums.size();right++){
            while(set.count(nums[right]) || set.size()==k){
                set.erase(nums[left]);
                currSum-=nums[left];
                left++;
            }
            currSum+=nums[right];
            set.insert(nums[right]);
            if(set.size()==k){
                maxSum=max(currSum, maxSum);
            }
        }
        return maxSum;
    }
};