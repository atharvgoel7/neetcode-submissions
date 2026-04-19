class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int d=0;
        int n=INT_MAX;
        int s=0;
        for(int i=0; i< prices.size(); i++){
            if(n>prices[i]){
                n=prices[i];
            }
            s=prices[i]-n;
            if(s>d){
                d=s;
            }
        }  
        return d;      
    }
};
