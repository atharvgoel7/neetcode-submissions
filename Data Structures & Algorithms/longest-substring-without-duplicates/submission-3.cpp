class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int res=0;
        vector<int> freq(256,0);
        for(int i=0; i<s.length(); i++){
            freq[s[i]]++;
            while(freq[s[i]]>1){
                freq[s[l]]--;
                l++;
            }
            res=max(res, i-l+1);
        }
        return res;
    }
};
