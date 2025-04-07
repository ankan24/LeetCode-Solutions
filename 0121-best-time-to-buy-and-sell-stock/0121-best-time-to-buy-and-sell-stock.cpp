class Solution {
public:
    int maxProfit(vector<int>& p) {
        int minpri = p[0];
        int mxpro = 0;

        for(int i=1;i<p.size();i++){
            if(minpri > p[i]){
                minpri = p[i];
            }
            int cost = p[i]-minpri;
            mxpro = max(cost,mxpro);
        } 
        return mxpro;
    }
};