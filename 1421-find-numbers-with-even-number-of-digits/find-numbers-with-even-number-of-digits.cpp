class Solution {
public:
    bool isEven(int num) {
        int res=0;
        while(num>0){
            num=num/10;
            res++;
         
        }
        return res%2==0;
        
    };
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(isEven(nums[i])) count++;
        }
        return count;
        
    }
};