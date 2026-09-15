class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left=0, sum=0;
        int right=0;
        int n= nums.size();
        for (int x: nums){
            sum+=x;
        }
        for(int i=0; i<n; i++){
            right=sum-left-nums[i];
            if(left == right){
                return i;
            }
            left+=nums[i];
        }
        return -1;
    }
};