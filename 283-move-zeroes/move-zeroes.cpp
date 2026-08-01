class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int reader=0;
        int writer=0;
        for(reader=0;reader<n;reader++){
            if(nums[reader]!=0){
                swap(nums[reader],nums[writer]);
                writer++;
            }
        }
    }
};