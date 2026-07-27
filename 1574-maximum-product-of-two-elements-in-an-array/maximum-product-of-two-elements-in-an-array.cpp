class Solution {
public:
    int maxProduct(vector<int>& nums) {
         sort(nums.begin(),nums.end());
         int largest=nums[nums.size() - 1];
         int secondlargest=nums[nums.size()-2];
        int  product=(largest-1)*(secondlargest-1);
         return product;
    }
};