class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // unordered_set<int> mySet1;
        // unordered_set<int> mySet2;
        vector<int> res;
        unordered_set<int> mySet1(nums1.begin(), nums1.end());
        unordered_set<int> mySet2(nums2.begin(), nums2.end());
        //for shorten the for loop be can also arite
        // for(int i=0;i<nums1.size();i++){
        //     mySet1.insert(nums1[i]);
           
        // }
        // for(int j=0;j<nums2.size();j++){
        // mySet2.insert(nums2[j]);
           
        // }
       for (int num : mySet1) {
            if (mySet2.count(num)) {   // c
                res.push_back(num);
            }
        }
        return res;
        
    }
};