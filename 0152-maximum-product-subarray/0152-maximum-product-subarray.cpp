class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxPro = nums[0];
        int minPro = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] < 0)
                swap(maxPro, minPro);

            maxPro = max(nums[i], nums[i] * maxPro);
            minPro = min(nums[i], nums[i] * minPro);

            ans = max(ans, maxPro);
        }

        return ans;
    }
};