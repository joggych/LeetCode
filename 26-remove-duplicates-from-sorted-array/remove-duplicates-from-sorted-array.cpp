class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        for(int j=1; j<nums.size();j++){
            if(nums[j] != nums[j-1]){
                nums[k]=nums[j];
                k++;
                     // tho tho final nums value will be 
                     //for test case  [0,0,1,1,1,2,2,3,3,4]
                     // 0,1,2,3,4,2,2,3,3,4 
            } 
            
        }
        return k;
        
    }
};