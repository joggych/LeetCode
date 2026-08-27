class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int,int> freq;
        //making freq map
        for(int num : nums1){
            freq[num]++; //it is accotomatically incresease the index 0 to 1
        }
        //checking nums2 vlaue in map
        
         for (int num : nums2) {
            if (freq[num] > 0) {
                res.push_back(num);
                freq[num]--;   // "use up" one occurrence
            }
        }

        return res;
    }
};
    