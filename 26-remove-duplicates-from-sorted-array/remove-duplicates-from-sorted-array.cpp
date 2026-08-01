class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int reader=1;
       int writer=1;
       int n=nums.size();
       for(reader=0;reader<n;reader++){
        if(nums[reader]!=nums[writer-1]){
        swap(nums[reader],nums[writer]);
        writer++;
       }
       }
       return writer;
    }
};