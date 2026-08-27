class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        int n = nums.size();

        for (int k = n - 1; k >= 0; k--) {
            if (nums[k] < 9) {
                nums[k]++;
                return nums;
            } else {
                nums[k] = 0;   
            }
        }
        nums.insert(nums.begin(), 1);  //if 999 or 99 then loop will not return anthing therfore we put 1 at the begin of the vector
        return nums;
    }
};

        

