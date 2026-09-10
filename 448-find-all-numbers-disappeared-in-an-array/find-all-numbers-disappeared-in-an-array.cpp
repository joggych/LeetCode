class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> set;
        vector<int> res;
        int i=1;
        int s=nums.size();
            for(int x : nums) {
            set.insert(x);
        }
        while(i<=s){
            if(set.find(i) == set.end()){
                res.push_back(i);
            }
            i++;
        }
        return res;
    }
};