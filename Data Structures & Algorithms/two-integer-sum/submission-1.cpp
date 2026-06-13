class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            int target2 = target - nums[i];
            auto it = std::find(nums.begin() + i + 1, nums.end(), target2);
            if(it != nums.end()){
                int j = it - nums.begin();
                return {i,j};
            }
        }
        return {};
        
    }
};
