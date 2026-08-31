class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_set<int> set;
        int maxLen = 0;
        int left = 0;
        for(int right = 0; right < n; right++){
            while(set.count(s[right])){
                set.erase(s[left]);
                left++;
            }
            int currLen= right-left+1;
            set.insert(s[right]);
            maxLen= max(maxLen, currLen);
        }
    return maxLen;
    }
};