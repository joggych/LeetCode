class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int  n=digits.size();
        for(int j=n-1;j>=0;j--){
            if(digits[j]<9) {
                digits[j]=digits[j]+1;
                return digits;
            }
            else digits[j]=0;
        }
            
        //if case like 9 ,99 ,999
        digits.insert(digits.begin(), 1);
        return digits;
        
    }
};