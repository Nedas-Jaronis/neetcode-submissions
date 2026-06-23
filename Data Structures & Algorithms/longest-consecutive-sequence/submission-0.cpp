class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;

        for(int num : nums){
            s.insert(num);
        }
        
        int result = 0;
        for(int num : s){
            if (s.count(num - 1) == 0){
                int length = 1;
                int current = num;

                 while (s.count(current + 1)) {
                    current++;
                    length++;
                }
            
                result = max(result,length);
            }
        }

        return result;
    }
};
