class Solution {
    typedef pair<int, int> P;
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<P, vector<P>, greater<P>> pq;
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            int value= it.first;
            int freq= it.second;
            pq.push({freq,value});
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
