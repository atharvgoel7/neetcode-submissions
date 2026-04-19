class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(), piles.end());
        int m=0;
        while(l<r){
            int hc=0;
            m= l+(r-l)/2;
            for(auto i: piles){
                hc+= ceil((double)i/m);
            }

            if(hc<=h) r=m;
            else l= m+1;
        }
        return l;
    }
};
