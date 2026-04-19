class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int d;
        for(int i=0; i< nums.size(); i++){
            d=target-nums[i];
            if(mp.find(d)!= mp.end()){
                return {mp[d],i};
            }
            mp.insert({nums[i],i});
        }
        return {0,0};
    }
};
