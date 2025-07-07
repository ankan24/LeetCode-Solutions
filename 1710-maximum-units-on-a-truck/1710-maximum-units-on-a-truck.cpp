class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
         priority_queue<pair<int,int>> pq;
         int c = 0;
         int u = 0;
         for(vector<int> x : boxTypes){
            pq.push({x[1],x[0]});
         }
            while(!pq.empty() && c<truckSize){
                 if(c+pq.top().second < truckSize){
                       c += pq.top().second;
                       u += pq.top().first * pq.top().second;
                    pq.pop();
                 }else{
                    int qnt = truckSize-c;
                    c += qnt;
                    u +=qnt*pq.top().first;
                    pq.pop();
                 }
            }
      return u;
    }
};