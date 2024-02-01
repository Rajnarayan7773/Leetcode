class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
           int idx1 = -1;
        int idx2 = -1;
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    idx1 = i;
                    idx2 = j;
                    break;
                }
            }
        }

        std::vector<int> ans(2, 0);
        ans[0] = idx1;
        ans[1] = idx2;

        return ans;
    }
};
