class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> set;
        int n=s.length();
        int left, size=0;
        for(int right=0; right<n; right++){
            while(set.count(s[right])){
                set.erase(s[left]);
                left++;
            }
            set.insert(s[right]);
            int len=right-left+1;
            size= max(len, size);
        }
        return size;
    }
};