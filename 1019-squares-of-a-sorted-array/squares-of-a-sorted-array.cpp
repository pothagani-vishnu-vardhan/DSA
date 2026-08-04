class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n);

        int left = 0;
        int right = n - 1;
        int writer = n - 1;

        while (left <= right) {

            if (abs(nums[left]) > abs(nums[right])) {
                ans[writer] = nums[left] * nums[left];
                left++;
            }
            else {
                ans[writer] = nums[right] * nums[right];
                right--;
            }

            writer--;
        }

        return ans;
    }
};