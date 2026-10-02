class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int res = 0;

        for (int i = 0; i < n; i++) {
            vector<bool> vis(256, false);

            for (int j = i; j < n; j++) {

                if (vis[s[j]] == true)
                    break;

                vis[s[j]] = true;
                res = max(res, j - i + 1);
            }
        }

        return res;
    }
};