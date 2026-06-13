class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int bestMax = 0;
        for(int i = 0; i < prices.size(); i++){
            for(int j = i; j < prices.size(); j++){
                if(prices[i] < prices[j]){
                    max = prices[j] - prices[i];
                }
                if(max > bestMax){
                    bestMax = max;
                }
            }
        }
        return bestMax;
    }
};


//ith represents a day