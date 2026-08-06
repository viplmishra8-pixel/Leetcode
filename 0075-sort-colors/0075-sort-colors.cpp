class Solution {
public:
    int count(vector<int>& nums, int color) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == color) {
                cnt++;
            }
        }
        return cnt;
    }

    void sortColors(vector<int>& nums) {
        int red = count(nums, 0);
        int white = count(nums, 1);
        int blue = count(nums, 2);

        for (int i = 0; i < red; i++) {
            nums[i] = 0;
        }

        for (int i = red; i < red + white; i++) {
            nums[i] = 1;
        }

        for (int i = red + white; i < nums.size(); i++) {
            nums[i] = 2;
        }
    }
};