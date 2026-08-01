class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
         int n=nums.size();
       int reader=0;
       int writer=0;
       for(reader=0;reader<n;reader++){
        if(nums[reader]!=val){
            swap(nums[reader],nums[writer]);
        writer++;
        }
       }
       return writer;
    }
};