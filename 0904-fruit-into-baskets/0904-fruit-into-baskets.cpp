class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> dih;

        int l = 0;
        int res = 0;

        for (int r = 0; r < fruits.size(); r++) {
            dih[fruits[r]]++;

            while (dih.size() > 2) {
                dih[fruits[l]]--;

                if (dih[fruits[l]] == 0)
                    dih.erase(fruits[l]);

                l++;
            }

            res = max(res, r - l + 1);
        }

        return res;
    }
};