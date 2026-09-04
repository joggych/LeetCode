class Solution {
public:
    int heightChecker(vector<int>& heights) {
       vector<int> newArr(heights.size());
       copy(heights.begin(), heights.end(), newArr.begin());
       sort(newArr.begin(),newArr.end());
       int count=0;
       for(int i=0;i<heights.size();i++){
        if(heights[i]!=newArr[i]) count++;
       }
       return count;
    }
        
    
};