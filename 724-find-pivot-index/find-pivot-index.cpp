class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightsum=0;
        int leftsum=0;
        for(int i=0;i<nums.size();i++){
            rightsum=rightsum + nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(leftsum == rightsum-nums[i]){
                return i;
            }
            leftsum=leftsum+nums[i];
            rightsum=rightsum-nums[i];
        }
        return -1;
    }
};