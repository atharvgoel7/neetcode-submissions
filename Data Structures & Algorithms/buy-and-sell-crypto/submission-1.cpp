class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int d=0;
        int n=INT_MAX;
        for(int i=0; i< prices.size(); i++){
            if(n>prices[i]){
                n=prices[i];
            }
            d=max(d,prices[i]-n);
            
        }  
        return d;      
    }
};
