class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int,int> map;
            vector<int> res;
            for(int i=0;i<nums.size();i++){
               map.insert({nums[i], i}); 
            }
            for(int i=0;i<nums.size();i++){
                int lookup = target-nums[i];
                if(map.find(lookup) != map.end() && map[lookup]!=i){

                         res.push_back(i);
                res.push_back(map[lookup]);
                return res;
                }  //if the lookup elemt exist 
                
            }       
            return res;

    };
};
//  for(int i = 0; i < nums.size(); i++) {

        //     for(int j = 0; j < nums.size(); j++) {

        //         if(i != j && nums[i] + nums[j] == target) {
        //             res.push_back(i);
        //             res.push_back(j);
        //             return res;
        //         }
        //     }
        // }

        // return res;
        // for(int i = 0; i < nums.size(); i++) {

        //     for(int j = 0; j < nums.size(); j++) {

        //         if(i != j && nums[i] + nums[j] == target) {
        //             res.push_back(i);
        //             res.push_back(j);
        //             return res;
        //         }
        //     }
        // }

        // return res;