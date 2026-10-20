class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0,right=left,count=0,temp=0;
        while(right!=nums.size()){
            if(nums[left]==nums[right]){
                if(count<2){count++;}
                else{
                    nums[right]=INT_MAX;
                    temp++;
                }
            }
            else{
                left=right;
                count=0;
                continue;
            }
            right++;
        }
        int output = nums.size()-temp;
        sort(nums.begin(),nums.end());
        return output;
    }
};