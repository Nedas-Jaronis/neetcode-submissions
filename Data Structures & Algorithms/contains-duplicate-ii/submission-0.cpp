class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int size = nums.size();
        for(int i = 0; i < size; i++){
            for(int j = i + 1; j < size; j++){
                if(abs(i - j) <= k && nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};