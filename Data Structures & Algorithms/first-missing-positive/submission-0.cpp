class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,bool>mp;
        for(int num: nums){
            mp[num]=true;
        }
        for(int i=1;i<=nums.size()+1;i++){
            if(!mp[i])return i;
        }
        return -1;
    }
};