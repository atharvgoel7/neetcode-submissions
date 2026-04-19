class Solution {
public:
    int characterReplacement(string s, int k) {
        vector <int> freq(26,0);
        int maxFreq=0;
        int l=0;
        int res=0;
        for(int i=0; i<s.length(); i++){
            freq[s[i]-'A']++;
            maxFreq = max(maxFreq, freq[s[i]-'A']);
            while((i-l+1) -maxFreq> k){
                freq[s[l]-'A']--;
                l++;
            }
            res = max(res, i-l+1);
        }
        return res;
    }
};
