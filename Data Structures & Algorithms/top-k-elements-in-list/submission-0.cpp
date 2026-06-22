class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int> count;
        priority_queue<pair<int,int>> q;

        for(int num : nums){
            count[num]++;
        }

        for(const auto& [key,value] : count){
            q.push({value,key});
        }

        for(int i = 0; i < k; i++){
            result.push_back(q.top().second);
            q.pop();
        }

        return result;


    }
};
