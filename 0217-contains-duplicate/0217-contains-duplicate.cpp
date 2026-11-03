class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n= nums.size();
        unordered_set<int> mp;
        for(int i = 0; i<n;i++){
            if (mp.count(nums[i])){
                    return true;
                }
            mp.insert(nums[i]);
        }
        return false;
    }
};